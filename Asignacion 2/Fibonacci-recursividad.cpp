#include<stdio.h>
#include<conio.h>

int fibonacci(int n);

int main(){
	int n;
	
	printf("Digite hasta donde llegara la serie: "); scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("%i, ",fibonacci(i));
	}
	
	getch();
	return 0;
}

int fibonacci(int n){
	if(n<2){
		return n;
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
