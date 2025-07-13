#include "reserveroom.h"
#include "admindashboard.h"
#include "room.h"
#include "rmaintenance.h"
#include "ui_reserveroom.h"
#include <QMessageBox>


ReserveRoom::ReserveRoom(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ReserveRoom)
{
    ui->setupUi(this);
    ui->capacity_comboBox->addItems({"Single", "Double", "Triple"});

    connect(ui->overview_Button, &QPushButton::clicked, this, &ReserveRoom::overview_Button);
    connect(ui->room_Button, &QPushButton::clicked, this, &ReserveRoom::room_Button);
    connect(ui->maintenance_Button, &QPushButton::clicked, this, &ReserveRoom::maintenance_Button);

    connect(ui->save_Button, &QPushButton::clicked, this, &ReserveRoom::save_Button);
    connect(ui->cancel_Button, &QPushButton::clicked, this, &ReserveRoom::cancel_Button);

}

ReserveRoom::~ReserveRoom()
{
    delete ui;
}
 // overview button for admin dashboard
void ReserveRoom::overview_Button()
{
    AdminDashboard *adminWin = new AdminDashboard(this);
    adminWin->setModal(true);
    adminWin->exec();
}

   // room checking button
void ReserveRoom::room_Button()
{
    Room *roomWin = new Room(this);
    roomWin->setModal(true);
    roomWin->exec();
}

// register room button
void ReserveRoom::reserve_Button()
{

}

// maintenance of room button
void ReserveRoom::maintenance_Button()
{
    RMaintenance *maintWin = new RMaintenance(this);
    maintWin->setModal(true);
    maintWin->exec();
}

// saved button
void ReserveRoom::save_Button()
{
        QString studentId = ui->studentid_lineEdit->text().trimmed();
        QString roomNo = ui->room_lineEdit->text().trimmed();
        QString capacity = (ui->capacity_comboBox) ? ui->capacity_comboBox->currentText().trimmed() : "";
        QString paymentId = ui->paymentid_lineEdit->text().trimmed();
        QString duration = ui->duration_lineEdit->text().trimmed();
        QString price = ui->price_lineEdit->text().trimmed();
        if (studentId.isEmpty() || roomNo.isEmpty() || capacity.isEmpty() ||
            paymentId.isEmpty() || duration.isEmpty() || price.isEmpty()) {
            QMessageBox::warning(this, "Incomplete", "Please fill in all fields.");
            return;
        }

        // Confirm the saved info (you could store or emit this data later)
        QString message = QString("Student ID: %1\nRoom No: %2\nCapacity: %3\nPayment ID: %4\nDuration: %5\nPrice: %6")
                              .arg(studentId, roomNo, capacity, paymentId, duration, price);

        QMessageBox::information(this, "Room Reserved", message);

        // Optionally: close this form after saving
        this->close();
    }



// cancel button
void ReserveRoom::cancel_Button()
{
    this->close();  // Close current ReserveRoom window

    AdminDashboard *admin = new AdminDashboard();
    admin->setModal(true);
    admin->exec();
}

