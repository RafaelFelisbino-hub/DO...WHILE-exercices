/*Construa um algoritmo que verifique se um número fornecido pelo usuário é
primo ou não.*/

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
		printf("%i É número é primo\n\n", n);
	}
	else
	{
		printf("%i Não é primo\n\n", n);
	}
	system("pause");
}