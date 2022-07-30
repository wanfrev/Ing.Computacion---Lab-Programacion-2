/*Ej4: Rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor elemento
 del arreglo*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int nElementos,numeros[100],*dir_numeros,menor=9999;
	
	printf("Digite el numero de elementos: "); scanf("%d",&nElementos);
	
	for(int i=0;i<nElementos;i++){
		printf("Digite un numero [%d]: ",i); scanf("%d",&numeros[i]);
	}
	
	dir_numeros = numeros;
	
	for(int i=0;i<nElementos;i++){
		if(*dir_numeros<menor){
			menor=*dir_numeros;
		}
		dir_numeros++;
	}

	printf("\nEl menor elemento es: %d\n",menor);
		
	system("pause");
	return 0;
}
