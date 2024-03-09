#include <iostream>
#include <LOCALE>
using namespace std;
int main() {
	setlocale(LC_ALL,"Portuguese");
	
	float celsius, fahreinheit;
	
	cout << "Informe a temperatura:";
	cin >> celsius;
	
	fahreinheit = (celsius * 1.8) + 32;
	
	cout << "a temperatura em fahreinheit é:" << fahreinheit;
	
	return 0;
}
