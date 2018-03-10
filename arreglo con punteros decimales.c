//Ejercicio:Arreglo con punteros decimales 
#include <stdio.h>
#include <conio.h>

int main() 
	
{
	float a[]={32.583,11.239,45.781,22.237};
	float *b;
	b = a;
	int i;
	
	for(i=0;i<4;i++)
	{
		printf("el valor del arreglo a es: %.3f",*(a+i) );
		printf("\n");
		
	}
	
	
	
	
	return 0;
}

