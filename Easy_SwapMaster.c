#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	do
	{
		scanf("%d",&n);
	} while (n < 2 || n > 100);

	int A[n];
	for (int i = 0; i < n; i++)
	{
		do
		{
			scanf("%d",&A[i]);
		} while (A[i] < 1 || A[i] > 1000);
	}
	for (int i = (n-1); i > -1; i--)
	{
		printf("\n%d",A[i]);
	}
	return 0;
}