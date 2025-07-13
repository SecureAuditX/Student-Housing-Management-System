#ifndef RESERVEROOM_H
#define RESERVEROOM_H
#include <QDialog>

namespace Ui {
class ReserveRoom;
}

class ReserveRoom : public QDialog
{
    Q_OBJECT

public:
    explicit ReserveRoom(QWidget *parent = nullptr);
    ~ReserveRoom();

private slots:
    // overview button for admin dashboard
    void overview_Button();
   // room checking button
    void room_Button();
    // register room button
    void reserve_Button();
    // maintenance of room button
    void maintenance_Button();
    // save button
    void save_Button();
    // cancel button back to admindashboard
    void cancel_Button();

private:
    Ui::ReserveRoom *ui;
};

#endif // RESERVEROOM_H
