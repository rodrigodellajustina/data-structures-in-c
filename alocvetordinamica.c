#include <stdio.h>
#include <stdlib.h>

void main(){
	int *pvetor;
	int e;
	
	printf("Informe nro. elementos");
	scanf("%d", &e);
	
	// MALLOC reserva a quantia de espaço 
	// em KBytes na memória necessaria para
	// o meu vetor pvetor...
	// baseado no numero de elementos 
	// armazenados na variavel (e).
	pvetor = (int *)(malloc(e * sizeof(int)));
	
	if(pvetor == NULL){
		printf("Erro ao alocar memoria...");
	}else{
		printf("Alocacao OK");
	}
	
	printf("Informe um valor para pvetor.. 0 ");
	scanf("%d", &pvetor[0]);
	
	printf("Informe um valor para pvetor.. 1 ");
	scanf("%d", &pvetor[1]);
	
	printf("pvetor na 0 %d ", pvetor[0]);
	
	
}
