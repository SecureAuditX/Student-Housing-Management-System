#include "studentdashboardxx.h"
#include "ui_studentdashboardxx.h"


StudentDashboard::StudentDashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StudentDashboard)
{
    ui->setupUi(this);
}

StudentDashboard::~StudentDashboard()
{
    delete ui;
}
