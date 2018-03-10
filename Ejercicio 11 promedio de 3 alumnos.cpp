//Ejercicio 11 Promedio de 3 alumnos elegir mejor promedio 
#include<stdio.h>

struct alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3],*p_alumno=alumno;

int main(){
	
	int i;
	for(i=0;i<3;i++)
	{
		fflush(stdin);
		printf("Ingrese su nombre:");
		fgets((p_alumno+i)->nombre,30,stdin);
		printf("Ingrese su edad:");
		scanf("%d",&(p_alumno+i)->edad);
		printf("Ingrese su promedio:");
		scanf("%f",&(p_alumno+i)->promedio);
		
	}
	
	float m=0.00;
	int unico;
	for(i=0;i<3;i++)
	{
		if((p_alumno+i)->promedio>m)
		{
			m=(p_alumno+i)->promedio;
			unico=i;
		}
	}
	printf("El del alumno %s con edad de %d obtuvo el mejor promedio con un puntaje de %.2f",(p_alumno+unico)->nombre,(p_alumno+unico)->edad,m);
	
	
	return 0;

}
