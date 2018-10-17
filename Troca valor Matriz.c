#include <stdio.h>

void main(){
	
	int x[2][2];
	int y[2][2];
	int linha, coluna;
	
	for(linha=0;linha<=1;linha++){
		
		for(coluna=0;coluna<=1;coluna++){
			printf("Informe valor para MATRIZ X linha %d, coluna %d \n", linha, coluna);
			scanf("%d", &x[linha][coluna]);
			
			printf("Informe valor para MATRIZ Y linha %d, coluna %d \n", linha, coluna);
			scanf("%d", &y[linha][coluna]);
		}		
	}
	
	
	
	
}
