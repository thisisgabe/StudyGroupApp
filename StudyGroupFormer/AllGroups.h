#ifndef ALLGROUPS_H
#define ALLGROUPS_H

#include <QMainWindow>
#include"AllGroups.h"
#include<iostream>
#include <QString>
#include <QDate>
#include "User.h"

namespace Ui {
class AllGroups;
}

class LoginWindow;
class User;

class AllGroups : public QWidget
{
    Q_OBJECT

public:
    explicit AllGroups(QWidget *parent = 0);
    ~AllGroups();
    void User_Profile();

private slots:

private:
    Ui::AllGroups *ui;
};

#endif // ALLGROUPS_H
