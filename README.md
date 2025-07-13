# 🏠 Student Housing Management System (Qt & C++)

> A desktop application for managing student housing — including login, room management, reservations, and maintenance — built using Qt framework with C++ for a smooth and intuitive GUI experience.

---

## 🚀 Project Overview

This Student Housing Management System is designed to simplify administration and management of student dormitories. It provides a secure login interface with role-based access, and modules to:

* Manage rooms (available, occupied, damaged)
* Handle room reservations
* Track and schedule maintenance requests
* Separate dashboards for admin and student users

The project is built with modular, maintainable Qt C++ code, featuring interactive tables and dialogs for efficient workflow.

---

## 🧩 Key Features

* **Secure Login System**

  * Validates user credentials with hashed passwords (MD5)
  * Supports both admin and student user roles
  * Input validation with informative error messages

* **Admin Dashboard**

  * Central hub for navigation to rooms, reservations, and maintenance modules

* **Room Management**

  * View, edit, search, and delete occupied rooms
  * View available rooms and room details
  * View damaged rooms and repair statuses
  * Interactive QTableWidgets for data display and editing

* **Room Reservation**

  * Reserve rooms by entering student and payment details
  * Validation of required fields
  * Simple confirmation dialog on reservation save

* **Maintenance Management**

  * Track maintenance tasks with cost and status
  * Edit, save, and delete maintenance records
  * View current maintenance statuses for rooms

* **Navigation**

  * Seamless switching between modules (Room, Reservation, Maintenance, Dashboard)
  * Modal dialogs to keep workflow contained and user-friendly

---

## 🛠️ Technology Stack

| Layer         | Technology                          |
| ------------- | ----------------------------------- |
| Programming   | C++                                 |
| GUI Framework | Qt (Widgets, QDialog, QTableWidget) |
| Database      | MySQL (connected via Qt SQL)        |
| Hashing       | MD5 implemented in C++              |

---

## 📁 Project Structure

```plaintext
src/
├── mainwindow.cpp          # Login window and logic
├── login_controller.cpp    # Login verification and role-based redirection
├── admindashboard.cpp      # Admin main navigation dashboard
├── room.cpp                # Room management (occupied, available, damaged)
├── reserveroom.cpp         # Room reservation dialog
├── rmaintenance.cpp        # Room maintenance tracking
├── md5.cpp                 # MD5 hashing algorithm implementation
├── *.h                    # Header files corresponding to above
└── ui/                    # Qt Designer UI files (optional)
```

---

## 🔧 Setup and Run Instructions

1. **Prerequisites**

   * Qt 5 or 6 installed (Qt Creator recommended)
   * C++ compiler (e.g., GCC, MSVC)
   * MySQL server running with database `student_mang_sys` (or adjust connection settings)
   * Qt SQL module enabled for database connectivity

2. **Configure Database Connection**

   * Default in `mainwindow.cpp` connects to MySQL on `localhost`, port `3306`
   * Update credentials if needed

3. **Build and Run**

   * Open project in Qt Creator
   * Build all sources
   * Run the executable; login screen appears first

4. **Login Credentials**
     OffLine Test
   * For testing (hardcoded):

     * Admin: `admin` / `1234`
     * Student: `student` / `1234`

5. **Usage**

   * Login as admin to access all features
   * Navigate through dashboard to manage rooms, reservations, and maintenance

---

## 🧑‍💻 How It Works

* **Login Flow**

  * User inputs username and password
  * Inputs hashed with MD5
  * Verified either via simple hardcoded check or (future) database query
  * On success, user is redirected to their respective dashboard

* **Room Module**

  * Displays tables of occupied, available, and damaged rooms
  * Supports edit, save, delete, and search functionalities for occupied rooms
  * Provides navigation to reservation and maintenance dialogs

* **Reservation Module**

  * Form to enter reservation details with validation
  * Save action confirms reservation info with the user

* **Maintenance Module**

  * Lists maintenance records for rooms
  * Allows editing, saving, and deleting maintenance entries
  * Statuses include Pending, Repairing, Full Repair

---

## 📈 Future Enhancements

* Full database integration for persistent data storage and retrieval
* Role-based access control with session management
* Reporting and analytics dashboards
* Email or SMS notifications for reservation and maintenance updates
* Automated room availability updates upon reservation
* UI improvements and responsive design

---

## 🙌 Contribution

Feel free to fork and contribute! Suggested steps:

1. Fork the repository
2. Create a feature branch
3. Commit your changes
4. Push and create a pull request

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).

---

## ✨ Author

Made with ❤️ by SecureAuditX
