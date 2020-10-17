/*Faça um algoritmo que leia dois números, o primeiro é o valor inicial de um
contador, e o segundo é o valor final do contador (verifique se o valor inicial
fornecido é inferior ao valor final). Usando a estrutura de repetição “repita”
, escreva na tela uma contagem que comece no primeiro número lido,
escreva os números seguintes colocando apenas um número em cada nova*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int numero1 = 1, numero2 = 0;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	while (numero1 > numero2) 
	{
		printf("O valor do primeiro numero deve ser menor que o do segundo.\n");

		printf("Digite o valor do primeiro número:  ");
		scanf_s("%i", &numero1);

		printf("Digite o valor do segundo número:  ");
		scanf_s("%i", &numero2);
	}
	
	do 
	{
		printf("%i\n", numero1);
		numero1++;
	
	} while (numero1 <= numero2);
}
