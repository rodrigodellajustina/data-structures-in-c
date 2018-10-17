#include <stdio.h>

void main(){
	
	int x;
	int meuvetor[10];
	int v;
	
	srand(time(0));
	
	for(x=0;x<=9;x++){
		v = rand()%10;
		printf("%d \n", v);
		meuvetor[x]=v;
	}
	
	for(x=0;x<=9;x++){
		printf("Valor %d ", meuvetor[x]);
	}
	
}
