#include <stdio.h>
#include <stdlib.h>

int *pVetorElem;
int qtdelementos = 0;

void lrPonteiro(){
	
	// aloca ou realoca ponteiros;
	
	if(qtdelementos==0){
		// se não tiver elementos aloca;
		pVetorElem = (int *)(malloc(1*sizeof(int)));
	}else{
		// se tiver elementos realoca;
		pVetorElem = (int *)(realloc(pVetorElem, (qtdelementos)*sizeof(int)));
	}
	
	qtdelementos  = qtdelementos + 1;
		
}

void insereElemento(){
	// antes de inserir o elemento vamos 
	// alocar memoria no ponteiro...
	lrPonteiro();
	printf("Informe um valor para Elemento %d ", qtdelementos);
	scanf("%d", &pVetorElem[qtdelementos]);
	menu();
	
}

void listarElemento(){
		// listar elementos...
	printf("Lista de elementos \n");
	int i;
	for(i=1;i<=qtdelementos;i++){
		printf("Pos. [%d] elemento [%d] \n", i, pVetorElem[i]);
	}
	
	
}

int procurarElemento(int elemento){
	
	int x;
	for(x=1;x<=qtdelementos;x++){
		if (elemento == pVetorElem[x]){
			return 1;
		}
	}
	
	return 0;
}



void menu(){
	
	int opc = 0;
	int elem = 0;
	int retornoprocura = 0;
	printf("1 - Inserir Elemento \n");
	printf("2 - Listar Elementos \n");
	printf("3 - Procurar Elementos \n");
	scanf("%d", &opc);
	
	switch (opc){
		case 1:
			// chamar a função inserir elementos
			insereElemento();
			break;
		case 2:
			// chamar a função listar elementos
			listarElemento();
			menu();
			break;
		case 3:
			// chamar a função para procurar elementos
			printf("Informe o elemento para procura ");
			scanf("%d", &elem);			
			retornoprocura = procurarElemento(elem);
			
			if (retornoprocura == 1){
				printf("Elemento %d encontrado \n", elem);
			}else{
				printf("Elemento %d não encontrado \n", elem);
			}
			menu();
			break;
			
		default:
			printf("Menu Inexistente");			// menu inexistente
			
	}
	
	
}


void main(){
	
	menu();
	
}
