/*Construa um algoritmo que verifique se um n�mero fornecido pelo usu�rio �
primo ou n�o.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int n, i = 0, divisoesExatas = 0;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");
	
	printf("Digite o valor de N:  ");
	scanf_s("%i", &n);
	
	do 
	{
		i++;
		if (n % i == 0) 
		{
			divisoesExatas++;
		}
	} while (i <= n);

	if (divisoesExatas == 2)
	{
		printf("%i � n�mero � primo\n\n", n);
	}
	else
	{
		printf("%i N�o � primo\n\n", n);
	}
	system("pause");
}