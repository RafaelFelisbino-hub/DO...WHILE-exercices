#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int numero = 0, numeroPar = 0;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	do 
	{
		numero++;
	
		while(numero % 2 == 0)
		{
			printf("Os numeros pares s�o:  %i\n", numero);
			numero++;
		}					

	} while (numero >= 0 && numero <= 50);
}