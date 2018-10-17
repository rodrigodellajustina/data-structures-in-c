#include <stdio.h>

void main(){
	int a[5][2];
	int va[10][2];
	
	int l, c, elemento;
	int lp;
	
	for(l=0;l<=4;l++){
		
		for(c=0;c<=1;c++){
			printf("Informe valor para Linha [%d] Coluna [%d] \n ", l, c);
			scanf("%d", &a[l][c]);
		}		
		
	}
	
	for(l=0;l<=4;l++){
	
		elemento = a[l][0];
		
		for(lp=0;lp<=4;lp++){
			if((elemento == a[lp][0]) && (l != lp)){
				printf("Elemento repetido \n");
			}
		}
	
	}
	
	
	
	
	
	
}
