#include <iostream>
#include <LOCALE>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	setlocale(LC_ALL,"Portuguese");
	int escolha, acertos=0, erros=0;
	
	cout << "Quando come�ou a Segunda Guerra Mundial? \n 1. 1954 \n 2. 1899 \n 3. 1939 \n 4. 1938\n ";
	cin >> escolha;
	if (escolha == 3){
		cout << "Parab�ns voc� acertou\n";
		acertos += 1;
	}
	
	if (escolha != 3){
		cout << "Infelizmente, voc� errou\n";
		erros += 1;
	}
	
	cout << "Qual era o l�der da Inglaterra durante a Segunda Guerra Mundial? \n 1. Franklin D. Roosevelt \n 2. Winston Churchill \n 3. Josef Stalin \n 4. Adolf Hitler\n ";
	cin >> escolha;
	if (escolha == 2){
		cout << "Parab�ns voc� acertou\n";
		acertos += 1;
	}
	
	if (escolha != 2){
		cout << "Infelizmente, voc� errou\n";
		erros += 1;
	}
	
	cout << "Qual foi o nome da opera��o realizada pela Alemanha nazista com o objetivo de invadir a R�ssia?\n 1. Maio vermelho \n 2. Barbarossa \n 3. Marcha de inverno \n 4. Unternehmen\n ";
	cin >> escolha;
	if (escolha == 2){
		cout << "Parab�ns voc� acertou\n";
		acertos += 1;
	}
	
	if (escolha != 2){
		cout << "Infelizmente, voc� errou\n";
		erros += 1;
	}
	
	cout << "Qual era o nome da t�tica de guerra usada pela Alemanha nazista que os possibilitou dominar vastas �reas de territ�rio  extremamnte r�pido?\n 1. Guerra rel�mpago\n 2. T�tica conjunta\n 3. Marcha continua\n 4. Avan�o rel�mpago ";
	cin >> escolha;
	if (escolha == 1){
		cout << "Parab�ns voc� acertou\n";
		acertos += 1;
	}
	
	if (escolha != 1){
		cout << "Infelizmente, voc� errou\n";
		erros += 1;
	}
	
	cout << "Voc� acertou " << acertos << " quest�es e errou " << erros; 
	return 0;
}
