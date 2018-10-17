#include <stdio.h>

// Usando Struct/Registros com matrizes
typedef struct{
	int n1;
	int n2;	
} RegistroMatriz;

void main(){
	
	// declarando a matriz Y	
	RegistroMatriz y[2][2];
	
	y[0][0].n1 = 30;
	y[0][0].n2 = y[0][0].n1;
	
	printf("%d \n", y[0][0].n1);
	printf("%d", y[0][0].n2);
	
	
}
