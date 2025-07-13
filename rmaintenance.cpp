#include "rmaintenance.h"
#include "ui_rmaintenance.h"
#include "admindashboard.h"
#include "room.h"
#include "reserveroom.h"
#include <QMessageBox>


RMaintenance::RMaintenance(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RMaintenance)
{
    ui->setupUi(this);

    // Set headers
    ui->maintenance_table->setColumnCount(4);
    ui->maintenance_table->setHorizontalHeaderLabels(QStringList() << "Room No" << "Capacity" << "Cost" << "M_Status");

    // Add 5 sample rows
    QStringList roomData[5] = {
                               {"101", "Single", "200", "Pending"},
                               {"102", "Double", "300", "Repairing"},
                               {"103", "Single", "150", "Pending"},
                               {"104", "Triple", "400", "Full Repair"},
                               {"105", "Double", "250", "Repairing"},
                               };

    for (int i = 0; i < 5; ++i) {
        ui->maintenance_table->insertRow(i);
        for (int j = 0; j < 4; ++j) {
            QTableWidgetItem *item = new QTableWidgetItem(roomData[i][j]);
            item->setFlags(item->flags() & ~Qt::ItemIsEditable);  // Start as read-only
            ui->maintenance_table->setItem(i, j, item);
        }
    }

    // Connect buttons
    connect(ui->Edit_Button, &QPushButton::clicked, this, &RMaintenance::Edit_Button);
    connect(ui->Save_Button, &QPushButton::clicked, this, &RMaintenance::Save_Button);
    connect(ui->Delete_Button, &QPushButton::clicked, this, &RMaintenance::Delete_Button);

    connect(ui->Overview_Button, &QPushButton::clicked, this, &RMaintenance::Overview_Button);
    connect(ui->Room_Button, &QPushButton::clicked, this, &RMaintenance::Room_Button);
    connect(ui->Reserve_Button, &QPushButton::clicked, this, &RMaintenance::Reserve_Button);
    connect(ui->Maintenance_Button, &QPushButton::clicked, this, &RMaintenance::Maintenance_Button);

}


RMaintenance::~RMaintenance()
{
    delete ui;
}



void RMaintenance::Overview_Button()
{
    AdminDashboard *admin = new AdminDashboard(this);
    admin->setModal(true);
    admin->exec();
}


void RMaintenance::Room_Button()
{
    Room *room = new Room(this);
    room->setModal(true);
    room->exec();
}


void RMaintenance::Reserve_Button()
{
    ReserveRoom *reserve = new ReserveRoom(this);
    reserve->setModal(true);
    reserve->exec();
}


void RMaintenance::Maintenance_Button()
{

}


void RMaintenance::Edit_Button()
{
    int row = ui->maintenance_table->currentRow();
    if (row >= 0) {
        for (int col = 0; col < 4; ++col) {
            QTableWidgetItem *item = ui->maintenance_table->item(row, col);
            item->setFlags(item->flags() | Qt::ItemIsEditable);  // Make editable
        }
    } else {
        QMessageBox::warning(this, "No Selection", "Please select a row to edit.");
    }
}


void RMaintenance::Save_Button()
{
    int row = ui->maintenance_table->currentRow();
    if (row >= 0) {
        for (int col = 0; col < 4; ++col) {
            QTableWidgetItem *item = ui->maintenance_table->item(row, col);
            item->setFlags(item->flags() & ~Qt::ItemIsEditable);  // Lock after save
        }
        QMessageBox::information(this, "Saved", "Row updated successfully.");
    } else {
        QMessageBox::warning(this, "No Selection", "Please select a row to save.");
    }
}


void RMaintenance::Delete_Button()
{
    int row = ui->maintenance_table->currentRow();
    if (row >= 0) {
        ui->maintenance_table->removeRow(row);
    } else {
        QMessageBox::warning(this, "No Selection", "Please select a row to delete.");
    }
}

