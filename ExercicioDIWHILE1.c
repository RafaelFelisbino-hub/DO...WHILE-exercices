#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int numero1, numero2;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	inicio:
	printf("Digite o valor do primeiro número:  ");
	scanf_s("%i", &numero1);

	printf("Digite o valor do segundo número:  ");
	scanf_s("%i", &numero2);

	if (numero1 > numero2) 
	{
		printf("O primeiro valor deve ser menor que o segundo.\n\n");
		goto inicio;
	}
	
	do 
	{
		printf("%i\n", numero1);
		numero1++;
	
	} while (numero1 <= numero2);
}