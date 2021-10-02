#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int n;
	int k;
	do
	{
		scanf("%d %d",&n,&k);
	} while (n < 1 || k > 100000);
	
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		int posicion = (i + k) % n ; //obtendremos el modulo
		scanf("%d",&arr[posicion]);
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}