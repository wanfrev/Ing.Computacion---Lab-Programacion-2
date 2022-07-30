/*Ej2: Determinar si un numero es primo o no; con punteros y ademas indicar en que posicion de memoria 
se guardo el num*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int num,*dir_num,cont=0;
	
	printf("Digite un numero: "); scanf("%d",&num);
	
	dir_num = &num;
	
	for(int i=1;i<*dir_num;i++){
		if(*dir_num%i==0){
			cont++;
		}
	}
	
	if(cont>2){
		printf("El numero %d no es primo\n",*dir_num);
		printf("Posicion: %d \n",dir_num);
	}else{
		printf("El numero: %d es primo\n",*dir_num);
		printf("Posicion: %d\n",dir_num);
	}
	
	system("pause");
	return 0;
}
