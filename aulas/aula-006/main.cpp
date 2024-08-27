#include <iostream>

using namespace std;

int n1, n2; // variaveis globais

int main(){
	
	// Operadores Matematicos: + - / * % ()
	
	int n3, n4; // variaveis locais
	int res1, res2;
	
	n1 = 11;
	n2 = 3;
	n3 = 5;
	n4 = 2;
	
	res1 = n1 / n2;
	res2 = n1 % n2;
	
	cout << "Divisao: " << res1 << endl << "Resto da Divisao: "
	<< res2 << endl;
	
	return 0;
}
