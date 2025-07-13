/********************************************************************************
** Form generated from reading UI file 'AdminDashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDASHBOARD_H
#define UI_ADMINDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QListView *listView;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTreeWidget *treeWidget;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QPlainTextEdit *plainTextEdit_2;
    QTreeWidget *treeWidget_2;
    QTreeWidget *treeWidget_3;
    QTreeWidget *treeWidget_4;
    QTreeWidget *treeWidget_5;

    void setupUi(QDialog *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(964, 549);
        listView = new QListView(Dashboard);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(0, 0, 191, 551));
        listView->setStyleSheet(QString::fromUtf8("QListView {\n"
"    background-color: #f0f4ff;  /* soft blue-gray */\n"
"    border: 1px solid #8888aa;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    font-size: 14px;\n"
"    color: #1a1a2e;\n"
"}\n"
"\n"
"QListView::item {\n"
"    padding: 8px 12px;\n"
"    margin: 2px 0;\n"
"    background-color: #d6e4f0;  /* soft pastel blue */\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QListView::item:selected {\n"
"    background-color: #7aa5d2;  /* medium blue */\n"
"    color: #ffffff;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"    background-color: #a9c1dd;  /* hover effect */\n"
"    color: #1a1a2e;\n"
"}\n"
""));
        plainTextEdit = new QPlainTextEdit(Dashboard);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(190, 0, 781, 71));
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #e6f2ff;\n"
"    color: #003366;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    font-size: 14px;\n"
"    border: 1px solid #99c2ff;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"}\n"
""));
        label = new QLabel(Dashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(370, 10, 371, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("STXingkai")});
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(Dashboard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 10, 141, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label_2->setFont(font1);
        label_3 = new QLabel(Dashboard);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 40, 201, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("PMingLiU-ExtB")});
        font2.setBold(false);
        label_3->setFont(font2);
        treeWidget = new QTreeWidget(Dashboard);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        QFont font3;
        font3.setBold(true);
        treeWidget->headerItem()->setText(0, QString());
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(0, font3);
        __qtreewidgetitem->setIcon(0, icon);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::UserAvailable));
        QBrush brush(QColor(85, 170, 127, 255));
        brush.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush1(QColor(85, 170, 127, 255));
        brush1.setStyle(Qt::BrushStyle::NoBrush);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(12);
        font4.setBold(true);
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::ContactNew));
        QBrush brush2(QColor(0, 85, 127, 255));
        brush2.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush3(QColor(0, 85, 127, 255));
        brush3.setStyle(Qt::BrushStyle::NoBrush);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Times New Roman")});
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setItalic(true);
        font5.setUnderline(false);
        font5.setStrikeOut(false);
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        QBrush brush4(QColor(170, 0, 0, 255));
        brush4.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush5(QColor(170, 0, 0, 255));
        brush5.setStyle(Qt::BrushStyle::NoBrush);
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Times New Roman")});
        font6.setItalic(true);
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::EditFind));
        QBrush brush6(QColor(170, 170, 0, 255));
        brush6.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush7(QColor(170, 170, 0, 255));
        brush7.setStyle(Qt::BrushStyle::NoBrush);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem1->setFont(0, font4);
        __qtreewidgetitem1->setBackground(0, brush1);
        __qtreewidgetitem1->setForeground(0, brush);
        __qtreewidgetitem1->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem2->setFont(0, font5);
        __qtreewidgetitem2->setBackground(0, brush3);
        __qtreewidgetitem2->setForeground(0, brush2);
        __qtreewidgetitem2->setIcon(0, icon2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem2);
        __qtreewidgetitem3->setFont(0, font6);
        __qtreewidgetitem3->setBackground(0, brush5);
        __qtreewidgetitem3->setForeground(0, brush4);
        __qtreewidgetitem3->setIcon(0, icon3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem3);
        __qtreewidgetitem4->setFont(0, font6);
        __qtreewidgetitem4->setBackground(0, brush7);
        __qtreewidgetitem4->setForeground(0, brush6);
        __qtreewidgetitem4->setIcon(0, icon4);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setGeometry(QRect(10, 100, 151, 61));
        listWidget = new QListWidget(Dashboard);
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::CameraWeb));
        QBrush brush8(QColor(85, 170, 127, 255));
        brush8.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush9(QColor(85, 170, 127, 255));
        brush9.setStyle(Qt::BrushStyle::NoBrush);
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Times New Roman")});
        font7.setPointSize(16);
        font7.setBold(true);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font7);
        __qlistwidgetitem->setBackground(brush9);
        __qlistwidgetitem->setForeground(brush8);
        __qlistwidgetitem->setIcon(icon5);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(210, 90, 201, 71));
        listWidget_2 = new QListWidget(Dashboard);
        QBrush brush10(QColor(255, 170, 127, 255));
        brush10.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush11(QColor(255, 170, 127, 255));
        brush11.setStyle(Qt::BrushStyle::NoBrush);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_2);
        __qlistwidgetitem1->setFont(font7);
        __qlistwidgetitem1->setBackground(brush11);
        __qlistwidgetitem1->setForeground(brush10);
        __qlistwidgetitem1->setIcon(icon1);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(460, 90, 201, 71));
        listWidget_3 = new QListWidget(Dashboard);
        QBrush brush12(QColor(170, 85, 255, 255));
        brush12.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush13(QColor(170, 85, 255, 255));
        brush13.setStyle(Qt::BrushStyle::NoBrush);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget_3);
        __qlistwidgetitem2->setFont(font7);
        __qlistwidgetitem2->setBackground(brush13);
        __qlistwidgetitem2->setForeground(brush12);
        __qlistwidgetitem2->setIcon(icon);
        listWidget_3->setObjectName("listWidget_3");
        listWidget_3->setGeometry(QRect(720, 90, 201, 71));
        plainTextEdit_2 = new QPlainTextEdit(Dashboard);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        plainTextEdit_2->setGeometry(QRect(190, 70, 781, 481));
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("QPlainTextEdit {\n"
"    background-color: #f0f4f8;     /* Light soft blue-gray background */\n"
"    color: #2c3e50;                /* Dark text color for contrast */\n"
"    font-family: Consolas, monospace;\n"
"    font-size: 14px;\n"
"    padding: 12px;\n"
"    border: 2px solid #dfe6e9;\n"
"    border-radius: 10px;\n"
"}"));
        treeWidget_2 = new QTreeWidget(Dashboard);
        treeWidget_2->headerItem()->setText(0, QString());
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem();
        __qtreewidgetitem5->setFont(0, font3);
        __qtreewidgetitem5->setIcon(0, icon5);
        treeWidget_2->setHeaderItem(__qtreewidgetitem5);
        QBrush brush14(QColor(255, 170, 127, 255));
        brush14.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush15(QColor(85, 170, 127, 255));
        brush15.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush16(QColor(85, 170, 127, 255));
        brush16.setStyle(Qt::BrushStyle::NoBrush);
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::Computer));
        QBrush brush17(QColor(0, 0, 255, 255));
        brush17.setStyle(Qt::BrushStyle::NoBrush);
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        QBrush brush18(QColor(170, 0, 127, 255));
        brush18.setStyle(Qt::BrushStyle::NoBrush);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(treeWidget_2);
        __qtreewidgetitem6->setFont(0, font4);
        __qtreewidgetitem6->setBackground(0, brush15);
        __qtreewidgetitem6->setForeground(0, brush14);
        __qtreewidgetitem6->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(__qtreewidgetitem6);
        __qtreewidgetitem7->setFont(0, font6);
        __qtreewidgetitem7->setForeground(0, brush16);
        __qtreewidgetitem7->setIcon(0, icon4);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(__qtreewidgetitem7);
        __qtreewidgetitem8->setFont(0, font6);
        __qtreewidgetitem8->setForeground(0, brush17);
        __qtreewidgetitem8->setIcon(0, icon6);
        QTreeWidgetItem *__qtreewidgetitem9 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem9->setFont(0, font6);
        __qtreewidgetitem9->setForeground(0, brush18);
        __qtreewidgetitem9->setIcon(0, icon7);
        treeWidget_2->setObjectName("treeWidget_2");
        treeWidget_2->setGeometry(QRect(10, 190, 151, 61));
        treeWidget_3 = new QTreeWidget(Dashboard);
        QBrush brush19(QColor(170, 85, 255, 255));
        brush19.setStyle(Qt::BrushStyle::NoBrush);
        QTreeWidgetItem *__qtreewidgetitem10 = new QTreeWidgetItem();
        __qtreewidgetitem10->setFont(0, font3);
        __qtreewidgetitem10->setBackground(0, QColor(255, 255, 255));
        __qtreewidgetitem10->setForeground(0, brush19);
        __qtreewidgetitem10->setIcon(0, icon);
        treeWidget_3->setHeaderItem(__qtreewidgetitem10);
        QBrush brush20(QColor(85, 170, 127, 255));
        brush20.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush21(QColor(85, 170, 127, 255));
        brush21.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush22(QColor(0, 85, 127, 255));
        brush22.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush23(QColor(0, 85, 127, 255));
        brush23.setStyle(Qt::BrushStyle::NoBrush);
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        QBrush brush24(QColor(170, 0, 255, 255));
        brush24.setStyle(Qt::BrushStyle::NoBrush);
        QTreeWidgetItem *__qtreewidgetitem11 = new QTreeWidgetItem(treeWidget_3);
        __qtreewidgetitem11->setFont(0, font4);
        __qtreewidgetitem11->setBackground(0, brush21);
        __qtreewidgetitem11->setForeground(0, brush20);
        __qtreewidgetitem11->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem12 = new QTreeWidgetItem(__qtreewidgetitem11);
        __qtreewidgetitem12->setFont(0, font5);
        __qtreewidgetitem12->setBackground(0, brush23);
        __qtreewidgetitem12->setForeground(0, brush22);
        __qtreewidgetitem12->setIcon(0, icon4);
        QTreeWidgetItem *__qtreewidgetitem13 = new QTreeWidgetItem(__qtreewidgetitem11);
        __qtreewidgetitem13->setFont(0, font6);
        __qtreewidgetitem13->setForeground(0, brush24);
        __qtreewidgetitem13->setIcon(0, icon8);
        treeWidget_3->setObjectName("treeWidget_3");
        treeWidget_3->setGeometry(QRect(10, 290, 151, 61));
        treeWidget_4 = new QTreeWidget(Dashboard);
        treeWidget_4->headerItem()->setText(0, QString());
        QTreeWidgetItem *__qtreewidgetitem14 = new QTreeWidgetItem();
        __qtreewidgetitem14->setFont(0, font3);
        __qtreewidgetitem14->setIcon(0, icon);
        treeWidget_4->setHeaderItem(__qtreewidgetitem14);
        QIcon icon9(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPageSetup));
        QBrush brush25(QColor(85, 170, 127, 255));
        brush25.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush26(QColor(85, 170, 127, 255));
        brush26.setStyle(Qt::BrushStyle::NoBrush);
        QIcon icon10(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSaveAs));
        QBrush brush27(QColor(0, 85, 127, 255));
        brush27.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush28(QColor(0, 85, 127, 255));
        brush28.setStyle(Qt::BrushStyle::NoBrush);
        QIcon icon11(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpen));
        QBrush brush29(QColor(170, 85, 127, 255));
        brush29.setStyle(Qt::BrushStyle::NoBrush);
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Times New Roman")});
        font8.setPointSize(12);
        font8.setBold(true);
        font8.setItalic(false);
        QIcon icon12(QIcon::fromTheme(QIcon::ThemeIcon::MailMessageNew));
        QBrush brush30(QColor(0, 85, 127, 255));
        brush30.setStyle(Qt::BrushStyle::NoBrush);
        QTreeWidgetItem *__qtreewidgetitem15 = new QTreeWidgetItem(treeWidget_4);
        __qtreewidgetitem15->setFont(0, font4);
        __qtreewidgetitem15->setBackground(0, brush26);
        __qtreewidgetitem15->setForeground(0, brush25);
        __qtreewidgetitem15->setIcon(0, icon9);
        QTreeWidgetItem *__qtreewidgetitem16 = new QTreeWidgetItem(__qtreewidgetitem15);
        __qtreewidgetitem16->setFont(0, font5);
        __qtreewidgetitem16->setBackground(0, brush28);
        __qtreewidgetitem16->setForeground(0, brush27);
        __qtreewidgetitem16->setIcon(0, icon10);
        QTreeWidgetItem *__qtreewidgetitem17 = new QTreeWidgetItem(treeWidget_4);
        __qtreewidgetitem17->setFont(0, font8);
        __qtreewidgetitem17->setForeground(0, brush29);
        __qtreewidgetitem17->setIcon(0, icon11);
        QTreeWidgetItem *__qtreewidgetitem18 = new QTreeWidgetItem(treeWidget_4);
        __qtreewidgetitem18->setFont(0, font6);
        __qtreewidgetitem18->setForeground(0, brush30);
        __qtreewidgetitem18->setIcon(0, icon12);
        treeWidget_4->setObjectName("treeWidget_4");
        treeWidget_4->setGeometry(QRect(10, 370, 151, 61));
        treeWidget_5 = new QTreeWidget(Dashboard);
        treeWidget_5->headerItem()->setText(0, QString());
        QTreeWidgetItem *__qtreewidgetitem19 = new QTreeWidgetItem();
        __qtreewidgetitem19->setFont(0, font3);
        __qtreewidgetitem19->setIcon(0, icon);
        treeWidget_5->setHeaderItem(__qtreewidgetitem19);
        QIcon icon13(QIcon::fromTheme(QIcon::ThemeIcon::SystemShutdown));
        QBrush brush31(QColor(85, 170, 127, 255));
        brush31.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush32(QColor(85, 170, 127, 255));
        brush32.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush33(QColor(0, 85, 127, 255));
        brush33.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush34(QColor(0, 85, 127, 255));
        brush34.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush35(QColor(170, 0, 0, 255));
        brush35.setStyle(Qt::BrushStyle::NoBrush);
        QBrush brush36(QColor(170, 0, 0, 255));
        brush36.setStyle(Qt::BrushStyle::NoBrush);
        QTreeWidgetItem *__qtreewidgetitem20 = new QTreeWidgetItem(treeWidget_5);
        __qtreewidgetitem20->setFont(0, font4);
        __qtreewidgetitem20->setBackground(0, brush32);
        __qtreewidgetitem20->setForeground(0, brush31);
        __qtreewidgetitem20->setIcon(0, icon13);
        QTreeWidgetItem *__qtreewidgetitem21 = new QTreeWidgetItem(__qtreewidgetitem20);
        __qtreewidgetitem21->setFont(0, font5);
        __qtreewidgetitem21->setBackground(0, brush34);
        __qtreewidgetitem21->setForeground(0, brush33);
        __qtreewidgetitem21->setIcon(0, icon8);
        QTreeWidgetItem *__qtreewidgetitem22 = new QTreeWidgetItem(__qtreewidgetitem21);
        __qtreewidgetitem22->setFont(0, font6);
        __qtreewidgetitem22->setBackground(0, brush36);
        __qtreewidgetitem22->setForeground(0, brush35);
        __qtreewidgetitem22->setIcon(0, icon12);
        treeWidget_5->setObjectName("treeWidget_5");
        treeWidget_5->setGeometry(QRect(10, 460, 151, 61));
        plainTextEdit_2->raise();
        listView->raise();
        plainTextEdit->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        treeWidget->raise();
        listWidget->raise();
        listWidget_2->raise();
        listWidget_3->raise();
        treeWidget_2->raise();
        treeWidget_3->raise();
        treeWidget_4->raise();
        treeWidget_5->raise();

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDialog *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dashboard", " Welcome Admin", nullptr));
        label_2->setText(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        label_3->setText(QCoreApplication::translate("Dashboard", "Housing Management System", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Dashboard", "Student", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("Dashboard", "Add Student", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("Dashboard", "Delete Student", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("Dashboard", "Search Student", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Dashboard", "On Campus Student", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled1);


        const bool __sortingEnabled2 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem1 = listWidget_2->item(0);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Dashboard", "Off Campus Student", nullptr));
        listWidget_2->setSortingEnabled(__sortingEnabled2);


        const bool __sortingEnabled3 = listWidget_3->isSortingEnabled();
        listWidget_3->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem2 = listWidget_3->item(0);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("Dashboard", "Rooms", nullptr));
        listWidget_3->setSortingEnabled(__sortingEnabled3);


        const bool __sortingEnabled4 = treeWidget_2->isSortingEnabled();
        treeWidget_2->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget_2->topLevelItem(0);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("Dashboard", "Teacher", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("Dashboard", "View Teachers", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("Dashboard", "Work Dept", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem6->child(0);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("Dashboard", "Course Handling", nullptr));
        treeWidget_2->setSortingEnabled(__sortingEnabled4);

        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget_3->headerItem();
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("Dashboard", "Department", nullptr));

        const bool __sortingEnabled5 = treeWidget_3->isSortingEnabled();
        treeWidget_3->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidget_3->topLevelItem(0);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("Dashboard", "Rooms", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem9->child(0);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("Dashboard", "Available Room", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem9->child(1);
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("Dashboard", "Occupied Rooms", nullptr));
        treeWidget_3->setSortingEnabled(__sortingEnabled5);


        const bool __sortingEnabled6 = treeWidget_4->isSortingEnabled();
        treeWidget_4->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem12 = treeWidget_4->topLevelItem(0);
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("Dashboard", "On Campus Student", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem12->child(0);
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("Dashboard", "OnCamStudent", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = treeWidget_4->topLevelItem(1);
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("Dashboard", "Off Campus", nullptr));
        QTreeWidgetItem *___qtreewidgetitem15 = treeWidget_4->topLevelItem(2);
        ___qtreewidgetitem15->setText(0, QCoreApplication::translate("Dashboard", "OffCamStudent", nullptr));
        treeWidget_4->setSortingEnabled(__sortingEnabled6);


        const bool __sortingEnabled7 = treeWidget_5->isSortingEnabled();
        treeWidget_5->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem16 = treeWidget_5->topLevelItem(0);
        ___qtreewidgetitem16->setText(0, QCoreApplication::translate("Dashboard", "Settings", nullptr));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem16->child(0);
        ___qtreewidgetitem17->setText(0, QCoreApplication::translate("Dashboard", "Admin Profile", nullptr));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem17->child(0);
        ___qtreewidgetitem18->setText(0, QCoreApplication::translate("Dashboard", "Change Password", nullptr));
        treeWidget_5->setSortingEnabled(__sortingEnabled7);

    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDASHBOARD_H
