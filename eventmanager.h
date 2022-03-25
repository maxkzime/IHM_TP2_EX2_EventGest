// TP2/EX2/eventmanager.h
// exercice 2 : gestionnaire d’évènements
// BODIN Maxime C2
// 22/03/25


#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include "circle.h"
#include "widget.h"

#include <QMessageBox>
#include <QWidget>

class EveMan : public QObject
{
    Q_OBJECT

public:
    EveMan(QLabel * aResult,
                 QLineEdit * aField,
                 Circle * aCircle);
public slots:
    void calculatePerimeter();
    void calculateArea();

private:
    QLabel * itsResult;
    QLineEdit * itsField;
    Circle * itsCircle;

    //QMessageBox * alert;

};

#endif // EVENTMANAGER_H
