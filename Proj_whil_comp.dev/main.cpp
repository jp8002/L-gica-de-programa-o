#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	char r ='S';
	
	while (r=='S'){
		cout << "Boa noite! Estamos aprendendo while \n";
		
		cout << "Deseja continuar (S/N)\n";
		cin >> r;
	}
	return 0;
}
