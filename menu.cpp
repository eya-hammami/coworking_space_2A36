#include "menu.h"
#include "ui_menu.h"
#include <QMessageBox>
#include"mainwindow.h"
#include "login.h"

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    setWindowTitle("MENU");
}

menu::~menu()
{
    delete ui;
}

void menu::on_menu_employee_clicked()
{
    qDebug()<<"WELCOME Rania";
   R.show();
}

void menu::on_menu_customers_clicked()
{
    qDebug()<<"WELCOME Client";
    C.show();

}

void menu::on_menu_sponsor_clicked()
{
    qDebug()<<"WELCOME Eya";
    S.show();
}

void menu::on_menu_Ffournisseurs_clicked()
{
    qDebug()<<"WELCOME Fournisseur";
    F.show();

}

void menu::on_menu_reservations_clicked()
{

}

void menu::on_menu_equipements_clicked()
{
    qDebug()<<"WELCOME Youssef";
    E.show();

}
