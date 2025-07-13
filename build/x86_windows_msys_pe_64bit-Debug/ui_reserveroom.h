/********************************************************************************
** Form generated from reading UI file 'reserveroom.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVEROOM_H
#define UI_RESERVEROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReserveRoom
{
public:
    QPushButton *Maintenance_pushButton_4;
    QLabel *DashName_label_8;
    QToolButton *toolButton;
    QPlainTextEdit *LeftSide_plainTextEdit;
    QToolButton *Settings_toolButton;
    QPushButton *reserve_Button;
    QPlainTextEdit *plainTextEdit;
    QLabel *DashName_label_7;
    QToolButton *overview_Button;
    QPushButton *room_Button;
    QPushButton *maintenance_Button;
    QToolButton *Settings_toolButton_2;
    QLabel *DashName_label_9;
    QPlainTextEdit *LeftSide_plainTextEdit_2;
    QLabel *header_label;
    QToolBox *verticalToolBox;
    QWidget *verticalToolBoxPage1;
    QVBoxLayout *verticalLayout;
    QLabel *studentid_label;
    QLineEdit *studentid_lineEdit;
    QLabel *room_label;
    QLabel *capacity_label;
    QLabel *paymentid_label;
    QLabel *duration_label;
    QLabel *price_label;
    QLineEdit *room_lineEdit;
    QLineEdit *paymentid_lineEdit;
    QLineEdit *duration_lineEdit;
    QLineEdit *price_lineEdit;
    QPushButton *save_Button;
    QPushButton *cancel_Button;
    QComboBox *capacity_comboBox;

    void setupUi(QDialog *ReserveRoom)
    {
        if (ReserveRoom->objectName().isEmpty())
            ReserveRoom->setObjectName(QString::fromUtf8("ReserveRoom"));
        ReserveRoom->resize(957, 631);
        Maintenance_pushButton_4 = new QPushButton(ReserveRoom);
        Maintenance_pushButton_4->setObjectName(QString::fromUtf8("Maintenance_pushButton_4"));
        Maintenance_pushButton_4->setGeometry(QRect(30, 320, 131, 29));
        DashName_label_8 = new QLabel(ReserveRoom);
        DashName_label_8->setObjectName(QString::fromUtf8("DashName_label_8"));
        DashName_label_8->setGeometry(QRect(10, 60, 171, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Bookman Old Style"));
        font.setPointSize(15);
        font.setBold(true);
        DashName_label_8->setFont(font);
        toolButton = new QToolButton(ReserveRoom);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(30, 120, 131, 31));
        LeftSide_plainTextEdit = new QPlainTextEdit(ReserveRoom);
        LeftSide_plainTextEdit->setObjectName(QString::fromUtf8("LeftSide_plainTextEdit"));
        LeftSide_plainTextEdit->setGeometry(QRect(0, 30, 191, 611));
        LeftSide_plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #2c3e50;  /* Dark blue-gray */\n"
