#include <stdio.h>

int main(int argc, char const *argv[])
{
	char a[] = {'a','b','c','d','e','f','g',
				'h','i','j','k','l','m','n',
				'o','p','q','r','s','t','u',
				'v','w','x','y','z'};

	int n;
	scanf("%d",&n);
	for (int i = n-1; i >= 0; i--)
	{
		printf("%c",a[i]);
	}

	return 0;
}