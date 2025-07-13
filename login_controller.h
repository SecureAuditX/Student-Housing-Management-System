#ifndef LOGIN_CONTROLLER_H
#define LOGIN_CONTROLLER_H

#include <QObject>
#include <QString>
#include <QSqlDatabase>
#include <QLineEdit>
#include <QWidget> // Required for QMessageBox parent


class Login_Controller : public QObject
{
    Q_OBJECT // QObject is necessary for signals and slots

public:

    explicit Login_Controller(QObject *parent = nullptr);


    void performLogin(QSqlDatabase &db, QLineEdit *usernameLineEdit, QLineEdit *passwordLineEdit, QWidget *parentWidget);

signals:

    void loginSuccessful(const QString &username);

    /**
     * @brief Signal emitted when a login attempt fails.
     * @param errorMessage A description of why the login failed.
     */
    void loginFailed(const QString &errorMessage);
};

#endif // LOGIN_CONTROLLER_H
