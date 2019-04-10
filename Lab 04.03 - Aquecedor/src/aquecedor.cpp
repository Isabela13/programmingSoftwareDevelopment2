#include "aquecedor.h"
#include <iostream>

Aquecedor::Aquecedor(){
    temperatura = 20;
};

float Aquecedor::aquecer(){
    return temperatura = temperatura+5;
}

float Aquecedor::resfriar(){
    return temperatura = temperatura-5;
}

float Aquecedor::get_temperatura(){
    return temperatura;
}