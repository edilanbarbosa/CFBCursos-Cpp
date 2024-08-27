#include <iostream>

using namespace std;

int main() {
	
	// TIPO NOME;
	// TIPO NOME = VALOR;
	
	int vidas = 0; // 10, 25, 50
	char letra = 'E'; // 'E'
	double decimal = 5.2; // 2,49999999
	float decimal2 = 5.2; // 2.5
	bool vivo = true; // true, false
	string nome = "Edilan"; // "Edilan"
	
	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Digite a quantidade de dinheiro: ";
	cin >> decimal;
	cout << "Digite seu nome: ";
	cin >> nome;
	
	/* vidas = 100; */
	
	cout << endl << "vidas: " << vidas << "\nLetra: " << letra << endl << "Dinheiro: " 
	<< decimal << "\nVivo: " << vivo << "\nNome: " << nome << "\n";
	
	return 0;
}
