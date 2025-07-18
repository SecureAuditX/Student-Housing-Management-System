#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase> // Include QSqlDatabase for the member variable
#include <QDebug>
#include "login_controller.h" // Include the header for your new controller class

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT // Required for signals and slots

public:
    /**
     * @brief Constructor for MainWindow.
     * @param parent The parent widget.
     */
    MainWindow(QWidget *parent = nullptr);

    /**
     * @brief Destructor for MainWindow.
     */
    ~MainWindow();

private slots:

private:
    Ui::MainWindow *ui; ///< Pointer to the UI elements generated by Qt Designer.
    Login_Controller *loginController; ///< Instance of the Login_Controller to handle login logic.
    QSqlDatabase db; ///< Member variable to hold the database connection.
};
#endif // MAINWINDOW_H
