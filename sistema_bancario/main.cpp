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
				cout << "|  1� Dep�sito    |\n";
				cout << "|  2� Saque       |\n";
				cout << "|  3� Consulta    |\n"; 
				cout << "|  4� Tranfer�ncia|\n";
				cout << "|  5� Sair        |\n";
				cout << "+-----------------+\n";
				cin >> ativi;
				system("cls");
				if (cont == "Joao" || cont == "joao"){
					switch(ativi){
						case 1:
							cout << "Qual � o valor a ser depositado?\n";
							cin >> valor;
							caixa_con1 += valor;
							system("cls");
							cout << "O dep�sito foi realizado com sucesso\n";
							system("pause");
							break;
						
						case 2:
							cout << "Qual � o valor a ser sacado?\n";
							cin >> valor;
							system("cls");
							if (valor > caixa_con1){
								cout << "Voc� n�o possui saldo o suficiente para realizar esse saque.\n";
							}
							else{
								caixa_con1 -= valor;
								system("cls");
								cout << "O saque foi realizado com sucesso\n";
							}
							system("pause");
							break;
								
						case 3:
							cout << "Voc� possui " << caixa_con1 << " reais de saldo.\n";
							system("pause");
							break;
						case 4:
							cout << "A tranfer�ncia deve ser feita para qual conta?\n";
							cin >> trans;
							if (trans == "Arthur" || trans == "arthur"){
								cout << "Qual � o valor a ser transferido?\n";
								cin >> valor;
								system("cls");
								if (valor > caixa_con1){
									cout << "Voc� n�o possui saldo o suficiente para realizar esse saque.\n";
								}
							
								else{
									caixa_con1 -= valor;
									caixa_con2 += valor;
									system("cls");
									cout << "A tranfer�ncia foi realizada com sucesso\n";
								}
								system("pause");
							}
							else{
								cout << "Essa conta n�o existe.\n";
								system("pause");
							}
							break;
					}
				}
			
				else if (cont == "Arthur" || cont == "arthur"){
					switch(ativi){
						case 1:
							cout << "Qual � o valor a ser depositado?\n";
							cin >> valor;
							caixa_con2 += valor;
							system("cls");
							cout << "O dep�sito foi realizado com sucesso";
							system("pause");
							break;
					
						case 2:
							cout << "Qual � o valor a ser sacado?\n";
							cin >> valor;
							system("cls");
							if (valor > caixa_con2){
								cout << "Voc� n�o possui saldo o suficiente para realizar esse saque.\n";
							}
							else{
								caixa_con2 -= valor;
								system("cls");
								cout << "O saque foi realizado com sucesso\n";
							}
						
							system("pause");
							break;
							
						case 3:
							cout << "Voc� possui " << caixa_con2 << " reais de saldo.\n";
							system("pause");
							break;
						case 4:
							cout << "A tranfer�ncia deve ser feita para qual conta?\n";
							cin >> trans;
							if (trans == "Joao" || trans == "joao"){
								cout << "Qual � o valor a ser transferido?\n";
								cin >> valor;
								system("cls");
								if (valor > caixa_con2){
									cout << "Voc� n�o possui saldo o suficiente para realizar essa transfer�ncia.\n";
								}
								else{
									caixa_con2 -= valor;
									caixa_con1 += valor;
									system("cls");
									cout << "A tranfer�ncia foi realizada com sucesso\n";
								}
								system("pause");
							}
							else{
								cout << "Essa conta n�o existe.\n";
								system("pause");
							}
							break;
					}
				}
			}while(ativi != 5);
		}
		
		else{
			system("cls");
			cout << "Essa conta n�o existe.\n";
			system("pause");
		}
	}while(teste==1);
	
	
	
	
	return 0;
}
