/*Ej3: Rellenar un array de 10 numeros, posteriormente utilizando punteros indicar cuales son numeros pares 
y su posicion en memoria*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int numeros[10],*dir_numeros;
	
	for(int i=0;i<10;i++){
		printf("Digite un numero [%d]: ",i);
		scanf("%d",&numeros[i]);
	}
	
	dir_numeros = numeros;
	
	for(int i=0;i<10;i++){
		if(*dir_numeros%2==0){
			printf("El numero %d es par\n",*dir_numeros);
			printf("Posicion: %d\n",dir_numeros);
		}
		dir_numeros++;
	}
	
	system("pause");
	return 0;
}
