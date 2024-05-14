#include <iostream>
using namespace std;
 
// Funcoes do Algoritmo
float soma(float n1, float n2){
	return (n1 + n2);
}

float subtracao(float n1, float n2){
	return (n1 - n2);
}

float multiplicacao(float n1, float n2){
	return (n1 * n2);
}

float divisao(float n1, float n2){
	return (n1 / n2);
}

int par(int p){
	return (p % 2);
}

int fatorial(int fact){
	int resultado = fact;
	for (int i = 1; i < fact; i++){
		resultado = resultado * i;
	}
	
	return resultado;
}
 
int main() {
	int op;
	float n1=0, n2=0,p, fact;
	do{
		system("cls");
		cout << "+======= Menu =======+ \n";
		cout << "| 1 - Soma           | \n";
		cout << "| 2 - Subtracao      | \n";
		cout << "| 3 - Multiplicacao  | \n";
		cout << "| 4 - Divisao        | \n";
		cout << "| 5 - Numero par     | \n";
		cout << "| 6 - Fatoração      | \n";
		cout << "| 7 - Sair           | \n";
		cout << "+====================+ \n";
		cout << "Escolha uma opcao: ";
		cin >> op;
		if(op<5){
			cout << "Informe o primeiro numero \n";
			cin >> n1;
			cout << "Informe o segundo numero \n";
			cin >> n2;
		}
		else if (op == 5){
			cout << "Informe o numero ser checado:\n";
			cin >> p;
		}
		
		else if (op == 6){
			cout << "Informe o numero que você quer o fatorial:\n";
			cin >> fact;
		}
		
		switch(op){
			case 1:
				cout << "Soma \n";
				cout << "Resultado: " << soma(n1,n2) << endl;
				break;
			case 2:
				cout << "Subtração \n";
				cout << "Resultado: " << subtracao(n1,n2) << endl;
				break;
			case 3:
				cout << "Multiplicacao \n";
				cout << "Resultado: " << multiplicacao(n1,n2) << endl;
				break;
			case 4:
				cout << "Divisao \n";
				cout << "Resultado: " << divisao(n1,n2) << endl;
				break;
			case 5:
				cout << "Numero par \n";
				
				if (par(p) == 0){
					cout << "O numero " << p <<" é par"<< endl;
				}
				
				else if (par(p) == 1){
					cout << "O numero " << p <<" é impar"<< endl;
					
				}
				
				break;
				
			case 6:
				cout << "Fatorial \n";
				cout << "O fatorial de " << fact <<" é "<< fatorial(fact) << endl;
				
			default:
				
				break;
		}
		system("pause");
    }while(op != 7);
	
	return 0;
}
