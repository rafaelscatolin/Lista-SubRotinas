/*4) Escreva uma função que receba um número inteiro positivo e retorne o somatório dos números entre 0 e
o número passado. Exemplo: Caso o parametro seja 3, o resultado deverá ser a soma de 0 + 1+ 2 +3 = 6.*/

#include <iostream>
using namespace std;


int numero;
int resultado = 0;


	int main () {
	
	cout << "Digite um numero: ";
	cin >> numero;
	cout << endl;
	
	for (int i = numero; i >= 1; i--){
		cout << i << "+";
		resultado = resultado + i;
	}

	cout << "0 = ";
	
	cout << resultado << endl << endl;
	
	system ("pause");
	
	return 0;
}