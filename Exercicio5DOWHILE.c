/*Faça um algoritmo que leia um número N, some todos os números inteiros de 1 a
N, e mostre o resultado obtido.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int N, numero = 1, soma = 0;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Digite o valor de N:  ");
	scanf_s("%i", &N);

	do 
	{
		soma += numero;
		numero++;
	} while (numero <= N);
	
	printf("A soma dos números inteiros são:  %i\n", soma);

	system("pause");
}