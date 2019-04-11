#include "aquecedor.h"
#include <iostream>

Aquecedor::Aquecedor(){
    temperatura = 20;
    temperatura_min=10;
    temperatura_max=40;
    fator_incremento = 5;
};

Aquecedor::Aquecedor(float temperatura_inicial){
    temperatura_min=10;
    temperatura_max=40;
    temperatura = temperatura_inicial;
}


Aquecedor::Aquecedor(float temperatura_inicial , float fator_incremento){
    temperatura_min=10;
    temperatura_max=40;
    temperatura = temperatura_inicial;
    fator_incremento = fator_incremento;
}

float Aquecedor::get_temperatura(){
    return temperatura;
}

float Aquecedor::get_fatorIncremento(){
    return fator_incremento;
}

void Aquecedor::set_fatorIncremento(float fi){
    fator_incremento = fi;
}

float Aquecedor::aquecer(){
    if (get_temperatura()+get_fatorIncremento() <= temperatura_max){
        temperatura = get_temperatura()+get_fatorIncremento();    
    }
    return temperatura;
}

float Aquecedor::resfriar(){
    if (get_temperatura()-get_fatorIncremento() >= temperatura_min){
        temperatura = get_temperatura()-get_fatorIncremento();    
    }
    return temperatura;
}

