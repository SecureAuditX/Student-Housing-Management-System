#include "admindashboard.h"
#include "ui_admindashboard.h"
#include "room.h" // include Room window
#include "reserveroom.h"  // include ReserveRoom window
#include "rmaintenance.h"  // inlcude maintenance window

AdminDashboard::AdminDashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminDashboard)
{
    ui->setupUi(this);
    // Connect buttons to their slots
    connect(ui->roomButton, &QPushButton::clicked, this, &AdminDashboard::Rooms_Button);
    connect(ui->reserveButton, &QPushButton::clicked, this, &AdminDashboard::Reserve_Button);
    connect(ui->maintenanceButton, &QPushButton::clicked, this, &AdminDashboard::Maintenance_Button);
}

AdminDashboard::~AdminDashboard()
{
    delete ui;
}
// Room Button
void AdminDashboard::Rooms_Button()
{
    Room *roomWindow = new Room(this);
    roomWindow->setModal(true);
    roomWindow->exec();
}


// Reserve Room Button
void AdminDashboard::Reserve_Button()
{
    ReserveRoom *reserveWindow = new ReserveRoom(this);
    reserveWindow->setModal(true);
    reserveWindow->exec();
}

// Maintenance Button
void AdminDashboard::Maintenance_Button()
{
    RMaintenance *maintenanceWindow = new RMaintenance(this);
    maintenanceWindow->setModal(true);
    maintenanceWindow->exec();
}

