// TP2/EX2/widget.cpp
// exercice 2 : gestionnaire d’évènements
// BODIN Maxime C2
// 22/03/25

#include "widget.h"

#include "eventmanager.h"
#include "circle.h"
#include "areabutton.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("Cercle");
    QGridLayout * layout = new QGridLayout(this);
    setLayout(layout);

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

    EventManager * gest = new EventManager(lResult, leField);

    AreaButton * bPerimeter = new AreaButton();
    bPerimeter->setData(gest);
    bPerimeter->setText("Calculer le perimetre");
    layout->addWidget(bPerimeter,2,0);

    QPushButton * bArea = new QPushButton();
    bArea->setText("Calculer la surface");
    layout->addWidget(bArea,2,1);

    connect(bPerimeter, SIGNAL(QEvent::MouseButtonPress), gest, SLOT(calculatePerimeter));

    connect(bArea, &QPushButton::clicked,[gest,this,lResult,leField](){
        if(leField->text().toDouble() > 0){
            Circle c(leField->text().toDouble());
            lResult->setText("Surface : "+QString::number(c.calculateArea()));
        }else{
            gest->itsAlert->information(this,QString("Alert"),QString("Diametre invalide"));
            lResult->setText("Invalid diameter");
        }
    });

}


