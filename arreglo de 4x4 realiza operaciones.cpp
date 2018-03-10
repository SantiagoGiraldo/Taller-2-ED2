//Ejercicio 4X4 Arreglo con punteros 
#include <conio.h>
#include <stdio.h>

int main() 
	
{
	int a[4][4];
	int m,j,k;
	int *p_a = &a[0][0];
	
	
	
	for(k=0;k<=3;k++)
	{
		
		printf("ingresar los numeros: ");
		scanf("%d",&(*(p_a+k)));
		
	}
	int y=0;
	for(j=1;j<=(4*4);j+=4)
	{		
			*(p_a+j) = *(p_a+y) * *(p_a+y);
			*(p_a+j+1) =*(p_a+y) * *(p_a+y)* *(p_a+y);
			*(p_a+j+2) = *(p_a+y) * *(p_a+y)* *(p_a+y)* *(p_a+y);
			y+=4;
		
	}
	int l=0;
	for(m=0;m<(4*4);m++)
	{
		
		
		printf("mostrar datos ingresados %d",*(p_a+m) );
		printf("\n");
		printf("mostrar datos ingresados al cuadrado %d",*(p_a+m)+1 );
		printf("\n");
		printf("mostrar datos ingresados al cubo %d",*(p_a+m)+2 );
		printf("\n");
		printf("mostrar datos ingresados elevado a la cuarta %d",*(p_a+m)+3 );
		printf("\n");
		l+=4;
	}
	
	
	return 0;
}

