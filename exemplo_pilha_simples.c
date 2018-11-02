#include <stdio.h>

typedef struct{
	int dados[4];
	int indposicao;
} Tipo_Pilha;

void iniciaPilha(Tipo_Pilha *novaPilha){
	printf("Iniciando a pilha \n");
	novaPilha->indposicao = 0;
	printf("Iniciou a pilha \n");
}

void push(Tipo_Pilha *novaPilha, int novodado){
	// inserir o elemento na pilha...
	
	printf("Inserindo o dados %d \n ", novodado);
	
	novaPilha->dados[novaPilha->indposicao] = novodado;
	
	novaPilha->indposicao = novaPilha->indposicao + 1;
	
}

void imprimirPilha(Tipo_Pilha novaPilha){
	
	int controle = novaPilha.indposicao-1;

	while(controle != -1){
		printf("Elementos na pilha --> %d \n ", novaPilha.dados[controle]);
		controle--;		
	}
	
}

void pop(Tipo_Pilha *novaPilha){
	
	//
	novaPilha->indposicao = novaPilha->indposicao-1;
}


void main(){
	Tipo_Pilha novaPilha;
	
	iniciaPilha(&novaPilha);
	push(&novaPilha, 19);
	push(&novaPilha, 21);
	push(&novaPilha, 33);
	
	imprimirPilha(novaPilha);

}
