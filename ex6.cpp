/*6) Escreva uma função que receba 4 notas e retorne um valor verdade, de forma que identifique se o aluno
está aprovado ou não. Considere a média de corte 7,0.*/

#include <iostream>
using namespace std;

float nota1, nota2, nota3, nota4;





	int main () {
		
		
		cout << "Digite a nota da prova 1: ";
		cin >> nota1;
		
		cout << "Digite a nota da prova 2: ";
		cin >> nota2;
		
		cout << "Digite a nota da prova 3: ";
		cin >> nota3;
		
		cout << "Digite a nota da prova 4: ";
		cin >> nota4;
		
		if (nota1 + nota2 + nota3 + nota4 >= 28)
			cout << "\nO aluno foi aprovado!!\n\n";
		else
			cout << "\nO aluno foi reprovado.\n\n";
		
		system ("pause");
	
	return 0;
}	