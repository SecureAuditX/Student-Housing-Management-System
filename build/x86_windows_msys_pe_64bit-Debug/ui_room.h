/********************************************************************************
** Form generated from reading UI file 'room.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOM_H
#define UI_ROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Room
{
public:
    QPlainTextEdit *RoomBG_plainTextEdit;
    QPlainTextEdit *LeftSide_plainTextEdit;
    QLabel *DashName_label_7;
    QLabel *DashName_label_8;
    QToolButton *overviewButton;
    QPushButton *roomButton;
    QPushButton *reserveButton;
    QPushButton *maintenanceButton;
    QToolButton *settingButton;
    QTabWidget *tabWidget;
    QWidget *OccupiedRooms;
    QTableWidget *occupiedRoomsTable;
    QWidget *AvailabeRooms;
    QTableWidget *availableRoomsTable;
    QWidget *DamagedRooms;
    QTableWidget *damagedRoomsTable;
    QPushButton *saveButton;
    QPushButton *searchButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QLineEdit *search_lineEdit;
    QLabel *search_label;

    void setupUi(QDialog *Room)
    {
        if (Room->objectName().isEmpty())
            Room->setObjectName(QString::fromUtf8("Room"));
        Room->resize(1041, 639);
        RoomBG_plainTextEdit = new QPlainTextEdit(Room);
        RoomBG_plainTextEdit->setObjectName(QString::fromUtf8("RoomBG_plainTextEdit"));
        RoomBG_plainTextEdit->setGeometry(QRect(0, 0, 1051, 641));
        RoomBG_plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: skyblue;\n"
"}\n"
""));
        LeftSide_plainTextEdit = new QPlainTextEdit(Room);
        LeftSide_plainTextEdit->setObjectName(QString::fromUtf8("LeftSide_plainTextEdit"));
        LeftSide_plainTextEdit->setGeometry(QRect(0, 0, 191, 641));
        LeftSide_plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #2c3e50;  /* Dark blue-gray */\n"
