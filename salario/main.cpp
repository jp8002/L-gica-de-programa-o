#include <iostream> // Inclui uma vari�vel

using namespace std;

/*
	cout << ""; mostra dados/mensagens na tela.
	cin >> vari�vel; Faz a leitura dos dados pelo teclado e os armazena na vari�vel
*/
int main() {//inicio do bloco principal
	string nome;
	int idade;
	float salario, desconto, salario_liquido;
	
	// Lendo os dados
	cout << "Informe o nome:";
	cin >> nome;
	
	cout << "Informe o sal�rio bruto:";
	cin >> salario;
	
	cout << "Informe os descontos:";
	cin >> desconto;
	
	// Calculando o Salario L�quido
	
	salario_liquido = salario - desconto;
	
	// mostrar o resultado
	cout << "Sal�rio Liquido: " << salario_liquido; // concatena��o
	return 0;
}//final do bloco principal
