/*Imprimir los numero de un intervalo*/

//se sabe que no existe una funcion polinomica que evalue numeros primos 
//para todos los enteros n
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int contador = 0;
	int n;
	int m;

	do
	{
		scanf("%d %d",&m ,&n);
	} while (m > n || m <= 0 || n > 1000000000);

	for (int i = m; i <= n; i++)
	{
		for (int j = 1; j < i ; j++)
		{
			if (i % j == 0 && j != 1)
			{
				break;
			}
			if (j == (i-1))
			{
				printf("%d\n",i);
			}
		}
	}
	return 0;
}