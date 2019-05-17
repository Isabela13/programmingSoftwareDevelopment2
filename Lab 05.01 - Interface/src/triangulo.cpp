#include "forma.h"
#include "forma2d.h"
#include "triangulo.h"
#include <math.h>
#include <iostream>
#include <string>

Triangulo::Triangulo(std::string cor , double aresta1 , double aresta2 , double aresta3) {
  this->_cor = cor;
  this->_nome = "triangulo";
  this->_aresta1 = aresta1;
  this->_aresta2 = aresta2;
  this->_aresta3 = aresta3;
}

std::string Triangulo::get_cor(){
    return this->_cor;
}

std::string Triangulo::get_nome(){
    return this->_nome;
}

double Triangulo::get_area(){
    //formula de heron
    double a = this->_aresta1;
    double b = this->_aresta2;
    double c = this->_aresta3;
    double p = (a + b + c)/2;
    double area = pow((p*(p-a)*(p-b)*(p-c)),0.5);
    return area;
}

double Triangulo::get_perimetro(){
    return ((this->_aresta1)+(this->_aresta2)+(this->_aresta3));
}