/*3) Crie uma função sem retorno que receba 3 parâmetros inteiros positivos, sendo os dois primeiros por
valor e o terceiro por referência. A variável referenciada deverá receber o maior valor dentre as duas
primeiras, sendo que receberá zero caso os valores sejam iguais, ou algum deles sejam negativos.*/

#include <iostream>
using namespace std;

int valor1, valor2, valor3;


int main () {
	
	cout << "Digite o primeiro valor: ";
	cin >> valor1;
	cout << "Digite o segundo valor: ";
	cin >> valor2;
	
	
	if (valor1 < 0 || valor2 < 0 || valor1 == valor2)
		cout << "O terceiro valor e 0" << endl << endl;
	else
		if (valor1 > valor2)
			cout << "O terceiro valor e " << valor1 << endl << endl;
		else
			cout << "O terceiro valor e " << valor2 << endl << endl;
		
	
	system ("pause");
	
	return 0;
}