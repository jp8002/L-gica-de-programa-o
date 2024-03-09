#include <iostream> // Inclui uma variável

using namespace std;

/*
	cout << ""; mostra dados/mensagens na tela.
	cin >> variável; Faz a leitura dos dados pelo teclado e os armazena na variável
*/
int main() {//inicio do bloco principal
	string nome;
	int idade;
	float salario, desconto, salario_liquido;
	
	// Lendo os dados
	cout << "Informe o nome:";
	cin >> nome;
	
	cout << "Informe o salário bruto:";
	cin >> salario;
	
	cout << "Informe os descontos:";
	cin >> desconto;
	
	// Calculando o Salario Líquido
	
	salario_liquido = salario - desconto;
	
	// mostrar o resultado
	cout << "Salário Liquido: " << salario_liquido; // concatenação
	return 0;
}//final do bloco principal
