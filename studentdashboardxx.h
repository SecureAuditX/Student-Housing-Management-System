#ifndef STUDENTDASHBOARDXX_H
#define STUDENTDASHBOARDXX_H

#include <QDialog>

namespace Ui {
class StudentDashboard;
}

class StudentDashboard : public QDialog
{
    Q_OBJECT

public:
    explicit StudentDashboard(QWidget *parent = nullptr);
    ~StudentDashboard();

private:
    Ui::StudentDashboard *ui;
};

#endif // STUDENTDASHBOARDXX_H
