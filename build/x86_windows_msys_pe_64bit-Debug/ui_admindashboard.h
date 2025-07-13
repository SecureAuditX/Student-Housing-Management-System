/********************************************************************************
** Form generated from reading UI file 'admindashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDASHBOARD_H
#define UI_ADMINDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_AdminDashboard
{
public:
    QPlainTextEdit *LeftSide_plainTextEdit;
    QLabel *DashName_label_8;
    QLabel *DashName_label_5;
    QLabel *label_2;
    QPushButton *reserveButton;
    QToolButton *Settings_Button;
    QLabel *label_13;
    QLabel *DashName_label_6;
    QLabel *label_8;
    QPushButton *roomButton;
    QPlainTextEdit *RightSide_plainTextEdit;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *RA_label_9;
    QPushButton *maintenanceButton;
    QLabel *MaintenanceRequest_label_4;
    QTextEdit *textEdit;
    QLabel *RA_label_8;
    QLabel *label_12;
    QLabel *RA_label_11;
    QFrame *line_16;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_5;
    QFrame *line_15;
    QLabel *label;
    QToolButton *OverviewButton;
    QLabel *label_11;
    QFrame *Chart_frame;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QPlainTextEdit *Chart_plainTextEdit_6;
    QPlainTextEdit *Chart_plainTextEdit_7;
    QPlainTextEdit *Chart_plainTextEdit_8;
    QPlainTextEdit *Chart_plainTextEdit_9;
    QPlainTextEdit *Chart_plainTextEdit_10;
    QLabel *RA_label_10;
    QLabel *OccupiedRoom_label_3;
    QLabel *RA_label_7;
    QFrame *line_14;
    QLabel *TotalRoom_label_2;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *TotalStudent_label;
    QLabel *DashName_label_7;
    QFrame *line_13;
    QLabel *label_14;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;

    void setupUi(QDialog *AdminDashboard)
    {
        if (AdminDashboard->objectName().isEmpty())
            AdminDashboard->setObjectName(QString::fromUtf8("AdminDashboard"));
        AdminDashboard->resize(1048, 642);
        LeftSide_plainTextEdit = new QPlainTextEdit(AdminDashboard);
        LeftSide_plainTextEdit->setObjectName(QString::fromUtf8("LeftSide_plainTextEdit"));
        LeftSide_plainTextEdit->setGeometry(QRect(0, 0, 191, 641));
        LeftSide_plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #2c3e50;  /* Dark blue-gray */\n"
