
#include <iostream>
#include <string>
#include <cstring> 
#include <map>
#include <vector>
#include <iomanip>
#include <sstream> 
#include <iterator> 
#include <algorithm>

  
using namespace std; 


void imprimeTabelaOrdenada(map <string, int> &tabela , int qtd) {
  cout.precision(2);
  // vector que vamos ordenar
  vector< pair<string, int> > buffer; 

  // itera no mapa e coloca cada par no vector
  map<string, int>::iterator it;
  for (it = tabela.begin(); it != tabela.end(); ++it) {
    buffer.push_back(*it);
  }

  vector< pair<string, int> >::iterator vit; 
  for (vit = buffer.begin(); vit != buffer.end(); ++vit) {
    cout << vit->first << " " << vit->second << " " << (double(vit->second)  / qtd) << endl;
  }
}

int main(){

  cout.precision(2);
  map<std::string, int> mapa;
  int i ;
  double qtd =0;
  std::string linha ,  palavra ;


  while (std::getline(cin, linha)) {
    std::istringstream linha_stream(linha);
    while (std::getline(linha_stream, palavra, ' ')) {
      char c;
      i =0;
      while (palavra[i]){
        c=palavra[i];
        palavra[i]=tolower(c);
        i++;
      }
      mapa[palavra]++;
      qtd ++;
    }
  }
  imprimeTabelaOrdenada(mapa , qtd);

}