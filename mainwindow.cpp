#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sponsor.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    int ID_spon=ui->le_id->text().toInt();
    QString Nom_spon=ui->le_nom->text();
    int Montant_payes=ui->le_MontantPaye->text().toInt();
 Sponsor S(ID_spon,Nom_spon,Montant_payes);
}



