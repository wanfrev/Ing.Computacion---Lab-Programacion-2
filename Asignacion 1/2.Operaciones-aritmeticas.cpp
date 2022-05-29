/*Ej2: Escriba un programa que mediante el uso de funciones, realice las opresiones aritméticas básicas,
suma resta, multiplicación y división de números enteros, se debe pedir al usuario , los dos números a
ser operados y debe poder elegir el tipo de operación ( +,-,* o /). Escriba un programa que mediante el uso
de funciones, realice las opresiones aritméticas básicas, suma resta, multiplicación y división de números
enteros, se debe pedir al usuario , los dos números a ser operados y debe poder elegir el tipo de operación
( +,-,* o /).*/

#include<stdio.h>
#include<conio.h>

void pedirDatos();
void operaciones();

int n1,n2;

int main(){
	pedirDatos();
	operaciones();

	getch();
	return 0;
}

void pedirDatos(){
	printf("Digite un numero: ");
	scanf("%d",&n1);
	printf("\nDigite otro numero: ");
	scanf("%d",&n2);
}

void operaciones(){
	int opcion;
	
	printf("\n1.Suma \n2.Resta \n3.Multiplicaciones \n4.Division \nElija una opcion: ");
	scanf("%d",&opcion);
	
	switch(opcion){
		case 1:
			int suma;
			suma = n1+n2;
			printf("\nLa suma es: %d",suma);
		break;
		
		case 2:
			int resta;
			resta = n1-n2;
			printf("\nLa resta es: %d",resta);
		break;
		
		case 3:
			int multiplicacion;
			multiplicacion = n1*n2;
			printf("\nLa multiplicacion es: %d",multiplicacion);
		break;
		
		case 4:
			int division;
			division = n1/n2;
			printf("\nLa division es: %d",division);
		break;
		default: printf("\nDigite una opcion correcta: ");
	}
}
