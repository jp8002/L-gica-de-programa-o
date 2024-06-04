#include <iostream>
#include <locale>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	setlocale(LC_ALL,"Portuguese");
	int matriz[10][7], par = 0, impar = 0, porp = 0, pori = 0;
	
	srand(time(NULL));
	for (int i = 0; i< 10; i++){
		for(int j =0; j < 7; j++){
			matriz[i][j] = rand()% 90 + 10;
			
			if (matriz[i][j] % 2 == 0){
				par ++;
			}
			
			else{
				impar ++;
			}
		}
	}
	
	for (int i = 0; i< 10; i++){
		for(int j =0; j < 7; j++){
			cout << "|" << matriz[i][j];
		}
		
		cout << "\n";
	}
	
	porp = (par * 100)/70;
	pori = (impar * 100)/70;
	
	cout << "A matriz possui " << par << " pares e " << impar << " impares. Os números pares equivalem a " << porp << "% e os impares a " << pori << "%.\n";
	
	return 0;
}
