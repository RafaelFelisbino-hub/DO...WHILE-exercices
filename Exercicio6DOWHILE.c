/*Escreva um algoritmo que leia um conjunto de 20 números inteiros e mostre qual
foi o maior e o menor valor fornecido.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int numero = 0, maior = 0, menor = 9999999999999, i = 0;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	do 
	{
		printf("Digite os valores:  ");
		scanf_s("%i", &numero);

		if (numero > maior) 
		{
			maior = numero;
		}
			
		if (numero < menor) 
		{
			menor = numero;
		}
			
		i++;
	} while (i <= 19);

	printf("O valor do maior é %i e o menor é %i\n", maior, menor);

	system("pause");
}