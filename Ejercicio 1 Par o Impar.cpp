/*2. Comprobar si un n�mero es par o impar, y se�alar la posicion de memoria donde
se est� guardando el n�mero. Con punteros.*/

#include<stdio.h>

int main(){
	int x, *p_x;
	
	printf("Digite un numero: "); 
	scanf("%d",&x);
	
	p_x = &x;  
	
	if(*p_x%2==0){ 
		printf("El numero %d es par",*p_x);
		printf("La posicion de memoria es: %p",p_x); 
	}
	else{
		printf("El numero %d es impar",*p_x);
		printf("La posicion de memoria es: %p",p_x);	
	}
	
	
	
	
	return 0;
}