"    color: white;               /* Text color */\n"
"    font-weight: bold;\n"
"    border: none;\n"
"}"));
        DashName_label_7 = new QLabel(Room);
        DashName_label_7->setObjectName(QString::fromUtf8("DashName_label_7"));
        DashName_label_7->setGeometry(QRect(30, 30, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Bookman Old Style"));
        font.setPointSize(18);
        font.setBold(true);
        DashName_label_7->setFont(font);
        DashName_label_8 = new QLabel(Room);
        DashName_label_8->setObjectName(QString::fromUtf8("DashName_label_8"));
        DashName_label_8->setGeometry(QRect(10, 60, 171, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bookman Old Style"));
        font1.setPointSize(15);
        font1.setBold(true);
        DashName_label_8->setFont(font1);
        overviewButton = new QToolButton(Room);
        overviewButton->setObjectName(QString::fromUtf8("overviewButton"));
        overviewButton->setGeometry(QRect(30, 140, 131, 31));
        roomButton = new QPushButton(Room);
        roomButton->setObjectName(QString::fromUtf8("roomButton"));
        roomButton->setGeometry(QRect(30, 220, 131, 31));
        reserveButton = new QPushButton(Room);
        reserveButton->setObjectName(QString::fromUtf8("reserveButton"));
        reserveButton->setGeometry(QRect(30, 290, 131, 31));
        maintenanceButton = new QPushButton(Room);
        maintenanceButton->setObjectName(QString::fromUtf8("maintenanceButton"));
        maintenanceButton->setGeometry(QRect(30, 370, 131, 29));
        settingButton = new QToolButton(Room);
        settingButton->setObjectName(QString::fromUtf8("settingButton"));
        settingButton->setGeometry(QRect(30, 570, 131, 31));
        tabWidget = new QTabWidget(Room);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(200, 0, 971, 451));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        tabWidget->setFont(font2);
        OccupiedRooms = new QWidget();
        OccupiedRooms->setObjectName(QString::fromUtf8("OccupiedRooms"));
        occupiedRoomsTable = new QTableWidget(OccupiedRooms);
        if (occupiedRoomsTable->columnCount() < 5)
            occupiedRoomsTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        occupiedRoomsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        occupiedRoomsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        occupiedRoomsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        occupiedRoomsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        occupiedRoomsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        occupiedRoomsTable->setObjectName(QString::fromUtf8("occupiedRoomsTable"));
        occupiedRoomsTable->setGeometry(QRect(-10, 0, 861, 411));
        occupiedRoomsTable->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
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
        tabWidget->addTab(OccupiedRooms, QString());
        AvailabeRooms = new QWidget();
        AvailabeRooms->setObjectName(QString::fromUtf8("AvailabeRooms"));
        availableRoomsTable = new QTableWidget(AvailabeRooms);
        if (availableRoomsTable->columnCount() < 3)
            availableRoomsTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        availableRoomsTable->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        availableRoomsTable->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        availableRoomsTable->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        availableRoomsTable->setObjectName(QString::fromUtf8("availableRoomsTable"));
        availableRoomsTable->setGeometry(QRect(0, 0, 861, 411));
        availableRoomsTable->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
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
        tabWidget->addTab(AvailabeRooms, QString());
        DamagedRooms = new QWidget();
        DamagedRooms->setObjectName(QString::fromUtf8("DamagedRooms"));
        damagedRoomsTable = new QTableWidget(DamagedRooms);
        if (damagedRoomsTable->columnCount() < 4)
            damagedRoomsTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        damagedRoomsTable->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        damagedRoomsTable->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        damagedRoomsTable->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        damagedRoomsTable->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        damagedRoomsTable->setObjectName(QString::fromUtf8("damagedRoomsTable"));
        damagedRoomsTable->setGeometry(QRect(0, 0, 861, 411));
        damagedRoomsTable->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
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
        tabWidget->addTab(DamagedRooms, QString());
        saveButton = new QPushButton(Room);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(650, 580, 101, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        saveButton->setFont(font3);
        searchButton = new QPushButton(Room);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(470, 580, 101, 41));
        searchButton->setFont(font3);
        editButton = new QPushButton(Room);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(300, 580, 101, 41));
        editButton->setFont(font3);
        deleteButton = new QPushButton(Room);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(840, 580, 101, 41));
        deleteButton->setFont(font3);
        search_lineEdit = new QLineEdit(Room);
        search_lineEdit->setObjectName(QString::fromUtf8("search_lineEdit"));
        search_lineEdit->setGeometry(QRect(430, 480, 301, 41));
        search_lineEdit->setFont(font3);
        search_label = new QLabel(Room);
        search_label->setObjectName(QString::fromUtf8("search_label"));
        search_label->setGeometry(QRect(270, 480, 151, 31));
        search_label->setFont(font3);

        retranslateUi(Room);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Room);
    } // setupUi

    void retranslateUi(QDialog *Room)
    {
        Room->setWindowTitle(QCoreApplication::translate("Room", "Dialog", nullptr));
        DashName_label_7->setText(QCoreApplication::translate("Room", "ADMIN", nullptr));
        DashName_label_8->setText(QCoreApplication::translate("Room", "DASHBOARD", nullptr));
        overviewButton->setText(QCoreApplication::translate("Room", "Overview", nullptr));
        roomButton->setText(QCoreApplication::translate("Room", "Rooms", nullptr));
        reserveButton->setText(QCoreApplication::translate("Room", "Reserve Room", nullptr));
        maintenanceButton->setText(QCoreApplication::translate("Room", "Maintenance", nullptr));
        settingButton->setText(QCoreApplication::translate("Room", "Setting", nullptr));
        QTableWidgetItem *___qtablewidgetitem = occupiedRoomsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Room", "Room No", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = occupiedRoomsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Room", "Student ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = occupiedRoomsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Room", "Capacity", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = occupiedRoomsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Room", "Payment ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = occupiedRoomsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Room", "Duration of stay", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(OccupiedRooms), QCoreApplication::translate("Room", "Occupied Rooms", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = availableRoomsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Room", "Room No", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = availableRoomsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Room", "Capacity", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = availableRoomsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Room", "Price", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(AvailabeRooms), QCoreApplication::translate("Room", "Available Rooms", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = damagedRoomsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Room", "Room No", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = damagedRoomsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Room", "Capacity", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = damagedRoomsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Room", "Repair Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = damagedRoomsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Room", "Cost", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(DamagedRooms), QCoreApplication::translate("Room", "Damaged Rooms", nullptr));
        saveButton->setText(QCoreApplication::translate("Room", "Save", nullptr));
        searchButton->setText(QCoreApplication::translate("Room", "Search", nullptr));
        editButton->setText(QCoreApplication::translate("Room", "Edit", nullptr));
        deleteButton->setText(QCoreApplication::translate("Room", "Delete", nullptr));
        search_lineEdit->setPlaceholderText(QCoreApplication::translate("Room", "Search Data", nullptr));
        search_label->setText(QCoreApplication::translate("Room", "Enter Student ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Room: public Ui_Room {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOM_H
