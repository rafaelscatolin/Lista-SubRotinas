/*5) Escreva um procedimento que exiba na tela a tabuada do número passado por parâmetro.*/

#include <iostream>
using namespace std;


float numero;


	int main () {
		
		
		cout << "Digite um numero para a tabuada: ";
		cin >> numero;
		cout << endl;
		
		
		for (int i = 0; i <= 10 ; i++){
			cout << i << " x " << numero << " = " << i * numero << endl;
		}
		
		cout << endl;
			
		
	system ("pause");
	
	return 0;
}		