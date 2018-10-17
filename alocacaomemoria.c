#include <stdio.h>
#include <stdlib.h>

void main(){
	int *p;
	int i,x, n;

	printf("\nDigite a quantidade de numeros que serao digitados ->");
	scanf("%d", &i);

	/* A função malloc reserva espaço suiciente para um vetor de inteiros.
	Caso sejam digitados 5 elementos, serão reservados 20 bytes, pois cada
	inteiro ocupa 4 bytes na memória */


	p = (int *)(malloc( i *sizeof(int)));
	
	if(p == NULL){
		printf("\nErro de alocacao de memoria");
		exit(1);
	}

	for(x=0;x<i;x++){
		printf("Digite o numero para o indice/posicao %d ->", x);
		scanf("%d", &p[x]);
	}
	
}
