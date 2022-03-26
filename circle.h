// TP2/EX2/circle.h
// exercice 2 : gestionnaire d’évènements
// BODIN Maxime C2
// 22/03/25


#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{
public:
    Circle();
    Circle (double aDiameter);
    void setDiameter(double aDiameter);
    double calculatePerimeter();
    double calculateArea();

private:
    const double PI = 3.141592655359;
    double itsDiameter;

};

#endif // CIRCLE_H
