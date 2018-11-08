#include <stdio.h>
#include <stdlib.h>


struct Pilha{
       
       int dado;
       struct Pilha *proximo;
       
};

typedef struct Pilha Pilha2; 
typedef Pilha2 *Pilha3; 


void push(Pilha3 *topo, int dado){
     
     Pilha3 novo;
     
     novo = (Pilha3)malloc(sizeof(struct Pilha)); /* cria um novo nó */
     
     if(novo != NULL){ 
         novo->dado = dado; 
         novo->proximo = 
         *topo = novo; 
     }
     else 
         printf("Nao ha memoria disponivel\n");
     
}

int pop(Pilha3 *topo){
     
     Pilha3 temp;
     int valor_removido;
     
     temp = *topo; 
     valor_removido = (*topo)->dado; 
     *topo = (*topo)->proximo; 
     free(temp); 
     
     return valor_removido;
     
}

int esta_vazia(Pilha3 pilha){
    
    return pilha == NULL;
    
}

void imprime_pilha(Pilha3 atual){
     
     if(atual == NULL)
         printf("\nA pilha esta vazia.\n\n");
     else{
         printf("\nA pilha eh:\n\n");
         while(atual != NULL){ 
             printf("%d --> ", atual->dado); 
             atual = atual->proximo; 
         }
         printf("NULL\n\n");
     }
}




int main(){
    
    Pilha3 minhapilha = NULL;    
    
    
	push(&minhapilha, 10);
	push(&minhapilha, 20);
	push(&minhapilha, 30);
	
	if(!esta_vazia(minhapilha)){
		printf("\nO valor retirado eh : %d \n", pop(&minhapilha));
	}
	
	imprime_pilha(minhapilha);	
    
    return 0;
}