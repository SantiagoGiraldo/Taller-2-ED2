#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
	
{
	int pri,i,a=0;
	int *p_primo;
	
		printf("Ingrese un numero: ");
		scanf("&d",&pri);
		
		p_primo = &pri;

				
		for(i=1;i<=*p_primo;i++)
		{
			if(*p_primo%i==0)// si num1 m�dulo de i es 0, incrementamos a en 1.
			{
				a++;
			}
			
			
		}
			
			fflush(stdin);
		
		
		
		if(a==2) //Si al final del bucle, a vale 2, el n�mero es primo, porque tiene solamente 2 divisores.
		{
			printf("El n�mero %d es primo\n",*p_primo);
			
			
		}
		else
		{
			printf("El n�mero %d no es primo\n",*p_primo);
		}
	
	
	return 0;
}

