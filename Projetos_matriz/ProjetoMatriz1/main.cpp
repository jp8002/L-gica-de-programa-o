#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	string funcionarios[5][2];
	for(int i = 0; i < 5; i++){
		
		cout << "Informe o c�digo do funcionario: ";
		getline(cin, funcionarios[i][0]);
		
		cout <<	"Informe o nome do funcionario: ";
		getline(cin, funcionarios[i][1]);
		
	}
	
	for(int i = 0; i < 5; i++){
		
		cout << "C�digo do funcionario "<< i + 1<<": " << funcionarios[i][0] << "\n";
		
		cout <<	"Nome do funcionario " << i + 1<<": " << funcionarios[i][1] << "\n";
		cout << "-------------------------------------------\n";
		
	}
	
	return 0;
}
