#include <iostream>
#include <locale>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	int matrizA[6][5], matrizB[6][5];
	
	srand (time(NULL));
	
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 5; j++){
			matrizA[i][j] = rand()% 80 + 14;
			
			if (matrizA[i][j] % 2 == 0){
				matrizB[i][j] = matrizA[i][j] + 5;
			}
			
			else{
				matrizB[i][j] = matrizA[i][j] - 4;
			}
		}
	}
	cout << "Matriz A\n";
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 5; j++){
			cout << "|" << matrizA[i][j];
		}
		cout <<"\n";
	}
	
	cout << "\n\n\nMatriz B\n";
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 5; j++){
			cout << "|" << matrizB[i][j];
		}
		cout <<"\n";
	}
	
	
	
	
	return 0;
}
