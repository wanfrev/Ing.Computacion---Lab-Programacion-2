/*Ej 3: Escriba una función nombrada funcPotencia() la cual recibirá dos parámetros, primero un numero  
ENTERO que será la base de la potencia, y el segundo parámetro de la función será el exponente , el valor de
retorno será la potencia de dicho número.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void pedirDatos();
void funcPotencia(int n,int pot);

int n,pot;

int main(){
	pedirDatos();
	funcPotencia(n,pot);
	
	getch();
	return 0;
}

void pedirDatos(){
	printf("Digite un numero: ");
	scanf("%d",&n);
	printf("\nDigite el numero al que quiere elevar: ");
	scanf("%d",&pot);
}

void funcPotencia(int n,int pot){
	int potencia;
	
	potencia = pow(n,pot);
	
	printf("\nEl resultado es: %d",potencia);
}
