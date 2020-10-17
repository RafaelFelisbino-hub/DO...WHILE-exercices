/*Fazer um algoritmo que calcule e exiba na tela o fatorial de um número fornecido
pelo usuário, usando o comando “repita”. Perguntar ao usuário se ele deseja
calcular o fatorial de outro número e repetir a execução do algoritmo tantas vezes
quantas o usuário indicar.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int fatorial = 1, numero;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Forneça um número para calcular o fatorial:  ");
	scanf_s("%i", &numero);

	do
	{
			fatorial = fatorial * numero;
			numero--;

			printf("O fatorial é %d\n", fatorial);
			
			if (numero == 1)
			{
				printf("Forneça um número para calcular o fatorial, digite 0 para fechar o programa:  \n");
				scanf_s("%i", &numero);
				fatorial = 1;
			}
	} while (numero > 1);
}

