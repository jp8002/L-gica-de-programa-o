#include <iostream>
#include <LOCALE>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"Portuguese");
	string nome;
	int ano_a=0,ano_n=0,estilo=0,idade=0;
	
	cout << "Qual o seu nome?\n";
	cin >> nome;
	cout << "Em que anos estamos?\n";
	cin >> ano_a;
	cout << "Em que ano você nasceu?\n";
	cin >> ano_n;
	cout << "Qual o seu estilo de natação?\n	1 Nado livre \n	2 Nado de costas \n 	3 Nado borboleta\n";
	cin >> estilo;
	idade = ano_a - ano_n;
	
	if (estilo == 1){
		if (idade <= 16){
			cout << nome <<". Vá para a piscina 01";
		}
		
		else{
			cout << nome <<". Vá para a piscina 05";
		}
	}
	
	else if (estilo == 2){
		if (idade <= 21){
			cout << nome <<". Vá para a piscina 02";
		}
		
		else{
			cout << nome <<". Vá para a piscina 03";
		}
	}
	
	else {
		if (idade <= 12){
			cout << nome <<". Vá para a piscina 04";
		}
		
		else{
			cout << nome <<". Vá para a piscina 06";
		}
	}
	return 0;
}
