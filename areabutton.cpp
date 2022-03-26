// TP2/EX2/areabutton.cpp
// exercice 2 : gestionnaire d’évènements
// BODIN Maxime C2
// 22/03/25

#include "areabutton.h"

AreaButton::AreaButton()
{}

bool AreaButton::event(QEvent *e)
{
    if(e->type() == QEvent::MouseButtonPress)
    {
        itsEvMan->calculatePerimeter();
        qDebug("clicked");
        return true;
    }
    return QPushButton::event(e);
}

void AreaButton::setData(EventManager * evMan)
{itsEvMan = evMan;}
