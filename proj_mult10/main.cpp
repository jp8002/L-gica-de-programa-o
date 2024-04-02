#include <iostream>
#include <LOCALE>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	setlocale(LC_ALL,"Portuguese");
	for(int i =1; i <= 100; i++){
		cout << i;
		if ( (i % 10) == 0){
			cout << " múltiplo de 10";
		}
		
		cout << "\n";
	}
	
	return 0;
}
