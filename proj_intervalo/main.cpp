#include <iostream>
#include <LOCALE>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	setlocale(LC_ALL,"Portuguese");
	int ini =0, final =0, soma =0;
	
	cout << "Qual é o número inicial?\n";
	cin >> ini;
	
	cout << "Qual é o número final?\n";
	cin >> final;
	cout << "\n";
	
	for (ini; ini <=final; ini++){
		cout << ini << " ";
		soma += ini;
	}
	cout << "\n A soma de todos os números presentes no intervalo é " << soma;
	return 0;
}
