#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main() {
	int vetor[10] = {1,50,76,12,3,90}, tamanho = 6, aux = 0;
	
	for(int i = 0; i < tamanho - 1; i++){
		for(int j = 0; j < tamanho - i - 1; j++){
			if(vetor[j] > vetor[j + 1] ){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}
	
	for(int i = 0; i < 6;i++){
		cout << vetor[i] << " ";
	}
	
	return 0;
}
