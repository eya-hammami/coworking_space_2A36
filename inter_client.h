#ifndef INTER_CLIENT_H
#define INTER_CLIENT_H

#include <QMainWindow>
#include<QMessageBox>
#include <QDialog>

#include <QPixmap>
#include <QFile>
#include <QDialog>
#include <QFileDialog>

#include <QUrl>
#include <QSystemTrayIcon>
#include<QPropertyAnimation>
#include <QRegularExpression>
#include <QTranslator>
#include <QPixmap>

#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include<QFileDialog>
#include<QTextDocument>
#include<QTextStream>
#include<QGraphicsView>
#include<QtPrintSupport/QPrintDialog>
#include<QPdfWriter>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QSystemTrayIcon>
#include<QUrlQuery>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include <QDate>
#include <QTime>
#include<QMessageBox>
#include<QSqlTableModel>
#include<QItemSelectionModel>
#include<QTableWidgetItem>
#include <QtPrintSupport/QPrinter>
#include <QDesktopServices>
#include <QDesktopWidget>
#include <QCoreApplication>
#include"client.h"
#include"seriallink.h"

namespace Ui {
class inter_client;
}

class inter_client : public QMainWindow
{
    Q_OBJECT

public:
    explicit inter_client(QWidget *parent = nullptr);
    ~inter_client();
public slots:
    QString updateGUI(QString);

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_update_clicked();


    void on_loginPB_clicked();




    void on_modifyRech_clicked();



    void on_COPYMESSAGE_clicked();

    void on_COPYNUMBER_clicked();


    void on_rechpb11_clicked();

    void on_facturePb_clicked();

    void on_delete_pb_clicked();


    void on_addbillpb_clicked();

    void on_pritpdfPb_clicked();

    void on_leidrech_textChanged(const QString &arg1);

    void on_lenamerech_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_comboRech_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_comboBox_3_currentIndexChanged(int index);

    void on_qrcodegen_clicked();
     void on_statsmed_clicked();


private:
    Ui::inter_client *ui;
    Client c;
    seriallink* arduino ;
    int language;

};

#endif // INTER_CLIENT_H