"    color: white;               /* Text color */\n"
"    font-weight: bold;\n"
"    border: none;\n"
"}"));
        DashName_label_8 = new QLabel(AdminDashboard);
        DashName_label_8->setObjectName(QString::fromUtf8("DashName_label_8"));
        DashName_label_8->setGeometry(QRect(10, 80, 171, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Bookman Old Style"));
        font.setPointSize(15);
        font.setBold(true);
        DashName_label_8->setFont(font);
        DashName_label_5 = new QLabel(AdminDashboard);
        DashName_label_5->setObjectName(QString::fromUtf8("DashName_label_5"));
        DashName_label_5->setGeometry(QRect(200, 10, 171, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(18);
        font1.setBold(true);
        DashName_label_5->setFont(font1);
        label_2 = new QLabel(AdminDashboard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 570, 21, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        font2.setBold(false);
        label_2->setFont(font2);
        reserveButton = new QPushButton(AdminDashboard);
        reserveButton->setObjectName(QString::fromUtf8("reserveButton"));
        reserveButton->setGeometry(QRect(30, 290, 131, 31));
        Settings_Button = new QToolButton(AdminDashboard);
        Settings_Button->setObjectName(QString::fromUtf8("Settings_Button"));
        Settings_Button->setGeometry(QRect(30, 580, 131, 31));
        label_13 = new QLabel(AdminDashboard);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(900, 310, 151, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        label_13->setFont(font3);
        DashName_label_6 = new QLabel(AdminDashboard);
        DashName_label_6->setObjectName(QString::fromUtf8("DashName_label_6"));
        DashName_label_6->setGeometry(QRect(200, 50, 171, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(12);
        font4.setBold(false);
        DashName_label_6->setFont(font4);
        label_8 = new QLabel(AdminDashboard);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(240, 460, 21, 20));
        label_8->setFont(font2);
        roomButton = new QPushButton(AdminDashboard);
        roomButton->setObjectName(QString::fromUtf8("roomButton"));
        roomButton->setGeometry(QRect(30, 220, 131, 31));
        RightSide_plainTextEdit = new QPlainTextEdit(AdminDashboard);
        RightSide_plainTextEdit->setObjectName(QString::fromUtf8("RightSide_plainTextEdit"));
        RightSide_plainTextEdit->setGeometry(QRect(870, 100, 181, 541));
        RightSide_plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    \n"
"    background-color: #d0e9ff;   /* Light blue */\n"
"    color: #0d47a1;              /* Dark blue text */\n"
"    font-weight: bold;\n"
"    font-size: 18px;\n"
"    padding: 10px;\n"
"    border-radius: 12px;\n"
"    border: none;\n"
"\n"
"}"));
        label_16 = new QLabel(AdminDashboard);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(900, 440, 151, 20));
        label_16->setFont(font3);
        label_15 = new QLabel(AdminDashboard);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(890, 400, 151, 20));
        label_15->setFont(font3);
        label_3 = new QLabel(AdminDashboard);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(550, 570, 21, 20));
        label_3->setFont(font2);
        label_7 = new QLabel(AdminDashboard);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(240, 510, 21, 20));
        label_7->setFont(font2);
        RA_label_9 = new QLabel(AdminDashboard);
        RA_label_9->setObjectName(QString::fromUtf8("RA_label_9"));
        RA_label_9->setGeometry(QRect(500, 590, 101, 41));
        RA_label_9->setFont(font4);
        maintenanceButton = new QPushButton(AdminDashboard);
        maintenanceButton->setObjectName(QString::fromUtf8("maintenanceButton"));
        maintenanceButton->setGeometry(QRect(30, 370, 131, 29));
        MaintenanceRequest_label_4 = new QLabel(AdminDashboard);
        MaintenanceRequest_label_4->setObjectName(QString::fromUtf8("MaintenanceRequest_label_4"));
        MaintenanceRequest_label_4->setGeometry(QRect(710, 100, 151, 121));
        MaintenanceRequest_label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ffe6cc;   /* Peach */\n"
"    color: #e65100;              /* Burnt orange text */\n"
"    font-weight: bold;\n"
"    font-size: 18px;\n"
"    padding: 10px;\n"
"    border-radius: 12px;\n"
"    border: none;\n"
"}\n"
""));
        textEdit = new QTextEdit(AdminDashboard);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(890, 250, 151, 221));
        RA_label_8 = new QLabel(AdminDashboard);
        RA_label_8->setObjectName(QString::fromUtf8("RA_label_8"));
        RA_label_8->setGeometry(QRect(470, 280, 181, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial"));
        font5.setPointSize(13);
        font5.setBold(false);
        RA_label_8->setFont(font5);
        label_12 = new QLabel(AdminDashboard);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(900, 270, 151, 20));
        label_12->setFont(font3);
        RA_label_11 = new QLabel(AdminDashboard);
        RA_label_11->setObjectName(QString::fromUtf8("RA_label_11"));
        RA_label_11->setGeometry(QRect(890, 160, 191, 51));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Arial"));
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setItalic(true);
        RA_label_11->setFont(font6);
        line_16 = new QFrame(AdminDashboard);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(890, 420, 151, 16));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(AdminDashboard);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(680, 570, 21, 20));
        label_4->setFont(font2);
        label_9 = new QLabel(AdminDashboard);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(240, 410, 21, 20));
        label_9->setFont(font2);
        label_5 = new QLabel(AdminDashboard);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(780, 570, 21, 20));
        label_5->setFont(font2);
        line_15 = new QFrame(AdminDashboard);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(890, 380, 151, 16));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        label = new QLabel(AdminDashboard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 570, 21, 20));
        label->setFont(font2);
        OverviewButton = new QToolButton(AdminDashboard);
        OverviewButton->setObjectName(QString::fromUtf8("OverviewButton"));
        OverviewButton->setGeometry(QRect(30, 140, 131, 31));
        label_11 = new QLabel(AdminDashboard);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(240, 310, 21, 20));
        label_11->setFont(font2);
        Chart_frame = new QFrame(AdminDashboard);
        Chart_frame->setObjectName(QString::fromUtf8("Chart_frame"));
        Chart_frame->setGeometry(QRect(270, 320, 571, 241));
        Chart_frame->setStyleSheet(QString::fromUtf8("#Chart_frame {\n"
"    background-color: #ffffff;              /* White background */\n"
"    border: 2px solid #d3d3d3;              /* Light gray border */\n"
"                      /* Rounded corners */\n"
"    box-shadow: 0px 0px 10px rgba(0,0,0,0.2); /* Subtle shadow (if supported) */\n"
"}\n"
""));
        Chart_frame->setFrameShape(QFrame::StyledPanel);
        Chart_frame->setFrameShadow(QFrame::Raised);
        line_5 = new QFrame(Chart_frame);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 40, 571, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(Chart_frame);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(0, 90, 571, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(Chart_frame);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(0, 140, 571, 16));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(Chart_frame);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(0, 190, 571, 16));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        Chart_plainTextEdit_6 = new QPlainTextEdit(Chart_frame);
        Chart_plainTextEdit_6->setObjectName(QString::fromUtf8("Chart_plainTextEdit_6"));
        Chart_plainTextEdit_6->setGeometry(QRect(30, 20, 61, 221));
        Chart_plainTextEdit_6->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #3498db;   /* Soft dashboard blue */\n"
