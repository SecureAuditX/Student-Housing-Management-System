#ifndef STUDENTDASHBOARD_H
#define STUDENTDASHBOARD_H

#include <QDialog>

namespace Ui {
class studentdashboard;
}

class studentdashboard : public QDialog
{
    Q_OBJECT

public:
    explicit studentdashboard(QWidget *parent = nullptr);
    ~studentdashboard();

private:
    Ui::studentdashboard *ui;
};

#endif // STUDENTDASHBOARD_H
