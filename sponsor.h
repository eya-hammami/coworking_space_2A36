#ifndef SPONSOR_H
#define SPONSOR_H
#include <QString>

class Sponsor
{
public:
    Sponsor();
    Sponsor(int,QString,int);
    int getID_spon();
    QString getNom_spon();
   int getMontant_payes();
    void setID_spon (int);
    void setNom_spon(QString);
    void setMontant_payes(int);
    bool ajouter ();
 private:
  int ID_spon;
  QString Nom_spon;
  int Montant_payes;

};

#endif // SPONSOR_H
