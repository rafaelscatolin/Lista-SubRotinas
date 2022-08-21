/*13) Crie um procedimento que faça a multiplicação de um escalar qualquer em um vetor de inteiros.*/

#include <iostream>
#include <vector>
using namespace std;


int multiplicador, numero;
vector<int> vetor;


	int main () {
		
		cout << "Digite um valor para multiplicacao do vetor: ";
		cin >> multiplicador;
		
		cout << "\nDigite um numero para o vetor ou 0 para sair: ";
		
		
		while (1) {
			cin >> numero;
			if (numero == 0)
				break;
			else {
				numero = numero * multiplicador;
				vetor.push_back(numero);
				cout << "Digite o proximo numero ou 0 para sair: ";
			}
		}	
		
		cout << "\nO valor do vetor e ";
		
		for (int i = 0; i <= vetor.size(); i++){
			cout << vetor[i] << " ";
		}
		
		cout << endl << endl;
		
	system ("pause");
	
	return 0;
}	