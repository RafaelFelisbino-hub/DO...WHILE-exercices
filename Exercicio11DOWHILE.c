#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float fahrenheit = 50, celsius;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	do 
	{
		celsius = (fahrenheit - 32) * 5 / 9;
		
		printf("%.2f Fahrenheit é %.2f Graus celsius\n", fahrenheit,celsius);
		printf("=======================================\n");

		fahrenheit++;
	} while (fahrenheit <= 150);

	system("pause");
}