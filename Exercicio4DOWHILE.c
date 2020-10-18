/*Faça um algoritmo que imprima todos os números inteiros de 1 a N (fornecido
pelo usuário). Mostre quantos são divisíveis por 8 e tem resto 3*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int numero = 1, divisor = 0, N;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Digite o valor de N:  ");
	scanf_s("%i", &N);

	do
	{
		printf("%i\n", numero);

		if (numero % 8 == 3)
		{
			divisor++;
		}
		numero++;
	} while (numero <= N);

	printf("\nA quantidade de números que dividem por 8 e tem o resto 3 são:  %i\n", divisor);

	system("pause");
}