#ifndef ADMINDASHBOARD_H
#define ADMINDASHBOARD_H
#include "room.h"
#include "reserveroom.h"
#include "rmaintenance.h"



namespace Ui {
class AdminDashboard;
}

class AdminDashboard : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDashboard(QWidget *parent = nullptr);
    ~AdminDashboard();

private slots:
    //Room Button
    void Rooms_Button();
    // Reserve Room Button
    void Reserve_Button();
    // Maintenance Room Button
    void Maintenance_Button();

private:
    Ui::AdminDashboard *ui;
};

#endif // ADMINDASHBOARD_H
