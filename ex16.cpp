/*16) Escreva um procedimento que receba dois vetores de tamanhos iguais A e B e que no final do
procedimento o conteúdo dos vetroes estejam trocados.*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> vetor_a, vetor_b;
int numero;

	int main () {
		
		cout << "Digite um numero para o vetor A ou 0 para sair: ";
		
		while (1) {
			cin >> numero;
			if (numero == 0)
				break;
			else {
				vetor_a.push_back(numero);
				cout << "Digite o proximo numero para o vetor A ou 0 para sair: ";
			}
		}	
		
		cout << "\nO vetor A possui " << vetor_a.size() << " valores\n\n";
		
		for (int i = 1; i <= vetor_a.size(); i++){
			cout << "Digite o " << i << " valor para o vetor B: ";
			cin >> numero;
			vetor_b.push_back(numero);
		}
		
		cout << "\nO valor inicial do vetor A e ";
		for (int i = 0; i < vetor_a.size(); i++){
			cout << vetor_a[i] << " ";
		}
		
		cout << "\nO valor inicial do vetor B e ";
		for (int i = 0; i < vetor_b.size(); i++){
			cout << vetor_b[i] << " ";
		}
		
		cout << endl;
		
		{
			vector<int> vetor_c = vetor_a;
			vetor_a = vetor_b;
			vetor_b = vetor_c;
		}
		
		cout << "\nO valor final do vetor A e ";
		for (int i = 0; i < vetor_a.size(); i++){
			cout << vetor_a[i] << " ";
		}
		
		cout << "\nO valor final do vetor B e ";
		for (int i = 0; i < vetor_b.size(); i++){
			cout << vetor_b[i] << " ";
		}	
		
		cout << endl << endl;
		
	system ("pause");
	
	return 0;
}	