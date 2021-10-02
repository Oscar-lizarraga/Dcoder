#include  <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int t;
    do{
        scanf("%d",&t);
    }while(t < 1 || t > 100);
    
    int year[t];
    for(int i = 0; i < t; i++)
    {
        do{
        scanf("%d",&year[i]);
        }while(year[i] < 1000 || year[i] > 100000);
    }
    
    for(int i = 0; i < t; i++)
    {
        if(year[i] % 4 == 0)
        {
            if(year[i] % 100 == 0)
            {
                if(year[i] % 400 == 0)
                {
                    printf("Yes\n");            
                }                
                else{
                     printf("No\n");           
                }
            }
            else{
                printf("Yes\n");
            }
        }
        else{
            printf("No\n");
        }
    }
    
    return 0;
}