// TP2/EX2/widget.cpp
// exercice 2 : gestionnaire d’évènements
// BODIN Maxime C2
// 22/03/25

#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("Cercle");
    QGridLayout * layout = new QGridLayout(this);

    QLabel * lTitle = new QLabel();
    lTitle->setText("Veuillez saisir le diametre");
    layout->addWidget(lTitle,0,0,1,2);

    QLabel * lText = new QLabel();
    lText->setText("Diametre : ");
    layout->addWidget(lText,1,0);

    QLineEdit *leField = new QLineEdit();
    layout->addWidget(leField,1,1);

    QLabel * lResult = new QLabel();
    layout->addWidget(lResult,3,0,1,2);

    Circle *c = new Circle;
    EveMan * gest = new EveMan(lResult, leField, c);

    AreaButton * bPerimeter = new AreaButton(gest);
    bPerimeter->setText("Calculer le perimetre");
    layout->addWidget(bPerimeter,2,0);


    //    connect(bPerimeter, SIGNAL(clicked()), &gest, SLOT(calculatePerimeter));

    //

    //    EventManager m(lResult,leField,c);
    //    connect(bPerimeter, &QPushButton::clicked,[lResult,leField](){
    //        Circle c(leField->text().toDouble());
    //        lResult->setText("Perimetre : "+QString::number(c.calculatePerimeter()));
    //    });


    QPushButton * bArea = new QPushButton();
    bArea->setText("Calculer la surface");
    layout->addWidget(bArea,2,1);


}


