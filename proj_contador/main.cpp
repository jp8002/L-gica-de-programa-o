#include <iostream>
#include <LOCALE>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	setlocale(LC_ALL,"Portuguese");
	int nu = 0, max = 0;
	
	cout << "Qual é o número que você que saber a tabuada?\n";
	cin >> nu;
	
	cout << "A tabuada deve ir até que número?\n";
	cin >> max;
	
	for (int i = 0; i <= max; i++){
		cout << i <<((i < 10) ? "  X  " : " X  " )<< nu << " = " << i * nu << "\n";
	}
	return 0;
}
