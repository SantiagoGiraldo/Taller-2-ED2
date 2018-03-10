//Arreglo con matrices 3x3 Ingresar valores primos
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
	
{
	int pri[8],i,a,j,p,k,m,h;
	int matriz[3][3];
	int *p_primo = &pri[0],*p_matriz = &matriz[0][0];
	
	srand(time(NULL));
	
	a=0; 
	
	for(j=0;j<=8;j++)
	{
		a=0;
		
		*(p_primo+j)=1+rand()%50;
		
		
		for(i=1;i<=*(p_primo+j);i++)
		{
			if(*(p_primo+j)%i==0)// si num1 módulo de i es 0, incrementamos a en 1.
			{
				a++;
			}
			
			
		}
		
		
		if(a==2) //Si al final del bucle, a vale 2, el número es primo, porque tiene solamente 2 divisores.
		{
			printf("El número %d es primo\n",*(p_primo+j));
			
			
		}
		else
		{
			j--;
		}
		
	}
	
	//j=0;
	for(p=0;p<=2;p++)
	{ 
		for(k=0;k<=3;k++)
		{
			*(p_matriz+k+p*k) = *(p_primo+k+p*k);
			//j+=1;
		}
	}	
	
	j=0;
	for(h=0;h<=2;h++)
	{ 
		for(m=0;m<=2;m++)
		{
			printf("Posicion %d = %d\n",j,*(p_matriz+m+h*m));
			j++;
		}
	}
	
	
	return 0;
}

