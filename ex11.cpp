/*11) Crie um procedimento que receba dois parâmetros inteiros por referência e troque seu conteúdo de
forma que o primeiro fique com o conteúdo do segundo e vice-versa.*/


#include <iostream>
using namespace std;

int valor1, valor2;


	int main () {
		
		cout << "Digite o primeiro valor: ";
		cin >> valor1;
		cout << "Digite o segundo valor: ";
		cin >> valor2;
		
		{
			int valor3 = valor1;
			valor1 = valor2;
			valor2 = valor3;
		}
		
		cout << "\nO primeiro valor agora vale " << valor1 << " e o segundo vale " << valor2 << endl << endl;
		
	
	system ("pause");
	
	return 0;
}	