#include <iostream>
#include <LOCALE>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	float P = 0,E = 0,M = 0;
	
	cout << "Qual é o peso do peixe?\n";
	cin >> P;
	
	if (P > 50) {
		E = P - 50;
		M = E * 4;
		cout << "O peixe excede o peso estabelecido pelo regulamento em " << E << " quilos. Portanto a multa à ser paga será de " << M << " reais";
	}  
	
	else{
		cout << "Excesso = " << E << "\n" << "Multa = " << M;  
	}
	
	return 0;
}
