 #include "estudante.h"

#include <iostream>
#include <iomanip>

using namespace std;

struct EstudanteRsg {
  std::string nome;
  int matricula;
  double rsg;
};


int main() {
    Estudante e[10];
    EstudanteRsg estRsg[10];
    for (int i=0 ;  i<10 ; i++){
        cin >> e[i].matricula;
        cin >> e[i].nome;
        for (int j = 0 ; j< 5; j++){
            cin >> e[i].notas[j];
        }
        estRsg[i].nome = e[i].nome;
        estRsg[i].matricula = e[i].matricula;
        estRsg[i].rsg = e[i].calcular_rsg();

        
    }
    EstudanteRsg topT[3];
    for(int j =0 ; j< 3 ; j++){
        topT[j].rsg = -1; 
        
    }

    EstudanteRsg temp;
    for(int j=0; j<10; j++){ 
          for(int i=10; i>j; i--){
              if(estRsg[i].rsg == estRsg[i-1].rsg ){
                  if (estRsg[i].nome > estRsg[i-1].nome){
                    temp = estRsg[i];
                   estRsg[i] = estRsg[i-1];
                   estRsg[i-1] = temp;
                  }
              }
              else if(estRsg[i].rsg < estRsg[i-1].rsg ){
                   temp = estRsg[i];
                   estRsg[i] = estRsg[i-1];
                   estRsg[i-1] = temp;
              }      
          }
    }



    std::cout.precision(2);
    cout << estRsg[9].matricula << " " << estRsg[9].nome << " " << std::fixed << estRsg[9].rsg << "\n"; 
    cout << estRsg[8].matricula << " " << estRsg[8].nome << " " << std::fixed << estRsg[8].rsg << "\n";  
    cout << estRsg[7].matricula << " " << estRsg[7].nome << " " << std::fixed << estRsg[7].rsg << "\n";  
    
}
