#include "studentdashboard.h"
#include "ui_studentdashboard.h"

studentdashboard::studentdashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::studentdashboard)
{
    ui->setupUi(this);
}

studentdashboard::~studentdashboard()
{
    delete ui;
}
