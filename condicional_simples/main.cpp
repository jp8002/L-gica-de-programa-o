#include <iostream>
#include <LOCALE>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	cout << "Informe a sua idade \n";
	cin >> idade;
	
	if(idade >= 16){
		cout << "Voce pode votar";
	}
	if(idade < 16){
		cout << "Voce não pode votar";
	}
	return 0;
}