"    border: none;\n"
"    border-radius: 4px;\n"
"    color: transparent;          /* Hide text */\n"
"}\n"
""));
        Chart_plainTextEdit_7 = new QPlainTextEdit(Chart_frame);
        Chart_plainTextEdit_7->setObjectName(QString::fromUtf8("Chart_plainTextEdit_7"));
        Chart_plainTextEdit_7->setGeometry(QRect(140, 100, 61, 141));
        Chart_plainTextEdit_7->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #3498db;   /* Soft dashboard blue */\n"
"    border: none;\n"
"    border-radius: 4px;\n"
"    color: transparent;          /* Hide text */\n"
"}\n"
""));
        Chart_plainTextEdit_8 = new QPlainTextEdit(Chart_frame);
        Chart_plainTextEdit_8->setObjectName(QString::fromUtf8("Chart_plainTextEdit_8"));
        Chart_plainTextEdit_8->setGeometry(QRect(260, 50, 61, 191));
        Chart_plainTextEdit_8->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #3498db;   /* Soft dashboard blue */\n"
"    border: none;\n"
"    border-radius: 4px;\n"
"    color: transparent;          /* Hide text */\n"
"}\n"
""));
        Chart_plainTextEdit_9 = new QPlainTextEdit(Chart_frame);
        Chart_plainTextEdit_9->setObjectName(QString::fromUtf8("Chart_plainTextEdit_9"));
        Chart_plainTextEdit_9->setGeometry(QRect(390, 100, 61, 141));
        Chart_plainTextEdit_9->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #3498db;   /* Soft dashboard blue */\n"
"    border: none;\n"
"    border-radius: 4px;\n"
"    color: transparent;          /* Hide text */\n"
"}\n"
""));
        Chart_plainTextEdit_10 = new QPlainTextEdit(Chart_frame);
        Chart_plainTextEdit_10->setObjectName(QString::fromUtf8("Chart_plainTextEdit_10"));
        Chart_plainTextEdit_10->setGeometry(QRect(490, 150, 61, 91));
        Chart_plainTextEdit_10->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #3498db;   /* Soft dashboard blue */\n"
"    border: none;\n"
"    border-radius: 4px;\n"
"    color: transparent;          /* Hide text */\n"
"}\n"
""));
        RA_label_10 = new QLabel(AdminDashboard);
        RA_label_10->setObjectName(QString::fromUtf8("RA_label_10"));
        RA_label_10->setGeometry(QRect(890, 140, 191, 51));
        RA_label_10->setFont(font6);
        OccupiedRoom_label_3 = new QLabel(AdminDashboard);
        OccupiedRoom_label_3->setObjectName(QString::fromUtf8("OccupiedRoom_label_3"));
        OccupiedRoom_label_3->setGeometry(QRect(540, 100, 151, 121));
        OccupiedRoom_label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #d6f5e3;   /* Aqua green */\n"
"    color: #2e7d32;              /* Forest green text */\n"
"    font-weight: bold;\n"
"    font-size: 16px;\n"
"    padding: 10px;\n"
"    border-radius: 12px;\n"
"    border: none;\n"
"}\n"
""));
        RA_label_7 = new QLabel(AdminDashboard);
        RA_label_7->setObjectName(QString::fromUtf8("RA_label_7"));
        RA_label_7->setGeometry(QRect(200, 250, 181, 41));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Arial"));
        font7.setPointSize(13);
        font7.setBold(true);
        RA_label_7->setFont(font7);
        line_14 = new QFrame(AdminDashboard);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(890, 330, 151, 16));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        TotalRoom_label_2 = new QLabel(AdminDashboard);
        TotalRoom_label_2->setObjectName(QString::fromUtf8("TotalRoom_label_2"));
        TotalRoom_label_2->setGeometry(QRect(370, 100, 151, 121));
        TotalRoom_label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #c2f0e0;   /* Soft mint green */\n"
