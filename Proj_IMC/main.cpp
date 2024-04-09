#include <iostream>
#include <LOCALE>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	string nome;
	char res = 'S';
	float peso,altura,imc;
	while ( res == 'S'){
		cout << "Qual e o seu nome\n";
		cin >> nome;
		
		cout << "Qual é a sua altura\n";
		cin >> altura;
		
		cout << "Qual é o seu peso \n";
		cin >> peso;
		
		imc = peso / (altura*altura);
		cout << "Seu imc é " << imc << ". ";
		
		if (imc >= 18.5 && imc <=24.9){
			cout << "Peso normal \n";
		}
		
		else if (imc > 25 ){
			cout << "Acima do peso \n";
		}
		
		else{
			cout << "Abaixo do peso";
		}
		
		cout << "Quer calcular de novo?";
		cin >> res;
		system("cls");
	}
	return 0;
}
