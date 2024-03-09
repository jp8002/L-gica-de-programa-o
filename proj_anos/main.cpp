#include <iostream>
#include <LOCALE>
using namespace std;
int main() {
	setlocale(LC_ALL,"Portuguese");
	int dias, meses, anos, idade;
	
	cout << "Qual a sua idade em anos, meses e dias?\n";
	cout << "Anos:";
	cin >> anos;
	
	cout << "Meses:";
	cin >> meses;
	
	cout << "Dias:";
	cin >> dias;
	
	idade = (anos * 365) + (meses * 30) + dias;
	
	cout << ("Sua idade em dias é ") << idade;

	
	return 0;
}
