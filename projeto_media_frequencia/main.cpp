#include <iostream>
#include <LOCALE>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"Portuguese");
	float n1=0,n2=0,n3=0,n4=0,media=0,freq=0;
	
	cout << "Qula a sua 1� nota?\n";
	cin >> n1;
	cout << "Qula a sua 2� nota?\n";
	cin >> n2;
	cout << "Qula a sua 3� nota?\n";
	cin >> n3;
	cout << "Qula a sua 4� nota?\n";
	cin >> n4;
	cout << "Qual � a porcentagem da sua frequ�ncia?\n";
	cin >> freq;
	
	media = (n1 + n2 + n3 + n4 )/4;
	cout << "A sua m�dia � de " << media <<".\n";
	
	if (freq < 75 || media < 4){
		cout << "Reprovado";
	}
	
	else if (media >= 6){
		cout << "Aprovado";
	}
	
	else {
		cout << "Exame";
	}
	
	
	
	return 0;
}
