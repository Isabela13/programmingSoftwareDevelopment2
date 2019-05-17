#include "forma.h"
#include "forma3d.h"
#include "cubo.h"
#include <math.h>
#include <iostream>
#include <string>

Cubo::Cubo(std::string cor , double raio) {
  this->_cor = cor;
  this->_nome = "cubo";
  this->_raio = raio;
}

std::string Cubo::get_cor(){
    return this->_cor;
}

std::string Cubo::get_nome(){
    return this->_nome;
}

double Cubo::get_volume(){
    return pow(this->_raio,3);
}
