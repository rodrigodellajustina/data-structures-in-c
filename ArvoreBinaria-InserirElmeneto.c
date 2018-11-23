#include <stdio.h>
#include <stdlib.h>

typedef struct arvore{
	
  int num;
  struct arvore* direita;
  struct arvore* esquerda;
	
} Arvore;

Arvore* criaArvore()
{
  return NULL;
}

void insereArvore(Arvore** t, int numparametro){
	
	if(t==NULL){
		// alocar memória dar arvore..
		*t = (Arvore*)malloc(sizeof(Arvore));
		(*t)->num = numparametro;
		(*t)->esquerda = NULL;
		(*t)->direita = NULL;
	}else{
		if(numparametro < (*t)->num){
			// inserir na folha da esquerda...
			insereArvore(&(*t)->esquerda, numparametro);
		}else{
			// inserir na folha da direita.
			insereArvore(&(*t)->direita, numparametro);
		}
		
		
	}	
	
}


void main(){
	
	printf("teste");
	
	Arvore* t = criaArvore(); /* cria uma árvore */	
	
	insereArvore(&t, 30);
	insereArvore(&t, 20);
	insereArvore(&t, 15);
	insereArvore(&t, 18);
	insereArvore(&t, 10);
	insereArvore(&t, 50);

	
}
