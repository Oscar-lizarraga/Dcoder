//Crear un progama que indique cuantas semanas puede durar un tanque de agua
//cuando no ha llovido ingresando el gasto de agua en 1 semana promedio
//no mostrar la ultima semana si no cumple con el promedio


#include <stdio.h>

int main(int argc, char const *argv[])
{
	int gallons = 10000;
    int n;
    do
    {
        scanf("%d",&n);
    } while (n < 0 || n > 10000);

    printf("%d\n", (int)(gallons/n));
    
  return 0;
}