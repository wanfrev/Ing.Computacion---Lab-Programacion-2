/*Ej 3: Escriba una funci�n nombrada funcPotencia() la cual recibir� dos par�metros, primero un numero �
ENTERO que ser� la base de la potencia, y el segundo par�metro de la funci�n ser� el exponente , el valor de
retorno ser� la potencia de dicho n�mero.*/

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
