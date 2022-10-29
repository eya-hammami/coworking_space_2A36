#include "sponsor.h"
#include<QSqlQuery>
#include<QtDebug>
Sponsor::Sponsor()
{
ID_spon=0;Nom_spon=" ";Montant_payes=0;
}
Sponsor::Sponsor(int ID_spon,QString Nom_spon,int Montant_payes)
{this->ID_spon=ID_spon;
 this->Nom_spon=Nom_spon;
 this->Montant_payes=Montant_payes;
}
int Sponsor::getID_spon()
{
 return ID_spon;
}
QString Sponsor::getNom_spon()
{
    return Nom_spon;
}
int Sponsor::getMontant_payes()
{
    return Montant_payes;
}
void Sponsor:: setID_spon (int ID_spon)
{
    this->ID_spon=ID_spon;
}
void Sponsor::setNom_spon(QString Nom_spon)
{
    this->Nom_spon=Nom_spon;
}
void Sponsor::setMontant_payes(int Montant_payes)
{
    this->Montant_payes=Montant_payes;
}
bool Sponsor::ajouter()
{
    QSqlQuery query;
    QString id_string=QString::number(ID_spon);
     QString montant_string=QString::number(Montant_payes);
      query.prepare("INSERT INTO SPONSORS (ID_spon, Nom_spon, Montant_payes) "
                    "VALUES (:id, :forename, :montant)");
      query.bindValue(":id", id_string);
      query.bindValue(":forename", "Nom_spon");
      query.bindValue(":montant", montant_string);
      return query.exec();
}
