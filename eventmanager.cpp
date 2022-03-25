// TP2/EX2/eventmanager.cpp
// exercice 2 : gestionnaire d’évènements
// BODIN Maxime C2
// 22/03/25


#include "eventmanager.h"

EveMan::EveMan(QLabel *aResult, QLineEdit *aField, Circle *aCircle)
    : itsResult(aResult),itsField(aField), itsCircle(aCircle)
{}


bool dIsValid(Circle *c,QLineEdit * field)
{
    bool state = false;
    double d = field->text().toDouble();
    if(d >= 0)
    {
        state = true;
        c->setDiameter(d);
    }
    else{
        //QMessageBox * alert = new QMessageBox;
        //alert->information(w,QString("Alert"),QString("Diametre invalide"));
    }

    return state;
}


void EveMan::calculatePerimeter()
{
    if(dIsValid(itsCircle, itsField))
        itsResult->setText("Perimetre : "+QString::number(itsCircle->calculatePerimeter()));
}


void EveMan::calculateArea()
{
    if(dIsValid(itsCircle, itsField))
        itsResult->setText("Surface : "+QString::number(itsCircle->calculateArea()));
}



