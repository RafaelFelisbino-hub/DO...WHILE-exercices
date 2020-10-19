/*Imprima uma tabela de conversão de polegadas para centímetros, de 1 a 20.
Considere que Polegada = Centímetro * 2,54.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	float polegadas,i = 0;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Digite o valor da polegada que queira converter para centimetros:  ");
	scanf_s("%f", &polegadas);

	do 
	{
		polegadas = polegadas * 2.54;

		printf("O resultado é %.2f centimetros\n", polegadas);
		printf("Digite o valor da polegada que queira converter para centimetros:  ");
		scanf_s("%f", &polegadas);
		
		i++;
	} while (i <= 19);

	system("pause");
}