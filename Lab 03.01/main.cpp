#include <iostream>
#include <cstring>
#include <string>
#include <cctype>

using namespace std;

bool verifica_caracter_maiusculo(char letra){
    return isupper(letra);
}

int main(){
    int n ;
    int solucao = 0;
    string sequencia;
    cin>> n;

	for(int i=0; i<n; i++){
        
        cin >> sequencia;
        char num1 = sequencia[0];
        char num2 = sequencia[2];
      	
        if (sequencia[0] == sequencia[2]) {
			solucao =  int(num1 - '0')* int(num2 - '0') ;
		} else if (verifica_caracter_maiusculo(sequencia[1])) {
			solucao = int(num2 - '0')- int(num1 - '0') ;
		} else {
			solucao =  int(num1 - '0')+ int(num2 - '0') ;
		}

		cout << solucao << endl;

	}

	

	return 0;
}