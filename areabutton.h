// TP2/EX2/areabutton.h
// exercice 2 : gestionnaire d’évènements
// BODIN Maxime C2
// 22/03/25

#ifndef AREABUTTON_H
#define AREABUTTON_H

#include <QPushButton>
#include <QEvent>

#include "eventmanager.h"
#include "widget.h"

class AreaButton : public QPushButton
{
    Q_OBJECT

public:
    AreaButton(EveMan * m);
    bool eve(QEvent * e);

private:
    EveMan * itsEvMan;

};

#endif // AREABUTTON_H
