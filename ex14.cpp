/*14) Crie um procedimento que receba 3 vetores A, B e C,sendo A e B de tamanhos iguais e C a soma dos
tamanhos de A e B.O procedimento deve armazenar o conteúdo de A na primeira metade de C e o
conteúdo de B, na segunda metade de C. Imprima os 3 vetores.*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> vetor_a, vetor_b, vetor_c;
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
		
		vetor_c = vetor_a;
		
		cout << "\n\nO vetor A possui " << vetor_a.size() << " valores\n\n";
		
		for (int i = 1; i <= vetor_a.size(); i++){
			cout << "Digite o " << i << " valor para o vetor B: ";
			cin >> numero;
			vetor_b.push_back(numero);
			vetor_c.push_back(numero);
		}
		
		cout << "\nO valor do vetor A e ";
		for (int i = 0; i < vetor_a.size(); i++){
			cout << vetor_a[i] << " ";
		}
		
		cout << "\nO valor do vetor B e ";
		for (int i = 0; i < vetor_b.size(); i++){
			cout << vetor_b[i] << " ";
		}
	
		cout << "\nO valor do vetor C e ";
		for (int i = 0; i < vetor_c.size(); i++){
			cout << vetor_c[i] << " ";
		}
		
		cout << endl << endl;
		
	system ("pause");
	
	return 0;
}	