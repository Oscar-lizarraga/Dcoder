#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	fflush(stdin);
	char c[n+1];
	fgets(c,sizeof(c),stdin);
	for (int i = 0; i < n; i++)
	{
		int j = 0;
		while((j++) < 3) {printf("%c",c[i]);}
	}
	return 0;
}