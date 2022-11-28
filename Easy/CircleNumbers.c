#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,x;
	do
	{
		scanf("%d %d",&n,&x);
		/* code */
	} while ((n < 4 || n >20) || (x < 0 || x >= n));

	//Primero calculamos la mitad del arreglo
	printf("%d\n", (n/2 + x) % n);
	return 0;
}