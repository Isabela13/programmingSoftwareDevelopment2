#include <iostream>
#include "aquecedor.h"
int main(){

     Aquecedor aquecedor = Aquecedor();
    std::cout << aquecedor.get_temperatura() << " 20"<< "\n";
    
    for (int i = 0; i < 1000; i++)
        aquecedor.aquecer();

    

    for (int i = 0; i < 1000; i++)
        aquecedor.resfriar();
    std::cout << aquecedor.get_temperatura() << " 10"<< "\n";

    
    return 0;
}