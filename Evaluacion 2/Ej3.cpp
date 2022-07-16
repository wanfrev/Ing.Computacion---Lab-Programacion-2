//Ej 3: Realizar diferentes operaciones con la libreria math.h
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	float num;
	
	printf("Ingrese un numero: ");
	scanf("%f",&num);
	
	printf("\nEl valor del numero redondeado hacia arriba es: %f",ceil(num));
	printf("\nEl valor del numero redondeado hacia abajo es: %f",floor(num));
	printf("\nEl valor absoluto del numero es: %f",fabs(num));
	printf("\nEl valor del seno del numero es: %f",sin(num));
	printf("\nEl valor del coseno del numero es: %f",cos(num));
	printf("\nEl valor de la tangente del numero es: %f",tan(num));
	
	system("pause");
	return 0;
}
