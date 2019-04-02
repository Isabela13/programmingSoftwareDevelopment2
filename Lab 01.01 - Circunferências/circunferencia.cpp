#include <iostream>
#include <cmath>
#include "circunferencia.h"

Circunferencia::Circunferencia(double x, double y, double r){
    xc = x;
    yc = y;
    raio = r;
}

double Circunferencia::calcular_area(){
    return 3.14*(raio*raio);
}

bool Circunferencia::possui_intersecao(Circunferencia  &c){
    double distancia = pow((c.xc - xc),2) + pow((c.yc - yc),2);
    distancia = sqrt(distancia);
    if (distancia <= c.raio + raio){
        return true;
    }else {
        return false;
    }
    
}