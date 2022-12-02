#include  <stdio.h>
#include  <string.h>

//Compiler version gcc  6.3.0

int main()
{
    int t = 0;
    do{
        scanf("%d",&t);
    }while(t < 1 || t > 100);
    
    char nf[2][t][100];
    for(int i = 0; i < t; i++)
    {
        scanf("%s %s",nf[0][i],nf[1][i]);
    }
    for(int i = 0; i < t; i++)
    {
        if(strstr(nf[0][i], nf[1][i]) != NULL)
        {
            printf("Yes");            
        }
        else
        {
            printf("NO");
        }
        printf("\n");
    }
    
    return 0;
}