"    color: #00695c;              /* Deep green text */\n"
"    font-weight: bold;\n"
"    font-size: 18px;\n"
"    padding: 10px;\n"
"    border-radius: 12px;\n"
"    border: none;\n"
"}\n"
""));
        label_6 = new QLabel(AdminDashboard);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 550, 21, 20));
        label_6->setFont(font2);
        label_10 = new QLabel(AdminDashboard);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(240, 360, 21, 20));
        label_10->setFont(font2);
        TotalStudent_label = new QLabel(AdminDashboard);
        TotalStudent_label->setObjectName(QString::fromUtf8("TotalStudent_label"));
        TotalStudent_label->setGeometry(QRect(200, 100, 151, 121));
        TotalStudent_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #d0e9ff;   /* Light blue */\n"
"    color: #0d47a1;              /* Dark blue text */\n"
"    font-weight: bold;\n"
"    font-size: 18px;\n"
"    padding: 10px;\n"
"    border-radius: 12px;\n"
"    border: none;\n"
"}\n"
""));
        DashName_label_7 = new QLabel(AdminDashboard);
        DashName_label_7->setObjectName(QString::fromUtf8("DashName_label_7"));
        DashName_label_7->setGeometry(QRect(30, 50, 111, 41));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Bookman Old Style"));
        font8.setPointSize(18);
        font8.setBold(true);
        DashName_label_7->setFont(font8);
        line_13 = new QFrame(AdminDashboard);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(890, 290, 151, 16));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        label_14 = new QLabel(AdminDashboard);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(890, 350, 151, 20));
        label_14->setFont(font3);
        plainTextEdit = new QPlainTextEdit(AdminDashboard);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 0, 1051, 641));
        label_17 = new QLabel(AdminDashboard);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(240, 160, 61, 51));
        label_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    \n"
"    color: #0d47a1;              /* Dark blue text */\n"
"    font-weight: bold;\n"
"    font-size: 20px;\n"
"    padding: 10px;\n"
"    border-radius: 12px;\n"
"    border: none;\n"
"}\n"
""));
        label_18 = new QLabel(AdminDashboard);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(410, 160, 61, 51));
        label_18->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   \n"
"    color: #00695c;              /* Deep green text */\n"
"    font-weight: bold;\n"
"    font-size: 20px;\n"
"    padding: 10px;\n"
"    border-radius: 12px;\n"
"    border: none;\n"
"}\n"
""));
        label_19 = new QLabel(AdminDashboard);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(590, 160, 61, 51));
        label_19->setStyleSheet(QString::fromUtf8("QLabel {\n"
"   \n"
"    color: #00695c;              /* Deep green text */\n"
"    font-weight: bold;\n"
"    font-size: 20px;\n"
"    padding: 10px;\n"
"    border-radius: 12px;\n"
"    border: none;\n"
"}\n"
""));
        label_20 = new QLabel(AdminDashboard);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(760, 160, 61, 51));
        label_20->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    \n"
