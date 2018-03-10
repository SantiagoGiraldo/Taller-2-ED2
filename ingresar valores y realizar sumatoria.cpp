//Ejercicio Ingresar valores y realizar sumatoria 
#include <stdio.h>
#include <conio.h>

int main() 
{
	int a[3][3];
	int i,m,j,k,cont=0;
	int *p_a = &a[0][0];
	int *p_cont = &cont;
	
     for(j=0;j<=2;j++)
	{ 
		for(k=0;k<=2;k++)
		{
			
			printf("ingresar los numeros: ");
			scanf("%d",&(*(p_a+k+j*3)));
			//fflush(stdin);
			
		}
	}
	int sum=1;
	for(i=0;i<=2;i++)
	{ 
		for(m=0;m<=2;m++)
		{
			//*p_cont = *(p_a+m+i*2) + *p_cont;
			printf("conteo de posiciones: %d    %d \n",sum,*(p_a+m+i*3));
			sum+=*(p_a+m+i*3);
			
		}
	}
	
	
	return 0;
}

