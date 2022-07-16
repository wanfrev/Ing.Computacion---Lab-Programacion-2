//Ej 4: Mostrar la fecha y hora actual
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	time_t eltiempo;
	time(&eltiempo);
	printf("%s\n", ctime(&eltiempo));
	
	system("pause");
	return 0;
}
