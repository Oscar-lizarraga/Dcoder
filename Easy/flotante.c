#include  <stdio.h>

//Bob has a floating point number N. 
//He wants to set the precision for 2 digits after the decimal point for the number.
//He is not good at coding, hence looking for your help.
//Compiler version gcc  6.3.0

int main()
{
    int t;
    do
    {
        scanf("%d",&t);
    } while (t < 1 || t > 1000);
    
    float n[1000];
    for (int i = 0; i < t; i++)
    {
        scanf("%f",&n[i]);
    }
    for(int i = 0; i < t; i++)
    {
        printf("%.2f"\n,n[i]);
    }
  return 0;
}