/*8) Escreva uma função que receba um valor de venda de algum produto e retorne o novo valor com o
cálculo do ICMS (considere 18%).*/


#include <iostream>
using namespace std;

float valor;


	int main () {
		
		
		cout << "Digite o valor do produto: ";
		cin >> valor;
		cout << "\nO valor do ICMS e de R$" << valor * 0.18 << " totalizando R$" << valor * 1.18 << endl << endl;
		
		
	system ("pause");
	
	return 0;
}	