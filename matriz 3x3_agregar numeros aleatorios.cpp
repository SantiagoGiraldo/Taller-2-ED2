//Arreglo con matrices añadir numeros aleatorios
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int a[3][3];
	int i,m,j,k;
	int *p_a = &a[0][0];
	
	srand(time(NULL));
	
	//for(j=0;j<=2;j++)
	//{ 
		for(k=0;k<=(3*3)-1;k++)
		{
			*(p_a+k) = 1+rand()%100;
			
		}
//	}
	
	//for(i=0;i<=2;i++)
	//{ 
		for(m=0;m<=(3*3)-1;m++)
		{
			printf("%d\n",*(p_a+m));
		}
	//}
	
	
	return 0;
}
