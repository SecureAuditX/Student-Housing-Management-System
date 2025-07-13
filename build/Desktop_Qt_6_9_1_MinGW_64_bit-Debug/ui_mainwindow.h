/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *password_LineEdit;
    QLabel *Password_label;
    QLabel *username_label;
    QPushButton *Login_Button;
    QLabel *schName_label;
    QLineEdit *username_LineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(904, 714);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(140, 60, 621, 341));
        password_LineEdit = new QLineEdit(centralwidget);
        password_LineEdit->setObjectName("password_LineEdit");
        password_LineEdit->setGeometry(QRect(330, 260, 301, 41));
        password_LineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: none;\n"
"border-bottom: 3px solid rgb(241, 92, 34);\n"
"background-color: Transparent;\n"
"color:black;\n"
"padding: 5px 5px 5px;\n"
"}\n"
"QLineEdit:Focus{\n"
"border: 2px solid rgb(241, 92, 34);\n"
"}"));
        Password_label = new QLabel(centralwidget);
        Password_label->setObjectName("Password_label");
        Password_label->setGeometry(QRect(180, 260, 151, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        font.setBold(true);
        Password_label->setFont(font);
        username_label = new QLabel(centralwidget);
        username_label->setObjectName("username_label");
        username_label->setGeometry(QRect(180, 180, 151, 31));
        username_label->setFont(font);
        Login_Button = new QPushButton(centralwidget);
        Login_Button->setObjectName("Login_Button");
        Login_Button->setGeometry(QRect(330, 318, 301, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        font1.setBold(true);
        Login_Button->setFont(font1);
        Login_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: none;\n"
"background-color: rgb(28, 130, 255);\n"
"border-radius: 15px;\n"
"color: black;\n"
"}\n"
"QPushButton:Hover{\n"
"border:none;\n"
"background-color:rgb(23,130, 255);\n"
"border-radius:15px;\n"
"color:red;\n"
"}\n"
"QPushButton:Pressed {\n"
"border:5px solid rgb(28, 130, 255);\n"
"background-color: rgb(28, 140, 255);\n"
"border-radius: 15px;\n"
"color: red;\n"
"}"));
        schName_label = new QLabel(centralwidget);
        schName_label->setObjectName("schName_label");
        schName_label->setGeometry(QRect(320, 100, 331, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(20);
        font2.setBold(true);
        schName_label->setFont(font2);
        schName_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        username_LineEdit = new QLineEdit(centralwidget);
        username_LineEdit->setObjectName("username_LineEdit");
        username_LineEdit->setGeometry(QRect(330, 180, 301, 41));
        username_LineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: none;\n"
"border-bottom: 3px solid rgb(241, 92, 34);\n"
"background-color: Transparent;\n"
"color:black;\n"
"padding: 5px 5px 5px;\n"
"}\n"
"QLineEdit:Focus{\n"
"border: 2px solid rgb(241, 92, 34);\n"
"}"));
        username_LineEdit->setEchoMode(QLineEdit::EchoMode::Normal);
        username_LineEdit->setReadOnly(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 904, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        password_LineEdit->setInputMask(QString());
        password_LineEdit->setText(QString());
        Password_label->setText(QCoreApplication::translate("MainWindow", "PASSWORD", nullptr));
        username_label->setText(QCoreApplication::translate("MainWindow", "USERNAME", nullptr));
        Login_Button->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        schName_label->setText(QCoreApplication::translate("MainWindow", "Nanchang University", nullptr));
        username_LineEdit->setInputMask(QString());
        username_LineEdit->setText(QString());
        username_LineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Characters Are Not Accepted (e.g: ?/>,.';)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
