/*12) Crie um procedimento que imprima o conteúdo de um vetor de inteiros de qualquer tamanho.*/

#include <iostream>
#include <vector>
using namespace std;

int numero;
vector<int> vetor;


	int main () {
		
		cout << "Digite um numero para o vetor ou 0 para sair: ";
		
		while (1) {
			cin >> numero;
			if (numero == 0)
				break;
			else {
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