#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int busca(int nu){
	int meio, in = 0, f = 9, vetor[9] = {1,2,3,4,5,6,7,8,9};
	
	 
	while(in <= f){
		meio = (in + f)/2;
		
		if (nu == vetor[meio]){
			return meio;
		}
		
		else{
			if (nu < vetor[meio]){
				f = meio - 1;
			}
			
			else{
				in = meio + 1;
			}
		}
	}
	
	return -1;
	
}

int main() {
	int nu;
	
	cout << "Qual número?";
	cin >> nu;
	
	cout << "O número está na posição " << busca(nu); 
	
	
	
	return 0;
}
