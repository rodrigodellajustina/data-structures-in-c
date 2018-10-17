#include <stdio.h>

float aluno[5][3];


int imprimirmedia(){
	// aqui você vai exibir e calcular a média...
	return 0;
}

int imprimirmediaturma(){
	// aqui exibir e calcular a média da turma..
	return 0;
	
}

void exibirmenu(){
	
	int opcao;
	
	opcao = 0;
	
	printf("1 - Imprimir média do aluno \n");
	printf("2 - Imprimir média da turma");
	printf("Informe a sua opção");
	scanf("%d", &opcao);
	
	if(opcao == 1){
		imprimirmedia();
	}
	
	if(opcao == 2){
		imprimirmediaturma();
	}
	
}

void main(){
		
	int l;
	float soma;
	float media;
	
	for(l=0;l<=4;l++){
		printf("Informe o RA ");
		scanf("%f", &aluno[l][0]);
		
		printf("Informe nota 1 Bimestre ");
		scanf("%f", &aluno[l][1]);
		
		printf("Informe nota 2 Bimestre ");
		scanf("%f", &aluno[l][2]);	
		
		// coisa do dirceu nao altere nada 
		//soma  = aluno[l][1]	+ aluno[l][2];
		//media = (aluno[l][1]	+ aluno[l][2])/2;
	}
	
	
	exibirmenu();
	
	
	
	
}
