#include <iostream>
#include <LOCALE>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	setlocale(LC_ALL,"Portuguese");
	int ns = 150, nu =0, cont;
	
	do {
		system("cls");
		cout << "Qual é o número secreto?\n";
		cin >> nu;
		
		switch(nu){
			case 150:
				cout << "Parabens vc acertou!!!!!!!\n";
				break;
			
			default:
				cont++;
				cout << "Você errou.\n";
		}
		
		system("pause");
	}while(ns != nu && cont <= 4);
	
	cout << "Você tentou " << cont;
	return 0;
}
