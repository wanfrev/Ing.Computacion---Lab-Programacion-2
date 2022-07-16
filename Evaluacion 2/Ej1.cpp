//Ej 1: Calcular la hipotenusa o el cateto
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void menu();
void hipotenusa();
void cateto();

int main(){
	menu();
	
	system("pause");
	return 0;
}

void menu(){
	int op;
	
	printf("1. Hipotenusa");
	printf("\n2. Cateto");
	printf("\n3. SALIR");
	printf("\nQue quiere calcular?: ");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			hipotenusa();
			break;
		case 2:
			cateto();
			break;
		case 3:
			break;
	}
}

void hipotenusa(){
	float a,b,c;
	printf("\nIngrese el valor del primer cateto: \n");
	scanf("%f",&a);
	printf("\nIngrese el valor del segundo cateto: \n");
	scanf("%f",&b);
	
	c=sqrt((pow(a,2) + pow(b,2)));
			
	printf("\nLa hipotenusa es: %f",c,"\n");
}

void cateto(){
	float a,b,c;
	printf("\nIngrese el valor de la hipotenusa: ");
	scanf("%f",&c);
	printf("\nIngrese el valor del cateto: ");
	scanf("%f",&a);
			
	b=sqrt((pow(c,2) - pow(a,2)));
			
	printf("\nEl cateto es: %f",b,"\n");
}
