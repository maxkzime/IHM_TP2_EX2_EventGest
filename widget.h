// TP2/EX2/widget.h
// exercice 2 : gestionnaire d’évènements
// BODIN Maxime C2
// 22/03/25

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

#include "eventmanager.h"
#include "circle.h"
#include "areabutton.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

    QLabel * lTitle;
    QLabel * lText;
    QLineEdit *leField;
    QLabel * lResult;
};
#endif // WIDGET_H
