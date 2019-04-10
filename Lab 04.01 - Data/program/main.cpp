#include "data.h"
#include <string>
#include <stdio.h>
#include <iostream>

/*Crie uma classe Data com três atributos inteiros: dia, mês e ano. Faça um construtor que inicializa as
três variáveis e suponha que os valores passados serão corretos. A classe deve possuir um método para
exibir a data em formato de números separados por barra: dia/mes/ano e outro método para exibir a
data por extenso (ex: 12 de janeiro de 2015).*/



int main(){
    std::cout << "Use o main para testar seu código" << std::endl;
    
    Data Data(01,02,2019) ;
    std::cout << Data.get_data_curto() << "\n";
    std::cout << Data.get_data_longo();
    
    return 0;
}