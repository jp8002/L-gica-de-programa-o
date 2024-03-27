#include <iostream>
#include <LOCALE>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main() {
	setlocale(LC_ALL,"Portuguese");
	float n1 = 0,n2 = 0,n3 = 0,n4 = 0,media = 0;
	cout << "Informe as nota nº1 \n";
	cin >> n1;
	cout << "Informe as nota nº2 \n";
	cin >> n2;
	cout << "Informe as nota nº3 \n";
	cin >> n3;
	cout << "Informe as nota nº4 \n";
	cin >> n4;
	
	media = (n1+n2+n3+n4)/4;
	
	cout << "A sua média é " << media << ".";
	
	if (media >= 6){
		cout << "Você foi aprovado.";
	}
	
	else if (media < 6){
		cout << " Você foi reprovado.";
		
	}
	
	else{
		cout << "Realizar o exame.";
		}
	return 0;
}
