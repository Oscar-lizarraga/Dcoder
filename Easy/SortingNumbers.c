#include <stdio.h>

int main(int argc, char const *argv[])
{
	int m,n,p;
	do
	{
		scanf("%d %d %d",&m,&n,&p);
	} while ( (m > 500 || m < 0) || (p > 500 || p < 0) || (n > 500 || n < 0) );

	if (m < n)
	{
		if (n < p)
		{
			printf("%d %d %d", m, n, p);
		}
		else
		{
			if (m < p)
			{
				printf("%d %d %d", m, p, n);
			}
			else
			{
				printf("%d %d %d", p, m, n);
			}
		}
	}
	else
	{
		if (n < p)
		{
			if (m < p)
			{
				printf("%d %d %d", n, m, p);
			}
			else
			{
				printf("%d %d %d", n, p, m);
			}
		}
		else
		{
			if (p < m)
			{
				printf("%d %d %d", p, n, m);
			}
		}
	}


}