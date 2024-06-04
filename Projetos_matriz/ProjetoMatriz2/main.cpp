#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	int aluno[3][5], acima=0;
	float media;
	
	for (int i = 0; i < 3; i++){
		cout << "Informe o RA do aluno: ";
		cin >> aluno [i][0];
		
		for (int j = 1 ; j < 4; j++){
			cout << "Insira a nota do " << j << "º teste: ";
			cin >> aluno[i][j];	
			media += aluno[i][j];
		}
		
		system("cls");
		aluno[i][4] = media/3;
		
	}
	
	for (int i = 0; i < 3; i++){
			if (aluno[i][4] >= 5){
				acima ++;
			}
		}
		
		cout << acima << " alunos possuem média igual ou acima de 5";
	return 0;
}
