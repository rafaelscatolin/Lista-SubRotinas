/*15) Crie um função que receba como parâmetro um vetor de inteiros de tamanho qualquer e retorne um
valor verdade caso mais de 50% do vetor contenha numeros pares.*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> vetor_par, vetor_impar;
int numero;


	int main () {
		
		cout << "Digite um numero para o vetor ou 0 para sair: ";
		
		while (1) {
			cin >> numero;
			
			if (numero == 0)
				break;
			else 
				if (numero%2 == 0)
					vetor_par.push_back(numero);
				else
					vetor_impar.push_back(numero);
					
			cout << "Digite o proximo numero para o vetor ou 0 para sair: ";
		}
		
		if (vetor_par.size() > vetor_impar.size())
			cout << "\nA maioria dos valores sao par\n\n";
		else
			if (vetor_par.size() < vetor_impar.size())
				cout << "\nA maioria dos valores sao impar\n\n";
			else
				cout << "\n50% dos valores sao par e 50% sao impar\n\n";
		
		system ("pause");
	
	return 0;
}	