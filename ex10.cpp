/*10) Escreva um procedimento que leia o índice de poluição e indique providências apropriadas.
Índice de poluição i < 0.30 Boa: Nenhuma providência
Índice de poluição 0.30 ≤ i < 0.40 Ruim: Suspender empresas da lista A
Índice de poluição 0.40 ≤ i ≤ 0.50 Péssima: Suspender empresas da lista A e B
Índice de poluição 0.50 < I Crítica: Suspender todas as empresas*/



#include <iostream>
using namespace std;

float indice;


	int main () {
		
		
	cout << "Digite o valor do indice de poluicao: ";
	cin >> indice;
	
	if (indice < 0.30)
		cout << "\nBoa: Nenhuma providência\n\n";
	else
		if (indice < 0.40)
			cout << "\nRuim: Suspender empresas da lista A\n\n";
		else
			if (indice < 0.50)
				cout << "\nPéssima: Suspender empresas da lista A e B\n\n";
			else
				cout << "\nCrítica: Suspender todas as empresas\n\n";
	
		
	system ("pause");
	
	return 0;
}