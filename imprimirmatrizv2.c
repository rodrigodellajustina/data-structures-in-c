#include <stdio.h>

float z[4][4];

//função para efetivar somas...
float somar(float a, float b){
	
	return (a+b);
	
}

float subtrair(float a, float b){
		
	return (a-b);
}

float dividir(float a, float b){
	
	return (a/b);
	
}

float multiplicar(float a, float b){
	
	return a*b;
}

int imprimirmatriz(){
	
	int   l, c;
	
	for(l=0;l<=3;l++){
		
		for(c=0;c<=3;c++){
			printf("[%f]", z[l][c]);	
			
		}	
		
		printf("\n");
	}
	
	return 0;
		
}

void main(){
		
	int   l, c;
	
	for(l=0;l<=3;l++){
		
		printf("Informe o primeiro valor ");
		scanf("%f", &z[l][0]);
		
		printf("Informe o segundo valor ");
		scanf("%f", &z[l][1]);
		
		z[l][2] = somar(z[l][0], z[l][1]);
		z[l][3] = subtrair(z[l][0], z[l][1]);
	}
	
	// com a soma e a subtração
	printf("Imprimir Soma e Subtração \n");
	imprimirmatriz();
	
	for(l=0;l<=3;l++){		
		z[l][2] = multiplicar(z[l][0], z[l][1]);
		z[l][3] = dividir(z[l][0], z[l][1]);
	}
	
	// exibir com a multiplicação e a divisão
	printf("Imprimir Multiplicação e Divisão \n");
	imprimirmatriz();	

		
}
