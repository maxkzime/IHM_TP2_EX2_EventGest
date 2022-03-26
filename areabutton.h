// TP2/EX2/areabutton.h
// exercice 2 : gestionnaire d’évènements
// BODIN Maxime C2
// 22/03/25

#ifndef AREABUTTON_H
#define AREABUTTON_H

#include "eventmanager.h"

#include <QObject>
#include <QPushButton>
#include <QEvent>


class AreaButton : public QPushButton
{
    Q_OBJECT

public:
    AreaButton();
    bool event(QEvent * e) override;
    void setData(EventManager  * m);

private:
    EventManager * itsEvMan;

};

#endif // AREABUTTON_H
