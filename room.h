#ifndef ROOM_H
#define ROOM_H

#include <QDialog>
#include <QStandardItemModel>

namespace Ui {
class Room;
}

class Room : public QDialog {
    Q_OBJECT

public:
    explicit Room(QWidget *parent = nullptr);
    ~Room();

private slots:
    // Overview button for dashboard
    void Overview_Button();
    // Room button
    void Room_Button();
    // Room Reserve Button
    void Reserve_Button();
    // Room Maintenance Button
    void Maintenance_Button();
    // update Button for Table Widget
    void saveButton();
    // search Button for Table Widget
    void searchButton();
    // edit Button for Table Widget
    void editButton();
    // delete Button for Table Widget
    void deleteButton();

private:
    Ui::Room *ui;

    QStandardItemModel *availableModel;
    QStandardItemModel *occupiedModel;
    QStandardItemModel *damagedModel;

    void setupAvailableRooms();
    void setupOccupiedRooms();
    void setupDamagedRooms();


};

#endif // ROOM_H
