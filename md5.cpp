#include "md5.h"
#include <cstring>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <vector>

// Define a shorthand for 32-bit unsigned integer
typedef unsigned int uint32;

namespace {
// Basic MD5 auxiliary functions
uint32 F(uint32 x, uint32 y, uint32 z) { return (x & y) | (~x & z); }
uint32 G(uint32 x, uint32 y, uint32 z) { return (x & z) | (y & ~z); }
uint32 H(uint32 x, uint32 y, uint32 z) { return x ^ y ^ z; }
uint32 I(uint32 x, uint32 y, uint32 z) { return y ^ (x | ~z); }

// Left rotate a 32-bit integer x by n bits
uint32 rotateLeft(uint32 x, int n) { return (x << n) | (x >> (32 - n)); }

// Convert a 32-bit integer to 4 bytes (little-endian)
void toBytes(uint32 val, wint_t* bytes) {
    for (int i = 0; i < 4; ++i) bytes[i] = (val >> (i * 8)) & 0xFF;
}

// Convert 4 bytes to a 32-bit integer (little-endian)
uint32 toUInt32(const wint_t* bytes) {
    return (uint32)bytes[0] | ((uint32)bytes[1] << 8) | ((uint32)bytes[2] << 16) | ((uint32)bytes[3] << 24);
}

// T[i] is the integer part of 4294967296 * abs(sin(i + 1))
const uint32 T[64] = {
    0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
    0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
    0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
    0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,
    0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
    0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8,
    0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed,
    0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,
    0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c,
    0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
    0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05,
    0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,
    0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039,
    0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
    0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
    0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391
};

// S[i] contains the per-round shift amounts
const int S[64] = {
    7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22,
    5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20,
    4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23,
    6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21
};
}

// Main MD5 hashing function
std::string md5(const std::string& input) {
    // Initialization constants (from RFC 1321)
    uint32 a0 = 0x67452301;
    uint32 b0 = 0xefcdab89;
    uint32 c0 = 0x98badcfe;
    uint32 d0 = 0x10325476;

    // Convert input string to byte vector
    std::vector<wint_t> msg(input.begin(), input.end());
    size_t originalLen = msg.size() * 8; // in bits

    // Step 1: append '1' bit (10000000 in binary)
    msg.push_back(0x80);

    // Step 2: pad with zeros until length ≡ 448 mod 512
    while ((msg.size() * 8) % 512 != 448) {
        msg.push_back(0x00);
    }

    // Step 3: append original length in bits, little-endian
    for (int i = 0; i < 8; ++i) {
        msg.push_back(originalLen >> (i * 8));
    }

    // Process message in 512-bit (64-byte) chunks
    for (size_t offset = 0; offset < msg.size(); offset += 64) {
        uint32 M[16];
        for (int i = 0; i < 16; ++i)
            M[i] = toUInt32(&msg[offset + i * 4]);

        // Initialize hash value for this chunk
        uint32 A = a0, B = b0, C = c0, D = d0;

        // Main MD5 loop: 64 operations
        for (int i = 0; i < 64; ++i) {
            uint32 Fval, g;
            if (i < 16) {
                Fval = F(B, C, D);
                g = i;
            } else if (i < 32) {
                Fval = G(B, C, D);
                g = (5 * i + 1) % 16;
            } else if (i < 48) {
                Fval = H(B, C, D);
                g = (3 * i + 5) % 16;
            } else {
                Fval = I(B, C, D);
                g = (7 * i) % 16;
            }

            uint32 temp = D;
            D = C;
            C = B;
            B = B + rotateLeft(A + Fval + T[i] + M[g], S[i]);
            A = temp;
        }

        // Add this chunk's hash to result so far
        a0 += A;
        b0 += B;
        c0 += C;
        d0 += D;
    }

    // Convert final hash to bytes
    wint_t digest[16];
    toBytes(a0, digest);
    toBytes(b0, digest + 4);
    toBytes(c0, digest + 8);
    toBytes(d0, digest + 12);

    // Convert to hex string
    std::ostringstream result;
    for (int i = 0; i < 16; ++i) {
        result << std::hex << std::setw(2) << std::setfill('0') << (int)digest[i];
    }

    return result.str();
}
