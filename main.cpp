// TP2/EX2/main.cpp
// exercice 2 : gestionnaire d’évènements
// BODIN Maxime C2
// 22/03/25

#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
