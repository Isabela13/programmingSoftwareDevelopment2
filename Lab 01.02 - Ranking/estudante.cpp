#include <iostream>
#include "estudante.h"


float Estudante::calcular_rsg(){
    float media = 0;
    for (int i =0; i<5 ; i++){
        media = media + notas[i];
    }
    return media/5;
}

    
