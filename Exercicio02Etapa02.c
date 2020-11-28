/*Criar um algoritmo para um caixa eletrônico.
O usuário entrará com o valor a ser retirado da conta e o programa mostrará quantas notas de 2, 5, 10, 20, 50 e 100 reais serão liberadas.
Lembre-se que não temos moedas, então só podem ser aceitos valores inteiros acima e múltiplos de 2. Considerar o menor número de cédulas possível.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nota2 = 0, nota5 = 0, nota10 = 0, nota20 = 0, nota50 = 0, nota100 = 0, saque = 0, resposta = 0;

	do {

		printf("=============================\n");
		printf("NOTAS DISPONIVEIS PARA SAQUE\n");
		printf("2, 5, 10, 20, 50, 100\n");
		printf("=============================\n");

		printf("Digite o valor para o saque:  ");
		scanf_s("%i", &saque);

		while (saque == 1 || saque == 3) 
		{
			printf("Nao ha notas para este saque. Digite novamente:  ");
			scanf_s("%i", &saque);
		}

		if (saque % 2 == 1) 
		{
			saque = saque - 5;
			nota5++;
		}

		while (saque >= 100)
		{
			nota100++;
			saque -= 100;
		}
		while (saque >= 50)
		{
			nota50++;
			saque -= 50;
		}
		while (saque >= 20)
		{
			nota20++;
			saque -= 20;
		}
		while (saque >= 10)
		{
			nota10++;
			saque -= 10;
		}
		while (saque >= 2)
		{
			nota2++;
			saque -= 2;
		}
		
		printf("Sera sacado %i notas de 2,  %i notas de 5,  %i notas de 10,  %i notas de 20,  %i notas de 50,  %i notas de 100, \n\n\n", nota2, nota5, nota10, nota20, nota50, nota100);
		printf("Gostaria de realizar outro saque? (1) para sim ou (2) para nao:  ");
		scanf_s("%i", &resposta);

		system("cls");

		nota2 = 0;
		nota5 = 0;
		nota10 = 0;
		nota20 = 0;
		nota50 = 0;
		nota100 = 0;

	} while (resposta != 2);

	system("pause");
}