"    color: white;               /* Text color */\n"
"    font-weight: bold;\n"
"    border: none;\n"
"}"));
        Settings_toolButton = new QToolButton(ReserveRoom);
        Settings_toolButton->setObjectName(QString::fromUtf8("Settings_toolButton"));
        Settings_toolButton->setGeometry(QRect(30, 570, 131, 31));
        reserve_Button = new QPushButton(ReserveRoom);
        reserve_Button->setObjectName(QString::fromUtf8("reserve_Button"));
        reserve_Button->setGeometry(QRect(30, 280, 131, 31));
        plainTextEdit = new QPlainTextEdit(ReserveRoom);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 0, 1041, 641));
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: skyblue;\n"
"}\n"
""));
        DashName_label_7 = new QLabel(ReserveRoom);
        DashName_label_7->setObjectName(QString::fromUtf8("DashName_label_7"));
        DashName_label_7->setGeometry(QRect(30, 30, 111, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bookman Old Style"));
        font1.setPointSize(18);
        font1.setBold(true);
        DashName_label_7->setFont(font1);
        overview_Button = new QToolButton(ReserveRoom);
        overview_Button->setObjectName(QString::fromUtf8("overview_Button"));
        overview_Button->setGeometry(QRect(30, 120, 131, 31));
        room_Button = new QPushButton(ReserveRoom);
        room_Button->setObjectName(QString::fromUtf8("room_Button"));
        room_Button->setGeometry(QRect(30, 200, 131, 31));
        maintenance_Button = new QPushButton(ReserveRoom);
        maintenance_Button->setObjectName(QString::fromUtf8("maintenance_Button"));
        maintenance_Button->setGeometry(QRect(30, 360, 131, 29));
        Settings_toolButton_2 = new QToolButton(ReserveRoom);
        Settings_toolButton_2->setObjectName(QString::fromUtf8("Settings_toolButton_2"));
        Settings_toolButton_2->setGeometry(QRect(30, 570, 131, 31));
        DashName_label_9 = new QLabel(ReserveRoom);
        DashName_label_9->setObjectName(QString::fromUtf8("DashName_label_9"));
        DashName_label_9->setGeometry(QRect(10, 60, 171, 41));
        DashName_label_9->setFont(font);
        LeftSide_plainTextEdit_2 = new QPlainTextEdit(ReserveRoom);
        LeftSide_plainTextEdit_2->setObjectName(QString::fromUtf8("LeftSide_plainTextEdit_2"));
        LeftSide_plainTextEdit_2->setGeometry(QRect(0, 0, 191, 641));
        LeftSide_plainTextEdit_2->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #2c3e50;  /* Dark blue-gray */\n"
"    color: white;               /* Text color */\n"
"    font-weight: bold;\n"
"    border: none;\n"
"}"));
        header_label = new QLabel(ReserveRoom);
        header_label->setObjectName(QString::fromUtf8("header_label"));
        header_label->setGeometry(QRect(360, 20, 301, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(13);
        header_label->setFont(font2);
        verticalToolBox = new QToolBox(ReserveRoom);
        verticalToolBox->setObjectName(QString::fromUtf8("verticalToolBox"));
        verticalToolBox->setGeometry(QRect(140, 550, 821, 80));
        verticalToolBoxPage1 = new QWidget();
        verticalToolBoxPage1->setObjectName(QString::fromUtf8("verticalToolBoxPage1"));
        verticalToolBoxPage1->setGeometry(QRect(0, 0, 821, 45));
        verticalLayout = new QVBoxLayout(verticalToolBoxPage1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalToolBox->addItem(verticalToolBoxPage1, QString::fromUtf8(""));
        studentid_label = new QLabel(ReserveRoom);
        studentid_label->setObjectName(QString::fromUtf8("studentid_label"));
        studentid_label->setGeometry(QRect(240, 99, 121, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(12);
        studentid_label->setFont(font3);
        studentid_lineEdit = new QLineEdit(ReserveRoom);
        studentid_lineEdit->setObjectName(QString::fromUtf8("studentid_lineEdit"));
        studentid_lineEdit->setGeometry(QRect(380, 100, 281, 31));
        room_label = new QLabel(ReserveRoom);
        room_label->setObjectName(QString::fromUtf8("room_label"));
        room_label->setGeometry(QRect(240, 170, 121, 31));
        room_label->setFont(font3);
        capacity_label = new QLabel(ReserveRoom);
        capacity_label->setObjectName(QString::fromUtf8("capacity_label"));
        capacity_label->setGeometry(QRect(240, 240, 121, 31));
        capacity_label->setFont(font3);
        paymentid_label = new QLabel(ReserveRoom);
        paymentid_label->setObjectName(QString::fromUtf8("paymentid_label"));
        paymentid_label->setGeometry(QRect(240, 310, 121, 31));
        paymentid_label->setFont(font3);
        duration_label = new QLabel(ReserveRoom);
        duration_label->setObjectName(QString::fromUtf8("duration_label"));
        duration_label->setGeometry(QRect(240, 380, 121, 31));
        duration_label->setFont(font3);
        price_label = new QLabel(ReserveRoom);
        price_label->setObjectName(QString::fromUtf8("price_label"));
        price_label->setGeometry(QRect(240, 450, 121, 31));
        price_label->setFont(font3);
        room_lineEdit = new QLineEdit(ReserveRoom);
        room_lineEdit->setObjectName(QString::fromUtf8("room_lineEdit"));
        room_lineEdit->setGeometry(QRect(380, 170, 281, 31));
        paymentid_lineEdit = new QLineEdit(ReserveRoom);
        paymentid_lineEdit->setObjectName(QString::fromUtf8("paymentid_lineEdit"));
        paymentid_lineEdit->setGeometry(QRect(380, 310, 281, 31));
        duration_lineEdit = new QLineEdit(ReserveRoom);
        duration_lineEdit->setObjectName(QString::fromUtf8("duration_lineEdit"));
        duration_lineEdit->setGeometry(QRect(380, 380, 281, 31));
        price_lineEdit = new QLineEdit(ReserveRoom);
        price_lineEdit->setObjectName(QString::fromUtf8("price_lineEdit"));
        price_lineEdit->setGeometry(QRect(380, 450, 281, 31));
        save_Button = new QPushButton(ReserveRoom);
        save_Button->setObjectName(QString::fromUtf8("save_Button"));
        save_Button->setGeometry(QRect(380, 510, 93, 29));
        cancel_Button = new QPushButton(ReserveRoom);
        cancel_Button->setObjectName(QString::fromUtf8("cancel_Button"));
        cancel_Button->setGeometry(QRect(570, 510, 93, 29));
        capacity_comboBox = new QComboBox(ReserveRoom);
        capacity_comboBox->setObjectName(QString::fromUtf8("capacity_comboBox"));
        capacity_comboBox->setGeometry(QRect(380, 240, 281, 31));
        plainTextEdit->raise();
        verticalToolBox->raise();
        LeftSide_plainTextEdit_2->raise();
        Maintenance_pushButton_4->raise();
        DashName_label_8->raise();
        toolButton->raise();
        LeftSide_plainTextEdit->raise();
        Settings_toolButton->raise();
        reserve_Button->raise();
        DashName_label_7->raise();
        overview_Button->raise();
        room_Button->raise();
        maintenance_Button->raise();
        Settings_toolButton_2->raise();
        DashName_label_9->raise();
        header_label->raise();
        studentid_label->raise();
        studentid_lineEdit->raise();
        room_label->raise();
        capacity_label->raise();
        paymentid_label->raise();
        duration_label->raise();
        price_label->raise();
        room_lineEdit->raise();
        paymentid_lineEdit->raise();
        duration_lineEdit->raise();
        price_lineEdit->raise();
        save_Button->raise();
        cancel_Button->raise();
        capacity_comboBox->raise();

        retranslateUi(ReserveRoom);

        QMetaObject::connectSlotsByName(ReserveRoom);
    } // setupUi

    void retranslateUi(QDialog *ReserveRoom)
    {
        ReserveRoom->setWindowTitle(QCoreApplication::translate("ReserveRoom", "Dialog", nullptr));
        Maintenance_pushButton_4->setText(QCoreApplication::translate("ReserveRoom", "Maintenance", nullptr));
        DashName_label_8->setText(QCoreApplication::translate("ReserveRoom", "DASHBOARD", nullptr));
        toolButton->setText(QCoreApplication::translate("ReserveRoom", "Overview", nullptr));
        Settings_toolButton->setText(QCoreApplication::translate("ReserveRoom", "Setting", nullptr));
        reserve_Button->setText(QCoreApplication::translate("ReserveRoom", "Reserve Room", nullptr));
        DashName_label_7->setText(QCoreApplication::translate("ReserveRoom", "ADMIN", nullptr));
        overview_Button->setText(QCoreApplication::translate("ReserveRoom", "Overview", nullptr));
        room_Button->setText(QCoreApplication::translate("ReserveRoom", "Rooms", nullptr));
        maintenance_Button->setText(QCoreApplication::translate("ReserveRoom", "Maintenance", nullptr));
        Settings_toolButton_2->setText(QCoreApplication::translate("ReserveRoom", "Setting", nullptr));
        DashName_label_9->setText(QCoreApplication::translate("ReserveRoom", "DASHBOARD", nullptr));
        header_label->setText(QCoreApplication::translate("ReserveRoom", "ROOM REGISTRATION FORM", nullptr));
        verticalToolBox->setItemText(verticalToolBox->indexOf(verticalToolBoxPage1), QString());
        studentid_label->setText(QCoreApplication::translate("ReserveRoom", "STUDENT ID", nullptr));
        room_label->setText(QCoreApplication::translate("ReserveRoom", "ROOM NO", nullptr));
        capacity_label->setText(QCoreApplication::translate("ReserveRoom", "CAPACITY", nullptr));
        paymentid_label->setText(QCoreApplication::translate("ReserveRoom", "PAYMENT ID", nullptr));
        duration_label->setText(QCoreApplication::translate("ReserveRoom", "DURATION", nullptr));
        price_label->setText(QCoreApplication::translate("ReserveRoom", "PRICE", nullptr));
        save_Button->setText(QCoreApplication::translate("ReserveRoom", "SAVE", nullptr));
        cancel_Button->setText(QCoreApplication::translate("ReserveRoom", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReserveRoom: public Ui_ReserveRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVEROOM_H
