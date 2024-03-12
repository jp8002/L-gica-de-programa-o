#include <iostream>
#include <LOCALE>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"Portuguese");
	int codigo_re, lei_atual, lei_anterior, tipo_li;
	string nome_cliente;
	float conta;
	
	cout << "Qual é o código do seu relógio?\n";
	cin >> codigo_re;
	cout << "Qual é o seu nome?\n";
	cin >> nome_cliente;
	cout << "Qual foi a leitura anterior\n";
	cin >> lei_anterior;
	cout << "Qual é a leitura atual?\n";
	cin >> lei_atual;
	
	conta = lei_anterior - lei_atual;
	
	cout << "Escolha o número que corresponda  ao seu tipo de ligação:\n 1. Residencial\n 2. Comercial \n 3. Industrial\n ";
	cin >> tipo_li;
	
	if (tipo_li == 1){
		conta *= 0.6;
	}
	
	if (tipo_li == 2){
		conta *= 0.48;
	}
	
	if (tipo_li == 3){
		conta *= 1.29;
	}
	
	cout << nome_cliente << " o valor da sua conta é " << conta;

	
	
	return 0;
}
