#include <iostream>
#include <LOCALE>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main() {
	setlocale(LC_ALL,"Portuguese");
	float n1 = 0,n2 = 0,n3 = 0,n4 = 0,media = 0;
	cout << "Informe as nota n�1 \n";
	cin >> n1;
	cout << "Informe as nota n�2 \n";
	cin >> n2;
	cout << "Informe as nota n�3 \n";
	cin >> n3;
	cout << "Informe as nota n�4 \n";
	cin >> n4;
	
	media = (n1+n2+n3+n4)/4;
	
	cout << "A sua m�dia � " << media << ".";
	
	if (media >= 6){
		cout << "Voc� foi aprovado.";
	}
	
	else if (media < 6){
		cout << " Voc� foi reprovado.";
		
	}
	
	else{
		cout << "Realizar o exame.";
		}
	return 0;
}
