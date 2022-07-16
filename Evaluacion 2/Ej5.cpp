//Ej 5: Asignar numeros aleatorios a un vector
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int vector[20];

void mostrarVector();

int main(){
	mostrarVector();
	
	system("pause");
	return 0;
}

void mostrarVector(){
	srand(time(NULL));
	for(int i=0;i<20;i++){
		vector[i]=1+rand()%(100+1-1);
		printf("%d ",vector[i]);
	}
}
