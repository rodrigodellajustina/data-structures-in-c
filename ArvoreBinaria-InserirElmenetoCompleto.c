#include <stdio.h>
#include <stdlib.h>

typedef struct arvore
{
  int num;
  struct arvore* esquerda;
  struct arvore* direita;
} Arvore;


Arvore* criaArvore()
{

  return NULL;
}


int arvoreVazia(Arvore* t)
{
   return t == NULL;
}

void exibirArvore(char v, Arvore* t){

    
  if(!arvoreVazia(t)) 
  {
	printf("%c", v);
    printf("%d ", t->num);   
    exibirArvore('e', t->esquerda);		 
    exibirArvore('d', t->direita);
    
  }
  
}

void inserirArvore(Arvore** t, int num){

  if(*t == NULL)
  {
    *t = (Arvore*)malloc(sizeof(Arvore)); 
    (*t)->esquerda = NULL; 
    (*t)->direita = NULL; 
    (*t)->num = num; 
  } else {
    if(num < (*t)->num) 
    {
      inserirArvore(&(*t)->esquerda, num);
    }
    if(num > (*t)->num) 
    {
      inserirArvore(&(*t)->direita, num);
    }
  }
}

void main(){
	
  Arvore* t = criaArvore(); 
    
  inserirArvore(&t, 30); 
  inserirArvore(&t, 15); 
  inserirArvore(&t, 50); 
  inserirArvore(&t, 25); 
  inserirArvore(&t, 10); 
  inserirArvore(&t, 31); 
    
  exibirArvore('r', t); 
    
  free(t); 
}
