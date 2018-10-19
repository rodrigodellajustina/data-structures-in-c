#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int **p;
	int qtdlinha,qtdcoluna,k,x;	
	printf("Informe as dimensoes");
	scanf("%d %d", &qtdlinha, &qtdcoluna);	
	
	p = calloc(qtdlinha, sizeof(int));
	if(p==NULL){
		printf("Erro alocação memória linha");
	}
		
	for( k=0;k<qtdlinha;k++){	
		p[k] = calloc(qtdcoluna,sizeof(int));
		if( p[k] == NULL ){
			printf("\nErro de alocacao de memoria coluna");
			exit(1);
		}
	}
	
	for( k=0;k<qtdlinha;k++){
		for(x=0;x<qtdcoluna;x++){
			printf("Digite o numero para o indice %d,%d ->", k,x);
			scanf("%d", &p[k][x]);
		}
	}
	
	
	for( k=0;k<qtdlinha;k++){
		for(x=0;x<qtdcoluna;x++){
			printf("O numero do indice %d,%d eh %d\n", k,x, p[k][x]);
		}
	}
	
	
}
