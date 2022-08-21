/*9) Crie um procedimento que receba 3 parâmetros de ponto flutante positivos, sendo os dois primeiros por
valor e o terceiro por referência. A primeira variável se refere ao salario atual, a segunda a porcentagem
de reajuste e por fim a terceira receberá o novo valor reajustado.*/



#include <iostream>
using namespace std;

float valor, reajuste, valor_reajustado;


	int main () {
		
			
		cout << "Digite o valor do salario atual: ";
		cin >> valor;
		cout << "Digite a porcentagem de reajuste :";
		cin >> reajuste;
		
		valor_reajustado = valor * (1 + reajuste / 100);
		
		cout << "\nO valor reajustado e R$" << valor_reajustado << endl << endl;
		
		
	system ("pause");
	
	return 0;
}	