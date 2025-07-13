#include "room.h"
#include "reserveroom.h"
#include "rmaintenance.h"
#include "admindashboard.h"
#include "ui_room.h"
#include <QStandardItem>
#include <QMessageBox>
#include <QInputDialog>

Room::Room(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Room)
{
    ui->setupUi(this);
    setupDamagedRooms();         // For damaged rooms
    setupOccupiedRooms();        // For studentData
    setupAvailableRooms();       // Add this line to fix available rooms



  // Connect Buttons to slots
    connect(ui->reserveButton, &QPushButton::clicked, this, &Room::Reserve_Button);
    connect(ui->maintenanceButton, &QPushButton::clicked, this, &Room::Maintenance_Button);
    connect(ui->overviewButton, &QPushButton::clicked, this, &Room::Overview_Button);

   // connect Button to slots
    connect(ui->editButton, &QPushButton::clicked, this, &Room::editButton);
    connect(ui->saveButton, &QPushButton::clicked, this, &Room::saveButton);
    connect(ui->deleteButton, &QPushButton::clicked, this, &Room::deleteButton);
    connect(ui->searchButton, &QPushButton::clicked, this, &Room::searchButton);


    // Setup table content
    setupOccupiedRooms();

}

Room::~Room() {
    delete ui;
}


// Overview Button for dashboard
// Redirect back to AdminDashboard
void Room::Overview_Button()
{
    this->close(); // Close Room window
    AdminDashboard *admin = new AdminDashboard();
    admin->setModal(true);
    admin->exec();

}

// Room Button
void Room::Room_Button()
{

}

// Room Reserve Button
// Redirect to Reserve Room
void Room::Reserve_Button()
{
    ReserveRoom *reserveWindow = new ReserveRoom(this);
    reserveWindow->setModal(true);
    reserveWindow->exec();
}

// Room Maintenance Button
// Redirect to Maintenance
void Room::Maintenance_Button()
{
    RMaintenance *maintenanceWindow = new RMaintenance(this);
    maintenanceWindow->setModal(true);
    maintenanceWindow->exec();
}
void Room::setupOccupiedRooms()
{
    // Setup headers for QTableWidget
    ui->occupiedRoomsTable->setColumnCount(5);
    ui->occupiedRoomsTable->setHorizontalHeaderLabels(
        {"Room No", "Student ID", "Capacity", "Payment ID", "Duration of Stay"});

    // Student data
    QList<QStringList> studentData = {
        {"A101", "STU001", "Single", "PAY1001", "6 months"},
        {"A102", "STU002", "Double", "PAY1002", "1 year"},
        {"A103", "STU003", "Single", "PAY1003", "3 months"},
        {"A104", "STU004", "Triple", "PAY1004", "1 semester"},
        {"A105", "STU005", "Double", "PAY1005", "2 months"},
        {"A106", "STU006", "Single", "PAY1006", "1 year"}
    };

    ui->occupiedRoomsTable->setRowCount(studentData.size());

    for (int row = 0; row < studentData.size(); ++row) {
        for (int col = 0; col < studentData[row].size(); ++col) {
            ui->occupiedRoomsTable->setItem(row, col, new QTableWidgetItem(studentData[row][col]));
        }
    }

    ui->occupiedRoomsTable->setEditTriggers(QAbstractItemView::NoEditTriggers); // read-only

}
// update Button for Table Widget
void Room::saveButton()
{
    ui->occupiedRoomsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QMessageBox::information(this, "Saved", "Edits have been saved and editing is disabled.");
}

// search Button for Table Widget
void Room::searchButton()
{
    QString searchID = ui->search_lineEdit->text().trimmed();
    if (searchID.isEmpty()) {
        QMessageBox::warning(this, "Empty Field", "Please enter a Student ID.");
        return;
    }

    bool found = false;

    for (int row = 0; row < ui->occupiedRoomsTable->rowCount(); ++row) {
        QString cell = ui->occupiedRoomsTable->item(row, 1)->text();  // Student ID
        if (cell == searchID) {
            ui->occupiedRoomsTable->selectRow(row);
            found = true;
            break;
        }
    }

    if (!found) {
        QMessageBox::information(this, "Not Found", "Student ID not found.");
    }
}

// edit Button for Table Widget
void Room::editButton()
{
    QModelIndex index = ui->occupiedRoomsTable->currentIndex();
    if (!index.isValid()) {
        QMessageBox::warning(this, "No selection", "Please select a row to edit.");
        return;
    }

    ui->occupiedRoomsTable->setEditTriggers(QAbstractItemView::AllEditTriggers);
    QMessageBox::information(this, "Edit Mode", "You can now edit the selected row. Click Save after.");
}

// edit Button for Table Widget
void Room::deleteButton()
{
    QModelIndex index = ui->occupiedRoomsTable->currentIndex();
    if (!index.isValid()) {
        QMessageBox::warning(this, "No selection", "Please select a row to delete.");
        return;
    }
    ui->occupiedRoomsTable->removeRow(index.row());
    QMessageBox::information(this, "Deleted", "Selected row has been deleted.");
}

void Room::setupAvailableRooms()
{
    // Set 3 columns: Room No, Capacity, Price
    ui->availableRoomsTable->setColumnCount(3);
    ui->availableRoomsTable->setHorizontalHeaderLabels({"Room No", "Capacity", "Price ($)"});

    // Prepare 20 room entries
    QStringList capacities = {"Single", "Double", "Triple"};

    ui->availableRoomsTable->setRowCount(20); // 20 rooms

    for (int row = 0; row < 20; ++row) {
        QString roomNo = QString("R%1").arg(200 + row);
        QString capacity = capacities[qrand() % capacities.size()];

        QString price;
        if (capacity == "Single") price = "$300";
        else if (capacity == "Double") price = "$500";
        else price = "$700";

        ui->availableRoomsTable->setItem(row, 0, new QTableWidgetItem(roomNo));
        ui->availableRoomsTable->setItem(row, 1, new QTableWidgetItem(capacity));
        ui->availableRoomsTable->setItem(row, 2, new QTableWidgetItem(price));
    }

    ui->availableRoomsTable->setEditTriggers(QAbstractItemView::NoEditTriggers); // read-only
}

void Room::setupDamagedRooms()
{
    ui->damagedRoomsTable->setColumnCount(4);
    ui->damagedRoomsTable->setHorizontalHeaderLabels({"Room No", "Capacity", "Repair Status", "Cost ($)"});

    QStringList roomNos = {"D301", "D302", "D303", "D304", "D305"};
    QStringList capacities = {"Single", "Double", "Triple", "Single", "Double"};
    QStringList statuses = {"Full Repair", "Work in Progress", "Pending", "Pending", "Pending"};
    QStringList costs = {"$100", "$250", "$180", "$120", "$210"};

    ui->damagedRoomsTable->setRowCount(5); // 5 damaged rooms

    for (int row = 0; row < 5; ++row) {
        ui->damagedRoomsTable->setItem(row, 0, new QTableWidgetItem(roomNos[row]));
        ui->damagedRoomsTable->setItem(row, 1, new QTableWidgetItem(capacities[row]));
        ui->damagedRoomsTable->setItem(row, 2, new QTableWidgetItem(statuses[row]));
        ui->damagedRoomsTable->setItem(row, 3, new QTableWidgetItem(costs[row]));
    }

    ui->damagedRoomsTable->setEditTriggers(QAbstractItemView::NoEditTriggers); // read-only
}

