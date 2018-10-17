#include <stdio.h>

int a[5];

int procuraelemento(int elemento){
	
	int x;
	int encontrou = 0;
	for(x=0;x<=4;x++){
		if(elemento == a[x]){
			encontrou = x;
		}
				
	}
	
	return encontrou;
}

void main(){	
	
	int x;
	int busca;
	
	for(x=0;x<=4;x++){
		printf("Informe o valor ");		
		scanf("%d", &a[x]);		
	}
	
	
	while(1==1){
		printf("Buscar o valor no Vetor \n");
		scanf("%d", &busca);		
		
		if(procuraelemento(busca) > 0){
			printf("Elemento Existe no vetor, esta na posicao %d \n", procuraelemento(busca));
		}
		
	}

	
	
	
		
	
	
	
}
