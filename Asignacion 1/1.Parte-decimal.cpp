/* Escriba un programa que devuelva la parte decimal de cualquier n�mero introducido por el usuario. 
Por ejemplo si se introduce el n�mero 456.884 deber�a devolverse el n�mero 0.884*/

#include<stdio.h>
#include<conio.h>

void pedirDatos();
float fraccionaria(float n);

float numero;

int main(){
	pedirDatos();
	printf("La parte fraccionaria del numero es: %f",fraccionaria(numero));
	
	getch();
	return 0;
}

void pedirDatos(){
	printf("Digite un numero: "); 
	scanf("%f",&numero);
}

float fraccionaria(float n){
	int entero=n;
	
	float resultado = n-entero;
	
	return resultado;
}
