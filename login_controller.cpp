#include "login_controller.h"
#include <QMessageBox>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include "md5.h"
#include <QTreeWidgetItem>
#include "AdminDashboard.h"
#include "studentdashboard.h"  // Make sure to include the student dashboard header

Login_Controller::Login_Controller(QObject *parent)
    : QObject(parent)
{
}

void Login_Controller::performLogin(QSqlDatabase &db, QLineEdit *usernameLineEdit, QLineEdit *passwordLineEdit, QWidget *parentWidget)
{
    QString s_username = usernameLineEdit->text();
    QString s_password = passwordLineEdit->text();
    QString hashedUsername = QString::fromStdString(md5(s_username.toStdString()));
    QString hashedPassword = QString::fromStdString(md5(s_password.toStdString()));

    if (s_username.isEmpty() || s_password.isEmpty()) {
        QMessageBox::warning(parentWidget, "Input Error", "Please enter both username and password");
        usernameLineEdit->clear(); passwordLineEdit->clear(); usernameLineEdit->setFocus();
        emit loginFailed("Empty username or password."); return;
    }

    QChar firstChar = s_username[0];
    if (!firstChar.isLetter()) {
        QMessageBox::warning(parentWidget, "Invalid", "Username must start with a letter");
        usernameLineEdit->clear(); passwordLineEdit->clear(); usernameLineEdit->setFocus();
        emit loginFailed("Username must start with a letter."); return;
    }

    if (s_username.length() >= 16 || s_password.length() >= 16) {
        QMessageBox::warning(parentWidget, "Max-Size", "Username and Password are too long (max 15 characters).");
        usernameLineEdit->clear(); passwordLineEdit->clear(); usernameLineEdit->setFocus();
        emit loginFailed("Username or password exceeds maximum length."); return;
    }

    // Simple login check (temporary solution while database is not connecting)
    if ((s_username == "admin" && s_password == "1234") ||
        (s_username == "student" && s_password == "1234")) {

        QMessageBox::information(parentWidget, "Login Success", "WELCOME, " + s_username.toUpper());
        emit loginSuccessful(s_username);

        if (s_username == "admin") {
            AdminDashboard *admin = new AdminDashboard();
            admin->show();
            parentWidget->close();  // Close login window
        }
        else  if (s_username == "student") {
            studentdashboard *student = new studentdashboard();
            student->show();
            parentWidget->close();  // Close login window
        }

        usernameLineEdit->clear();
        passwordLineEdit->clear();
        usernameLineEdit->setFocus();
        return;
    }

    // If not using simple credentials, proceed with database login (commented out for now)
    /*
    QSqlQuery query(db);
    query.prepare("SELECT * FROM LOGIN WHERE username = :username AND password = :password");
    query.bindValue(":username", hashedUsername);
    query.bindValue(":password", hashedPassword);

    if (query.exec()) {
        if (query.next()) {
            QString role = query.value("role").toString();
            QMessageBox::information(parentWidget, "Login Success", "WELCOME, " + s_username.toUpper());
            emit loginSuccessful(s_username);

            if (role == "admin") {
                Dashboard *admin = new Dashboard();  // Assuming QDialog
                admin->show();
                parentWidget->close();  // Close login window
            } else if (role == "student") {
               StudentDashboard *student = new StudentDashboard();
               student->show();
               parentWidget->close();  // Close login window
            }
        } else {
            QMessageBox::critical(parentWidget, "Login Failed", "Invalid username or password, try again.");
            emit loginFailed("Invalid username or password.");
        }

        usernameLineEdit->clear(); passwordLineEdit->clear(); usernameLineEdit->setFocus();

    } else {
        QMessageBox::critical(parentWidget, "Database Error", "Query failed: " + query.lastError().text());
        qDebug() << "Login query error: " << query.lastError().text();
        emit loginFailed("Database query error: " + query.lastError().text());
    }
    */

    // If we reach here, the simple login failed
    QMessageBox::critical(parentWidget, "Login Failed", "Invalid username or password, try again.");
    emit loginFailed("Invalid username or password.");
    usernameLineEdit->clear();
    passwordLineEdit->clear();
    usernameLineEdit->setFocus();
}
