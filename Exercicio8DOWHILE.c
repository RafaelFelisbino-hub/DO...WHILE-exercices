/*Dado um limite inferior e superior, calcule a soma de todos os números pares
contidos nesse intervalo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int inicioIntervalo, fimIntervalo, soma = 0, numeroPar = 0;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Digite o valor do inicio do intervalo:  ");
	scanf_s("%i", &inicioIntervalo);

	printf("Digite o valor do fim do intervalo:  ");
	scanf_s("%i", &fimIntervalo);

	do 
	{
		if (inicioIntervalo % 2 == 0) 
		{
			soma += inicioIntervalo;
		}
		inicioIntervalo++;
	} while (inicioIntervalo <= fimIntervalo);

	printf("A soma dos números pares do intervalo é:  %i", soma);
}