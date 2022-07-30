/*Ej1: Comprobar si un numero es par o impar, y señalar la posicion de memoria donde se está guardando el numero.
Con punteros.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int num,*dir_num;
	
	printf("Digite un numero: "); scanf("%d",&num);
	
	dir_num = &num; //Guardando posicion de memoria
	
	if(*dir_num%2==0){
		printf("El numero %d es par",*dir_num);
		printf("\nPosicion: %d \n",dir_num);
	}else{
		printf("El numero %d es impar",*dir_num);
		printf("\nPosicion: %d \n",dir_num);
	}
	
	system("pause");
	return 0;
}
