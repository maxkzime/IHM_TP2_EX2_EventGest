// TP2/EX2/eventmanager.h
// exercice 2 : gestionnaire d’évènements
// BODIN Maxime C2
// 22/03/25

#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include "circle.h"
#include "widget.h"

#include <QWidget>
#include <QMessageBox>

class EventManager : public QObject
{
    Q_OBJECT

public:
    EventManager(QLabel * aResult,
                 QLineEdit * aField);
    QMessageBox * itsAlert;

public slots:
    void calculatePerimeter();

private:
    QLabel * itsResult;
    QLineEdit * itsField;
    Circle * itsCircle;


};

#endif // EVENTMANAGER_H
