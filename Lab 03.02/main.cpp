#include <iostream>
#include <map>

using namespace std;

void imprimeTabela(map <int, int> &tabela) {
  map<int, int>::iterator it;
  for (it = tabela.begin(); it != tabela.end(); ++it) {
    cout << it->first << ": " << it->second << endl;
  }
}



int main(){

	long long int n, m;
	char l;

	cin >> n;
	//while(cin >> n && n){

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

		imprimeTabela(pe_esquerdo);
		imprimeTabela(pe_direito);
		cout<< "\n";

		for (ite=pe_esquerdo.begin(); ite!=pe_esquerdo.end(); ++ite) {
			for (itd=pe_direito.begin(); itd!=pe_direito.end(); ++itd){
				/*cout << (ite->first) ;
				cout << pe_direito.count(it->first) ;*/
				//so verifica se a chave esta ou não presente
				if (pe_direito.count(ite->first) > 0) {
					
					cout << numero_de_pares_corretos<< "\n";
					// acho que tinha que ser it->second
					cout << ite->second<< "\n";
					//te
					cout << pe_direito[itd->second]<< "\n";
					cout << min(ite->second, pe_direito[itd->second])<< "\n";
					numero_de_pares_corretos += min(ite->second, pe_direito[itd->second]);
				}
			}
			
		}

		cout << numero_de_pares_corretos;
	//}


}