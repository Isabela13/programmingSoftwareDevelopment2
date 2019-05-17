#include "forma.h"
#include "forma2d.h"
#include "quadrado.h"

#include <iostream>
#include <string>

Quadrado::Quadrado(std::string cor , double aresta) {
  this->_cor = cor;
  this->_aresta = aresta;
  this->_nome = "quadrado";
}

std::string Quadrado::get_cor(){
    return this->_cor;
}

std::string Quadrado::get_nome(){
    return this->_nome;
}

double Quadrado::get_area(){
    return ((this->_aresta)*(this->_aresta));
}

double Quadrado::get_perimetro(){
    return ((this->_aresta)*4);
}