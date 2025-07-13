/********************************************************************************
** Form generated from reading UI file 'rmaintenance.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RMAINTENANCE_H
#define UI_RMAINTENANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_RMaintenance
{
public:
    QPlainTextEdit *plainTextEdit;
    QLabel *DashName_label_7;
    QToolButton *Overview_Button;
    QPushButton *Room_Button;
    QPushButton *Maintenance_Button;
    QToolButton *Settings_Button;
    QPushButton *Reserve_Button;
    QLabel *DashName_label_8;
    QPlainTextEdit *LeftSide_plainTextEdit;
    QTableWidget *maintenance_table;
    QPushButton *Edit_Button;
    QPushButton *Save_Button;
    QPushButton *Delete_Button;

    void setupUi(QDialog *RMaintenance)
    {
        if (RMaintenance->objectName().isEmpty())
            RMaintenance->setObjectName(QString::fromUtf8("RMaintenance"));
        RMaintenance->resize(1051, 638);
        plainTextEdit = new QPlainTextEdit(RMaintenance);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 0, 1051, 641));
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #87CEEB;  /* Sky Blue Hex */\n"
"    border: none;\n"
"    color: black;                /* Optional: text color */\n"
"    font-weight: bold;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"}"));
        DashName_label_7 = new QLabel(RMaintenance);
        DashName_label_7->setObjectName(QString::fromUtf8("DashName_label_7"));
        DashName_label_7->setGeometry(QRect(30, 30, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Bookman Old Style"));
        font.setPointSize(18);
        font.setBold(true);
        DashName_label_7->setFont(font);
        Overview_Button = new QToolButton(RMaintenance);
        Overview_Button->setObjectName(QString::fromUtf8("Overview_Button"));
        Overview_Button->setGeometry(QRect(30, 120, 131, 31));
        Room_Button = new QPushButton(RMaintenance);
        Room_Button->setObjectName(QString::fromUtf8("Room_Button"));
        Room_Button->setGeometry(QRect(30, 200, 131, 31));
        Maintenance_Button = new QPushButton(RMaintenance);
        Maintenance_Button->setObjectName(QString::fromUtf8("Maintenance_Button"));
        Maintenance_Button->setGeometry(QRect(30, 360, 131, 29));
        Settings_Button = new QToolButton(RMaintenance);
        Settings_Button->setObjectName(QString::fromUtf8("Settings_Button"));
        Settings_Button->setGeometry(QRect(30, 570, 131, 31));
        Reserve_Button = new QPushButton(RMaintenance);
        Reserve_Button->setObjectName(QString::fromUtf8("Reserve_Button"));
        Reserve_Button->setGeometry(QRect(30, 280, 131, 31));
        DashName_label_8 = new QLabel(RMaintenance);
        DashName_label_8->setObjectName(QString::fromUtf8("DashName_label_8"));
        DashName_label_8->setGeometry(QRect(10, 60, 171, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bookman Old Style"));
        font1.setPointSize(15);
        font1.setBold(true);
        DashName_label_8->setFont(font1);
        LeftSide_plainTextEdit = new QPlainTextEdit(RMaintenance);
        LeftSide_plainTextEdit->setObjectName(QString::fromUtf8("LeftSide_plainTextEdit"));
        LeftSide_plainTextEdit->setGeometry(QRect(0, 0, 191, 641));
        LeftSide_plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #2c3e50;  /* Dark blue-gray */\n"
"    color: white;               /* Text color */\n"
"    font-weight: bold;\n"
"    border: none;\n"
"}"));
        maintenance_table = new QTableWidget(RMaintenance);
        if (maintenance_table->columnCount() < 4)
            maintenance_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        maintenance_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        maintenance_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        maintenance_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        maintenance_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        maintenance_table->setObjectName(QString::fromUtf8("maintenance_table"));
        maintenance_table->setGeometry(QRect(190, 0, 861, 421));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(true);
        maintenance_table->setFont(font2);
        maintenance_table->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
" color: red;\n"
"gridline-color: blue;\n"
"selection-color: green;\n"
"selection-background-color: blue;\n"
"font: italic 14pt \"Times New Roman\";\n"
"}\n"
"QTableWidget\"\"item:selected\n"
"{\n"
"color: white;\n"
"background-color: red;\n"
"}\n"
"QheaderView {\n"
"background-color:black;\n"
"color: white;\n"
"font: italic 14pt \"Times New Roman\";\n"
"}"));
        Edit_Button = new QPushButton(RMaintenance);
        Edit_Button->setObjectName(QString::fromUtf8("Edit_Button"));
        Edit_Button->setGeometry(QRect(380, 470, 93, 29));
        Save_Button = new QPushButton(RMaintenance);
        Save_Button->setObjectName(QString::fromUtf8("Save_Button"));
        Save_Button->setGeometry(QRect(540, 470, 93, 29));
        Delete_Button = new QPushButton(RMaintenance);
        Delete_Button->setObjectName(QString::fromUtf8("Delete_Button"));
        Delete_Button->setGeometry(QRect(700, 470, 93, 29));
        plainTextEdit->raise();
        LeftSide_plainTextEdit->raise();
        DashName_label_7->raise();
        Overview_Button->raise();
        Room_Button->raise();
        Maintenance_Button->raise();
        Settings_Button->raise();
        Reserve_Button->raise();
        DashName_label_8->raise();
        maintenance_table->raise();
        Edit_Button->raise();
        Save_Button->raise();
        Delete_Button->raise();

        retranslateUi(RMaintenance);

        QMetaObject::connectSlotsByName(RMaintenance);
    } // setupUi

    void retranslateUi(QDialog *RMaintenance)
    {
        RMaintenance->setWindowTitle(QCoreApplication::translate("RMaintenance", "Dialog", nullptr));
        DashName_label_7->setText(QCoreApplication::translate("RMaintenance", "ADMIN", nullptr));
        Overview_Button->setText(QCoreApplication::translate("RMaintenance", "Overview", nullptr));
        Room_Button->setText(QCoreApplication::translate("RMaintenance", "Rooms", nullptr));
        Maintenance_Button->setText(QCoreApplication::translate("RMaintenance", "Maintenance", nullptr));
        Settings_Button->setText(QCoreApplication::translate("RMaintenance", "Setting", nullptr));
        Reserve_Button->setText(QCoreApplication::translate("RMaintenance", "Reserve Room", nullptr));
        DashName_label_8->setText(QCoreApplication::translate("RMaintenance", "DASHBOARD", nullptr));
        QTableWidgetItem *___qtablewidgetitem = maintenance_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RMaintenance", "ROOM NO", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = maintenance_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RMaintenance", "CAPACITY", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = maintenance_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RMaintenance", "COST", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = maintenance_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RMaintenance", "M_STATUS", nullptr));
        Edit_Button->setText(QCoreApplication::translate("RMaintenance", "EDIT", nullptr));
        Save_Button->setText(QCoreApplication::translate("RMaintenance", "SAVE", nullptr));
        Delete_Button->setText(QCoreApplication::translate("RMaintenance", "DELETE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RMaintenance: public Ui_RMaintenance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RMAINTENANCE_H
