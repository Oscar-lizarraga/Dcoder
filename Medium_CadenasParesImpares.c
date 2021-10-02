#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    int t;
    do
    {
        scanf("%i", &t);
    } while (t < 0 || t > 1000);

    int a;
    a = (int)((t - 32) * (5 / 9));

    printf("%i", a);
    return 0;
}