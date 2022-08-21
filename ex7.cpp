/*7) Escreva uma função que receba um valor de um produto e retorne o valor com cálculo do desconto
seguindo as seguintes regras: a) valor entre 0 e 1000,00 5%; b) valor entre 1000,01 e 2000,00, 10%; c)
acima de 2000,00, 15%.*/




#include <iostream>
using namespace std;

float valor;


	int main () {
		
		
		
		cout << "Digite o valor do produto: ";
		cin >> valor;
		
		if (valor <= 1000)
			cout << "\nO valor do desconto e R$" << valor * 0.05 << " totalizando R$" << valor - valor * 0.05 << endl << endl;
		else
			if (valor <= 2000)
				cout << "\nO valor do desconto e R$" << valor * 0.1 << " totalizando R$" << valor - valor * 0.1 << endl << endl;
			else
				cout << "\nO valor do desconto e R$" << valor * 0.15 << " totalizando R$" << valor - valor * 0.15 << endl << endl;
		
		
	system ("pause");
	
	return 0;
}	