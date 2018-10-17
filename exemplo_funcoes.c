#include <stdio.h>
#include <locale.h>

int somar(int a, int b){
	
	return a+b;
		
}

float dividir(int a, int b){
	
	return a/b;
}

void main(){
	
	int a,b;	
	
	setlocale(LC_ALL, "");
	
	printf("Informe o valor ");
	scanf("%d", &a);
	
	printf("Informe o valor ");
	scanf("%d", &b);	

	printf("Soma %d ", somar(a,b));
	printf("Divisão %f ", dividir(a,b));
	
}
