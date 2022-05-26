// TP2/EX2/eventmanager.cpp
// exercice 2 : gestionnaire d’évènements
// BODIN Maxime C2
// 22/03/25


#include "eventmanager.h"
#include <QMessageBox>

EventManager::EventManager(QLabel *aResult, QLineEdit *aField)
    : itsResult(aResult),itsField(aField)
{
    Circle *c = new Circle;
    itsCircle = c;
    QMessageBox * alert = new QMessageBox();
    itsAlert = alert;
}


bool dIsValid(Circle *c,QLineEdit * field, QMessageBox * itsAlert)
{
    bool state = false;
    double d = field->text().toDouble();
    if(d > 0)
    {
        state = true;
        c->setDiameter(d);
    }
    else
        itsAlert->information(field->parentWidget(),QString("Alert"),QString("Diametre invalide"));

    return state;
}


void EventManager::calculatePerimeter()
{
    if(dIsValid(itsCircle, itsField, itsAlert))
        itsResult->setText("Perimetre : "+QString::number(itsCircle->calculatePerimeter()));
    else
        itsResult->setText("Invalid diameter");
}
