// TP2/EX2/areabutton.cpp
// exercice 2 : gestionnaire d’évènements
// BODIN Maxime C2
// 22/03/25

#include "areabutton.h"


AreaButton::AreaButton(EveMan *evMan)
{itsEvMan = evMan;}

bool AreaButton::eve(QEvent *e)
{
    if(e->type() == QEvent::MouseButtonPress)
    {
        itsEvMan->calculatePerimeter();
        qDebug("clicked");
    }
    return QPushButton::event(e);
}
