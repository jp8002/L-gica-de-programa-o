#include <iostream>
#include <LOCALE>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	setlocale(LC_ALL,"Portuguese");
	int ini =0, final =0, soma =0;
	
	cout << "Qual � o n�mero inicial?\n";
	cin >> ini;
	
	cout << "Qual � o n�mero final?\n";
	cin >> final;
	cout << "\n";
	
	for (ini; ini <=final; ini++){
		cout << ini << " ";
		soma += ini;
	}
	cout << "\n A soma de todos os n�meros presentes no intervalo � " << soma;
	return 0;
}
