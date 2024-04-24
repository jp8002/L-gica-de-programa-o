#include <iostream>
#include <LOCALE>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"Portuguese");
	int sco1 = 1234, sco2=5678, caixa_con1 = 0, caixa_con2=0, teste=1, ativi, valor;
	string cont,trans;
	do{
		system("cls");
		cout<< "+-----------------------------+\n";
		cout<< "|  Qual o nome da sua conta?  |\n";
		cout<< "+-----------------------------+\n";
		cin >> cont;
		if (cont == "Joao" || cont == "joao" || cont =="arthur" || cont == "Arthur"){
			do{
				system("cls");
				cout << "+-----------------+\n";
				cout << "|    Bem-vindo    |\n";
				cout << "|  1º Depósito    |\n";
				cout << "|  2º Saque       |\n";
				cout << "|  3º Consulta    |\n"; 
				cout << "|  4º Tranferência|\n";
				cout << "|  5º Sair        |\n";
				cout << "+-----------------+\n";
				cin >> ativi;
				system("cls");
				if (cont == "Joao" || cont == "joao"){
					switch(ativi){
						case 1:
							cout << "Qual é o valor a ser depositado?\n";
							cin >> valor;
							caixa_con1 += valor;
							system("cls");
							cout << "O depósito foi realizado com sucesso\n";
							system("pause");
							break;
						
						case 2:
							cout << "Qual é o valor a ser sacado?\n";
							cin >> valor;
							system("cls");
							if (valor > caixa_con1){
								cout << "Você não possui saldo o suficiente para realizar esse saque.\n";
							}
							else{
								caixa_con1 -= valor;
								system("cls");
								cout << "O saque foi realizado com sucesso\n";
							}
							system("pause");
							break;
								
						case 3:
							cout << "Você possui " << caixa_con1 << " reais de saldo.\n";
							system("pause");
							break;
						case 4:
							cout << "A tranferência deve ser feita para qual conta?\n";
							cin >> trans;
							if (trans == "Arthur" || trans == "arthur"){
								cout << "Qual é o valor a ser transferido?\n";
								cin >> valor;
								system("cls");
								if (valor > caixa_con1){
									cout << "Você não possui saldo o suficiente para realizar esse saque.\n";
								}
							
								else{
									caixa_con1 -= valor;
									caixa_con2 += valor;
									system("cls");
									cout << "A tranferência foi realizada com sucesso\n";
								}
								system("pause");
							}
							else{
								cout << "Essa conta não existe.\n";
								system("pause");
							}
							break;
					}
				}
			
				else if (cont == "Arthur" || cont == "arthur"){
					switch(ativi){
						case 1:
							cout << "Qual é o valor a ser depositado?\n";
							cin >> valor;
							caixa_con2 += valor;
							system("cls");
							cout << "O depósito foi realizado com sucesso";
							system("pause");
							break;
					
						case 2:
							cout << "Qual é o valor a ser sacado?\n";
							cin >> valor;
							system("cls");
							if (valor > caixa_con2){
								cout << "Você não possui saldo o suficiente para realizar esse saque.\n";
							}
							else{
								caixa_con2 -= valor;
								system("cls");
								cout << "O saque foi realizado com sucesso\n";
							}
						
							system("pause");
							break;
							
						case 3:
							cout << "Você possui " << caixa_con2 << " reais de saldo.\n";
							system("pause");
							break;
						case 4:
							cout << "A tranferência deve ser feita para qual conta?\n";
							cin >> trans;
							if (trans == "Joao" || trans == "joao"){
								cout << "Qual é o valor a ser transferido?\n";
								cin >> valor;
								system("cls");
								if (valor > caixa_con2){
									cout << "Você não possui saldo o suficiente para realizar essa transferência.\n";
								}
								else{
									caixa_con2 -= valor;
									caixa_con1 += valor;
									system("cls");
									cout << "A tranferência foi realizada com sucesso\n";
								}
								system("pause");
							}
							else{
								cout << "Essa conta não existe.\n";
								system("pause");
							}
							break;
					}
				}
			}while(ativi != 5);
		}
		
		else{
			system("cls");
			cout << "Essa conta não existe.\n";
			system("pause");
		}
	}while(teste==1);
	
	
	
	
	return 0;
}
