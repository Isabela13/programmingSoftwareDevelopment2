#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool myfunction (int i,int j) { return (i>j); }

int main(){

	long long int a, d , bi , ci;
	
	while(cin >> a >> d && a != 0 && d != 0){
		vector<int> atacante (a);
  		vector<int> defesa (d); 
		for (int i=0; i<a ; i++){
			cin >> bi;
			atacante[i] = bi;
		}
		for (int i=0; i<d ; i++){
			cin >> ci;
			defesa[i] = ci;
		}
	

		std::sort (defesa.begin(), defesa.end(), myfunction); 
	

		// print out content:
  		/*for (std::vector<int>::iterator it=defesa.begin(); it!=defesa.end(); ++it)
    		std::cout << *it<< ' ';*/
  		std::cout << '\n';
  		bool impedido = false;
  		for (int i = 0; i < a ; i++){
  			if (atacante[i] == defesa[1] || atacante[i] >= defesa[0]){
				impedido = false;
  			}else{
  				impedido = true;
  				break;
  			}
  		}

  		if (impedido){
  			std::cout<< "S";
  		}else {
  			std::cout<< "N";
  		}
}

}