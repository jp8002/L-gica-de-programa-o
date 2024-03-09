#include <iostream>

using namespace std;

int main() {
	int area, perimetro, largura, comprimento;
	cout << ("Informe a largura:");
	cin >> largura;
	
	cout << ("Informe o comprimento");
	cin >> comprimento;
	
	perimetro = 2* (largura + comprimento);
	area = largura * comprimento;
	
	cout << ("O perimetro e de: ") << perimetro << (". A area e de area: ") << area;
		 
	return 0;
}
