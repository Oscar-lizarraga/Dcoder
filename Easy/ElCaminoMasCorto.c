//se debe encontrar el camino mas corto entre un punto A y el (0,0) y el B


#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{

	int truckAx;
	int truckAy;
	int truckBx; 
	int truckBy; 

	do{
		scanf("%d %d %d %d",&truckAx,&truckAy,&truckBx,&truckBy);
	}while(truckAx < -20 || truckAx > 20 || truckAy < -20 || truckAy > 20 || truckBx < -20 || truckBx > 20 || truckBy < -20 || truckBy > 20);

	//camino mas corto se calcula mendiante el modulo del punto inicial al punto final
	float moduloA = sqrt( pow(truckAx - 0,2) + pow(truckAy - 0,2));
	float moduloB = sqrt( pow(truckBx - 0,2) + pow(truckBy - 0,2));

	if(moduloA < moduloB)
	{
		printf("A");
	}
	else
	{
		printf("B");
	}

	/* code */
	return 0;
}