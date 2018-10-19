#include <stdio.h>
#include <stdlib.h>

int *pVetor;
int opc = 0;
int numeroelementos;

void inicializaponteiro(){
	pVetor = (int *)(malloc(1*sizeof(int)));
}

void opcaomenuerrado(){
	
	printf("Nro. do menu inexistente \n");
	menu();
	
}

void realocarPonteiro(){
	
	if (numeroelementos==0){
		inicializaponteiro();
	}else{		
		pVetor = (int *)(realloc(pVetor,(numeroelementos)*sizeof(int)));		
	}
	numeroelementos = numeroelementos + 1;
	
}

void insereElemento(){
	realocarPonteiro();
	printf("Informe um valor %d ", numeroelementos);
	scanf("%d", &pVetor[numeroelementos]);	
	menu();
}

void exibirElemento(){
	
	int x;
	for(x=1;x<=numeroelementos;x++){
		printf("Vetor posicao %d valor %d \n", x, pVetor[x]);
		
	}
	
}

int menu(){
	
	printf("1 - Incluir na Vetor \n");
	printf("2 - Exibir da Vetor \n");
	scanf("%d", &opc);
		
	switch (opc){
		case 1:
			insereElemento();
			break;
			
		case 2:
			exibirElemento();
			break;
		
		default:
			opcaomenuerrado();
	}		
	
		
}


void main(){

	numeroelementos=0;		
	menu();
	
}
