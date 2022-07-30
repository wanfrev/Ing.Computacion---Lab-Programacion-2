/*Ej.5: Pedir al usuario N numeros, almacenarlos en un arreglo dinamico posteriormente ordenar los numeros en orden
ascendente y mostrarlos en pantalla.*/

#include<stdio.h>
#include<stdlib.h>

void pedirDatos();
void ordenarArreglo(int *,int);
void mostrarArreglo(int *,int);

int nElementos, *elemento;

int main(){
	pedirDatos();
	ordenarArreglo(elemento,nElementos);
	mostrarArreglo(elemento,nElementos);
	
	delete[] elemento;
	
	system("pause");
	return 0;
}

void pedirDatos(){
	printf("Digite el numero de elementos: "); scanf("%d",&nElementos);
	
	elemento = new int [nElementos];
	
	for(int i=0;i<nElementos;i++){
		printf("Digite un numero [%d]: ",i);
		scanf("%d",&*(elemento+i)); //elemento[i]
	}
}

void ordenarArreglo(int *elemento,int nElementos){
	int aux;
	
	//Ordenar metodo burbuja
	for(int i=0;i<nElementos;i++){
		for(int j=0;j<nElementos-1;j++){
			if(*(elemento+j)>*(elemento+j+1)){ //elemento[j] > elemento[j+1]
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}

void mostrarArreglo(int *elemento,int nElementos){
	printf("\n\nMostrando arreglo ordenado: ");
	for(int i=0;i<nElementos;i++){
		printf(" %d ",*(elemento+i));
	}
	printf("\n");
}
