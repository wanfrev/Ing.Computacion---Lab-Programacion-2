#include<stdio.h>
#include<conio.h>
#include<math.h>

void fg();
void vol();
void mruv();


int main(){
	int op;
		
	printf("1. Calcular las raíces de un polinomio de grado 2 \n2.Calculo del Volumen de una esfera \n3.Calculo del desplazamiento de un móvil en movimiento rectilineo uniforme variado");
	printf("\n\nDigite una opcion: ");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			fg();
		break;
		case 2:
			vol();
		break;
		case 3:
			mruv();
		break;
	}
	
	getch();
	return 0;
}


void fg(){
	float a,b,c,x,x1,x2,raiz;
	
	printf("Digite el valor de a: ");
	scanf("%f",&a);
	printf("Digite el valor de b: ");
	scanf("%f",&b);
	printf("Digite el valor de c: ");
	scanf("%f",&c);
	
	raiz=sqrt(pow(b,2)-4*a*c);
	
	if (raiz == 0){
	    x = -b/(2*a);
		printf ("El resultado es: %f", x);
	}else if (raiz>0){
	    x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
	    x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
	    printf("\n\nX1: %f",x1);
	    printf("\n\nX2: %f",x2);
	}else{
	    printf ("\n\nError es una raiz compleja.");
	}
}

void vol(){
	float v,r,pi;
	
	pi = 3.14;
	
	printf("Digite el valor de r: ");
	scanf("%f",&r);
	if(r<=0){
		printf("\n\nERROR");
	}else{
		v=(1.33)*pi*(r*r*r);
		printf("\n\nv: %f",v);
	}
}

void mruv(){
	float xf,xo,vot,ac,t;
			
	printf("\nIngrese el desplazamiento inicial: ");
	scanf("%f",&xo);
	printf("\nIngrese la velocidad inicial: ");
	scanf("%f",&vot);
	printf("\nIngrese la aceleración en este intervalo: ");
	scanf("%f",&ac);
	printf("\nIngrese el tiempo de desplazamiento: ");
	scanf("%f",&t);
	
	xf=xo+vot+((ac*pow(t,2))/2);
	printf("\n\nXf: %f",xf);
}
