/*1) Crie uma função que receba como parâmetero um número inteiro e retorne 1 caso o mesmo seja par, e 0
caso contrário.*/



#include <iostream>
using namespace std;

int numero;


	int main () {
	
	
	 
	cout << "digite um numero inteiro: ";
	cin >> numero;
	
	if (numero%2 == 0)
		cout << "1" << endl << endl;
	else
		cout << "0" << endl << endl;
	
	
	system ("pause");
	
	return 0;
}
