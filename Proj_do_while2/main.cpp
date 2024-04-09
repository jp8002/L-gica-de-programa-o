#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i = 0;
	do{
		cout << "Digite um número entre 1 e 10";
		cin >> i;
	}while (i >10 || i <= 0);
	
	return 0;
}