"    color: #e65100;              /* Burnt orange text */\n"
"    font-weight: bold;\n"
"    font-size: 20px;\n"
"    padding: 10px;\n"
"    border-radius: 12px;\n"
"    border: none;\n"
"}\n"
""));
        plainTextEdit->raise();
        RightSide_plainTextEdit->raise();
        textEdit->raise();
        LeftSide_plainTextEdit->raise();
        DashName_label_8->raise();
        DashName_label_5->raise();
        label_2->raise();
        reserveButton->raise();
        Settings_Button->raise();
        label_13->raise();
        DashName_label_6->raise();
        label_8->raise();
        roomButton->raise();
        label_16->raise();
        label_15->raise();
        label_3->raise();
        label_7->raise();
        RA_label_9->raise();
        maintenanceButton->raise();
        MaintenanceRequest_label_4->raise();
        RA_label_8->raise();
        label_12->raise();
        RA_label_11->raise();
        line_16->raise();
        label_4->raise();
        label_9->raise();
        label_5->raise();
        line_15->raise();
        label->raise();
        OverviewButton->raise();
        label_11->raise();
        Chart_frame->raise();
        RA_label_10->raise();
        OccupiedRoom_label_3->raise();
        RA_label_7->raise();
        line_14->raise();
        TotalRoom_label_2->raise();
        label_6->raise();
        label_10->raise();
        TotalStudent_label->raise();
        DashName_label_7->raise();
        line_13->raise();
        label_14->raise();
        label_17->raise();
        label_18->raise();
        label_19->raise();
        label_20->raise();

        retranslateUi(AdminDashboard);

        QMetaObject::connectSlotsByName(AdminDashboard);
    } // setupUi

    void retranslateUi(QDialog *AdminDashboard)
    {
        AdminDashboard->setWindowTitle(QCoreApplication::translate("AdminDashboard", "Dialog", nullptr));
        DashName_label_8->setText(QCoreApplication::translate("AdminDashboard", "DASHBOARD", nullptr));
        DashName_label_5->setText(QCoreApplication::translate("AdminDashboard", "Dashboard", nullptr));
        label_2->setText(QCoreApplication::translate("AdminDashboard", "B", nullptr));
        reserveButton->setText(QCoreApplication::translate("AdminDashboard", "Reserve Room", nullptr));
        Settings_Button->setText(QCoreApplication::translate("AdminDashboard", "Setting", nullptr));
        label_13->setText(QCoreApplication::translate("AdminDashboard", "Light Fixture broken", nullptr));
        DashName_label_6->setText(QCoreApplication::translate("AdminDashboard", "Overview", nullptr));
        label_8->setText(QCoreApplication::translate("AdminDashboard", "15", nullptr));
        roomButton->setText(QCoreApplication::translate("AdminDashboard", "Rooms", nullptr));
        label_16->setText(QCoreApplication::translate("AdminDashboard", "AC not working 406", nullptr));
        label_15->setText(QCoreApplication::translate("AdminDashboard", "Door Lock malfunction", nullptr));
        label_3->setText(QCoreApplication::translate("AdminDashboard", "C", nullptr));
        label_7->setText(QCoreApplication::translate("AdminDashboard", "10", nullptr));
        RA_label_9->setText(QCoreApplication::translate("AdminDashboard", "Buildings", nullptr));
        maintenanceButton->setText(QCoreApplication::translate("AdminDashboard", "Maintenance", nullptr));
        MaintenanceRequest_label_4->setText(QCoreApplication::translate("AdminDashboard", "Maintenance", nullptr));
        RA_label_8->setText(QCoreApplication::translate("AdminDashboard", "Room Allocation", nullptr));
        label_12->setText(QCoreApplication::translate("AdminDashboard", "Sink leak in room 101", nullptr));
        RA_label_11->setText(QCoreApplication::translate("AdminDashboard", "Requests", nullptr));
        label_4->setText(QCoreApplication::translate("AdminDashboard", "D", nullptr));
        label_9->setText(QCoreApplication::translate("AdminDashboard", "20", nullptr));
        label_5->setText(QCoreApplication::translate("AdminDashboard", "E", nullptr));
        label->setText(QCoreApplication::translate("AdminDashboard", "A", nullptr));
        OverviewButton->setText(QCoreApplication::translate("AdminDashboard", "Overview", nullptr));
        label_11->setText(QCoreApplication::translate("AdminDashboard", "30", nullptr));
        RA_label_10->setText(QCoreApplication::translate("AdminDashboard", "Maintenance", nullptr));
        OccupiedRoom_label_3->setText(QCoreApplication::translate("AdminDashboard", "Occupied Room", nullptr));
        RA_label_7->setText(QCoreApplication::translate("AdminDashboard", "Room Allocation", nullptr));
        TotalRoom_label_2->setText(QCoreApplication::translate("AdminDashboard", "Total Rooms", nullptr));
        label_6->setText(QCoreApplication::translate("AdminDashboard", "0", nullptr));
        label_10->setText(QCoreApplication::translate("AdminDashboard", "25", nullptr));
        TotalStudent_label->setText(QCoreApplication::translate("AdminDashboard", "Total Students", nullptr));
        DashName_label_7->setText(QCoreApplication::translate("AdminDashboard", "ADMIN", nullptr));
        label_14->setText(QCoreApplication::translate("AdminDashboard", "No hot water room 209", nullptr));
        label_17->setText(QCoreApplication::translate("AdminDashboard", "120", nullptr));
        label_18->setText(QCoreApplication::translate("AdminDashboard", "67", nullptr));
        label_19->setText(QCoreApplication::translate("AdminDashboard", "24", nullptr));
        label_20->setText(QCoreApplication::translate("AdminDashboard", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDashboard: public Ui_AdminDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDASHBOARD_H
