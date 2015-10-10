#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "CreateAccountWindow.h"


namespace Ui {
class LoginWindow;
}

class AppWindow;

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::LoginWindow *ui;
    AppWindow *main_app_window;
    CreateAccountWindow *New_Account_Window;
};

#endif // LOGINWINDOW_H
