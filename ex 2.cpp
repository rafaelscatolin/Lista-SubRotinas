/*2) Crie uma função que receba dois valores referentes ao preço de uma mercadoria e a porcentagem para o
desconto. Retorne o novo preço com o desconto calculado.*/

#include <iostream>
using namespace std;


float preco, desconto;



	int main () {
		
	cout << "Digite o preco da mercadoria: ";
	cin >> preco;
	
	cout << "Digite a porcentagem do desconto: ";
	cin >> desconto;
	
	cout << "\n\nO valor final da mercadoria e de R$" << preco - preco * (desconto / 100) << endl << endl;
	
	
	system ("pause");
	
	return 0;
}