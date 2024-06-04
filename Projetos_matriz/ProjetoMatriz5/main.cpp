#include <iostream>
#include <locale>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	setlocale(LC_ALL,"Portuguese");
	int matrizA[4][5], vetorB[4], vetorC[5], somaL = 0, somaC = 0;
	
	srand(time(NULL));
	for (int i = 0; i< 4; i++){
		for(int j =0; j < 5; j++){
			matrizA[i][j] = rand()% 5 + 1;
			somaL += matrizA[i][j];
		}
		
		vetorB[i] = somaL;
		somaL = 0;
	}
	
	for (int i = 0; i< 5; i++){
		for(int j =0; j < 4; j++){
			somaC += matrizA[j][i];
		}
		
		vetorC[i] = somaC;
		somaC = 0;
	}
		
	
	for (int i = 0; i< 4; i++){
		for(int j =0; j < 5; j++){
			cout << "|" << matrizA[i][j];
		}
		
		cout << "\n";
	}
	
	for (int i = 0; i< 4; i++){
		cout << vetorB[i] << " ";
	}
	
	cout << "\n";
	
	for (int i = 0; i< 5; i++){
		cout << vetorC[i] << " ";
	}
	
	cout << "\n";
	
	
	return 0;
}
