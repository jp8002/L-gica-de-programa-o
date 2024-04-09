#include <iostream>
#include <LOCALE>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	int op,n1,n2,resultado;
	
	do{
		cout << "+==== Menu ====+\n";
		cout << "|1 - Soma      |\n";
		cout << "|2 - Subtração |\n";
		cout << "|3 - Sair      |\n";
		cout << "+==============+\n";
		cout << "Escolha uma opção:\n";
		cin >> op;
		cout << "Qual é o primeiro número?\n";
		cin >> n1;
		cout << "Qual é o segundo número?\n";
		cin >> n2;
		
		
		
		switch(op){
			case 1:
				resultado = n1 + n2 ;
				cout << "O resultado é " << resultado;
				break;
			
			case 2:
				resultado = n1 - n2;
				cout << "O resultado é " << resultado;
				break;
			
			case 3:
				cout <<"Obrigado por usar meu sistema.";
				break;
			
			default :
				cout << "Valor inválido";
				break;
		}
		
		system("pause");
		system("cls");
	}while( op != 3);
	return 0;
}
