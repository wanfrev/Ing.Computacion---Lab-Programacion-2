//Ej 2: Contar la cantidad de vocales en un string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void contarVocales();

int main(){
	contarVocales();
		
	system("pause");
	return 0;
}

void contarVocales(){
	char palabra[100];
	
	printf("Ingrese su nombre: ");
	scanf("%s",&palabra);
	
	int a=0,e=0,i=0,o=0,u=0;
	
	for(int i=0;i<100;i++){
		switch(palabra[i]){
			case 'a': a++; break;
			case 'e': e++; break;
			case 'i': i++; break;
			case 'o': o++; break;
			case 'u': u++; break;
		}
	}
	
	printf("Vocal a: %d",a);
	printf("\nVocal e: %d",e);
	printf("\nVocal i: %d",i);
	printf("\nVocal o: %d",o);
	printf("\nVocal u: %d\n",u);
}
