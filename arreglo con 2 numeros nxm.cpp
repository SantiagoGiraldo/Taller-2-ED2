//Arreglo ingresando dos numeros 
#include <conio.h>
#include <stdio.h>



int main() 
	
{
	
	int i,n,m,k,j,band=0,band1=0;
	int matriz[100][100];
	int *p_matriz = &matriz[0][0];
	printf("ingrese el valor de las fias: ");
	scanf("%d",&n);
	printf("ingrese el valor de las columnas: ");
	scanf("%d",&m);
	
	//for(i=0;i<n;i++)
	//{
		for(k=0;k<(m*n);k++)
		{
			
		
		if(band==0&&band1==0)
		{
			*(p_matriz+k)=0;
			band=1;
			band1=1;
			
		}
		
		else
		{
			*(p_matriz+k)=1;
			band=0;
			band1=0;
		}
		}
		
	//}

	for(j=0;j<(n*m);j++)
	{
		printf("%d",*(p_matriz+j));
		
	}	
	printf("\n");
	
	return 0;
}

