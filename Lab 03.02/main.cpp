#include <iostream>
#include <map>

using namespace std;

void imprimeMap(map <int, int> &tabela) {
  map<int, int>::iterator it;
  for (it = tabela.begin(); it != tabela.end(); ++it) {
    cout << it->first << ": " << it->second << endl;
  }
}



int main(){

	long long int n, m;
	char l;

	
	while(cin >> n && n){

		map<int, int> pe_esquerdo;
		map<int, int> pe_direito;
		map<int, int>::iterator itd;
		map<int, int>::iterator ite;
		long long int numero_de_pares_corretos=0;	

		for (long long int i = 0; i<n; i++){
			
			cin >> m >> l;

			if (l == 'E'){
				pe_esquerdo[m]++;
			} else if (l == 'D'){
				pe_direito[m]++;
			}
		}

		for (ite=pe_esquerdo.begin(); ite!=pe_esquerdo.end(); ++ite) {
			if (pe_direito.count(ite->first) > 0) {
				numero_de_pares_corretos += min(ite->second, pe_direito[ite->first]);
			}	
		}

		cout << numero_de_pares_corretos;
	}


}