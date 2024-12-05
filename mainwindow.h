#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sponsor.h"
#include "arduino.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void update_label();

    void on_pushButton_ajouter_2_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_afficher_clicked();

    void on_pushButton_modifier_2_clicked();

    void on_pushButton_supprimer_clicked();



    void on_lineEdit_prenomcher_cursorPositionChanged(int arg1, int arg2);

    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();


    void on_pushButton_6_clicked();

    void on_lineEdit_chercher_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_supprimer_2_clicked();

private:
    Ui::MainWindow *ui;
    Sponsor s;

    QByteArray data;

    Arduino A;
};
#endif // MAINWINDOW_H
