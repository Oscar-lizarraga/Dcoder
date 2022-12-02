#include  <stdio.h>

//Compiler version gcc  6.3.0

int main()
{

    int t;
    int n[100];

    do
    {
        scanf("%i", &t);
    } while (t < 1 || t > 100);

    for (int i = 0; i < t; i++)
    {
        scanf("%i", &n[i]);
    }

    for (int i = 0; i < t; i++)
    {
        int a;
        a = n[i];
        
        printf("%i\n", (a * (a + 1) * (2 * a + 1)) / 6);
    }

    return 0;
}