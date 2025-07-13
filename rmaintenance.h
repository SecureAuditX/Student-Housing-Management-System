#ifndef RMAINTENANCE_H
#define RMAINTENANCE_H

#include <QDialog>

namespace Ui {
class RMaintenance;
}

class RMaintenance : public QDialog
{
    Q_OBJECT

public:
    explicit RMaintenance(QWidget *parent = nullptr);
    ~RMaintenance();

private slots:

    void Overview_Button();

    void Room_Button();

    void Reserve_Button();

    void Maintenance_Button();

      // edit button for TableWidget
    void Edit_Button();
      // save button for TableWidget
    void Save_Button();
     // delete button for TableWidget
    void Delete_Button();

private:
    Ui::RMaintenance *ui;
};

#endif // RMAINTENANCE_H
