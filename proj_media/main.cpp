#include <iostream>
#include<list>
#include <locale>

using namespace std;
int main() {
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2,num3,num4,media = 0, rep, alunos;
		cout << ("Qual � a quantidade de alunos?");
		cin >> alunos;
		for (int i = 0; i < alunos; i++){
			cout << ("Insira o ") << i +1 <<("� n�mero:");
			cin >> num1;
			media += num1; 
			rep = i; 
		}
		
		media /= rep + 1; 
		
		
		/*cout << ("Insira o primeiro n�mero:"); 
		cin >> num1;
		
		cout << ("Insira o segundo n�mero:"); 
		cin >> num2;
		
		cout << ("Insira o terceiro n�mero:"); 
		cin >> num3;
		
		cout << ("Insira o quarto n�mero:"); 
		cin >> num4;
		
		media = (num1 + num2 + num3 + num4)/4;*/
		cout << "A m�dia �:" << media; 
	
	
	
	return 0;
}
