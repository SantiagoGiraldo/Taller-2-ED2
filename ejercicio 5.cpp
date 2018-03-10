/* Ejercicio 5 pedir al usuario N numeros,almacenarlos en un arreglo dinamico poste ordenar los numeros en orden ascendente y mostrarlos en pantalla*/


#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

//prototipo de funcion 
void pedirDatos();
void ordenarArreglo(int*,int);
void mostrarArreglo(int*,int);

int nElementos, *elemento;

int main(){
	
	pedirDatos();
	ordenarArreglo(elemento,nElementos);
	mostrarArreglo(elemento,nElementos);
	
	delete[] elemento;//limpiar memoria utilizando el arreglo dinamico
	
    getch ();
	return 0;
}
void pedirDatos(){
	cout<<"Digite el numero de elemento del Arreglo:";
	cin>>nElementos;
	
	elemento= new int [nElementos];//crear el arreglo
	
	for (int i=0;i<nElementos;i++){
		cout<<"Digite un numero["<<i<<"]: ";
		cin>>*(elemento+i); //elemento[i]
		
	}
}

void ordenarArreglo(int*elemento,int nElementos){
	int aux;
	//ordenar el arreglo con el metodo burbuja 
	for(int i=0;i<nElementos;i++){
		for(int j=0;j<nElementos-1;j++){
			if(*(elemento+j) > *(elemento+j+1)){//elemento[j] > elemento[j+1]
			aux= *(elemento+j);
			*(elemento+j)= *(elemento+j+1);
			*(elemento+j+1) = aux;
			}
			
		}
	}
}

void mostrarArreglo(int *elemento,int nElementos){
	cout<<"\n\nMostrando arreglo ordenado:";
	for(int i=0;i<nElementos;i++){
		cout<<(elemento+i)<<"  ";//elemento [i]
	}
}
