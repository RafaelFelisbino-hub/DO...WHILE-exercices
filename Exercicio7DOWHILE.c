/*Imprima uma tabela de convers�o de polegadas para cent�metros, de 1 a 20.
Considere que Polegada = Cent�metro * 2,54.*/

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

		printf("O resultado � %.2f centimetros\n", polegadas);
		printf("Digite o valor da polegada que queira converter para centimetros:  ");
		scanf_s("%f", &polegadas);
		
		i++;
	} while (i <= 19);

	system("pause");
}