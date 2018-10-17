/* programa_memoria_02.c */
#include <stdio.h>
#include <stdlib.h>

int main(void){

	/* A declaração de uma matriz de 2 dimensões exige um ponteiro para ponteiro. */
	int **p;
	int i,j,k,x;
	printf("\nDigite as dimensoes da matriz ->");
	scanf("%d %d", &i, &j);


	/* Alocação da primeira dimensão. Internamente, a função calloc fará uma multiplicação da
	quantidade de elementos pelo tamanho de cada elemento para saber quanto de memória
	deve ser alocada. */
	p = calloc(i,sizeof(int));
	if( p == NULL ){
		printf("\nErro de alocacao de memoria 1 ");
		exit(1);
	}
	
	for( k=0;k<i;k++){
		/* Alocação das linhas de cada coluna (segunda dimensão) */
		p[k] = calloc(j,sizeof(int));
		if( p[k] == NULL ){
			printf("\nErro de alocacao de memoria 2");
			exit(1);
		}
	}
	
	
	for( k=0;k<i;k++){
		for(x=0;x<j;x++){
			printf("Digite o numero para o indice %d,%d ->", k,x);
			scanf("%d", &p[k][x]);
		}
	}
	
	
	for( k=0;k<i;k++){
		for(x=0;x<j;x++){
			printf("O numero do indice %d,%d eh %d\n", k,x, p[k][x]);
		}
	}
	
	
	printf("\nLiberando memoria alocada");
	for( k=0;k<i;k++){
		free(p[k]); /* Primeiro deve ser liberada a memória para linha da matriz... */
	}
	free(p); /* ... para depois liberar a memória do vetor que continha as linhas. */
	
	
}

