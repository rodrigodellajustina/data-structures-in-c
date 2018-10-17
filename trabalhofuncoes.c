#include <stdio.h>

//função para efetivar somas...
float somar(float a, float b){
	
	return (a+b);
	
}

float subtrair(float a, float b){
		
	return (a-b);
}

void main(){
	
	float z[4][4];
	int   l, c;
	
	for(l=0;l<=3;l++){
		
		printf("Informe o primeiro valor ");
		scanf("%f", &z[l][0]);
		
		printf("Informe o segundo valor ");
		scanf("%f", &z[l][1]);
		
		z[l][2] = somar(z[l][0], z[l][1]);
		z[l][3] = subtrair(z[l][0], z[l][1]);
	}
	
	for(l=0;l<=3;l++){
		
		for(c=0;c<=3;c++){
			printf("[%f]", z[l][c]);	
			
		}	
		
		printf("\n");
	}
	
		
}
