//Escribe un programa para jugar un variante de blackjack. En general, dados dos numeros, a y b,
//regresa su suma. Si la suma es mas grande que 21, regresa 0, a menos que uno de los numeros sea 11.
//en ese caso, el 11 debera convertirse a 1 para prevenir que la suma exceda. Por ejemplo, dado a = 11
// y b = 13 como ingreso, el 11 debera ser convertido a 1 y el total de la suma sera 14

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a;
	int b;

	do
	{
		scanf("%d %d",&a,&b);
	} while ( (a > 50 || a < 0) || (b > 50 || b < 0) );

	if (a == 11)
	{
		if (b == 11)
		{
			a = 1;
			b = 1;
			printf("%d\n", a+b );
		}
		else
		{
			a = 1;
			if (a + b > 21)
			{
				printf("0");
			}
			else
			{
				printf("%d\n",a+b);
			}
		}
	}
	else
	{
		if (b == 11)
		{
			b = 1;
			if (a + b > 21)
			{
				printf("0");
			}
			else
			{
				printf("%d\n",a+b);
			}
		}
		else
		{
			if (a + b > 21)
			{
				printf("0");
			}
			else
			{
				printf("%d\n",a+b);
			}
		}
	}
	return 0;
}