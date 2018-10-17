#include <stdio.h>

// MATRIZ GLOBAL ALUNO

float aluno[3][3];


void registraraluno(){
	
	int l;
	
	for(l=0;l<=2;l++){
		
		printf("Informe o RA : ");
		scanf("%f", &aluno[l][0]);
		
		printf("Informe NOTA 1 Bimestre");
		scanf("%f", &aluno[l][1]);
		
		printf("Informe NOTA 2 Bimestre");
		scanf("%f", &aluno[l][2]);
		
	}
	
}

void exibirmedia(){
	
	int l;
	float media;
	
	for(l=0;l<=2;l++){
		
		media = (aluno[l][1]+aluno[l][2])/2;
		printf("RA= %f MEDIA=%f \n", aluno[l][0], media);
		
	}
	
	
}

void exibirmediaturma(){
	
	int l;
	float media;
	float acumunota;
	
	acumunota = 0;
	
	for(l=0;l<=2;l++){
		
		media = (aluno[l][1]+aluno[l][2])/2;
		acumunota = acumunota + media;
		
	}
	
	acumunota = (acumunota/3);
	printf("Media Turma = %f ", acumunota);
	
}


void exibirmenu(){
	
	int opcao;
	
	printf("1 - Exibir Média Aluno \n");
	printf("2 - Exibir Média Turma \n");
	printf("Informe sua opção \n");
	scanf("%d", &opcao);
	
	if(opcao==1){
		exibirmedia();
	}
	
	if(opcao==2){
		exibirmediaturma();
	}
	
	
}


void main(){
	
	int w;
	w=0;
	
	registraraluno();	
	
	while(w==0){
		exibirmenu();		
	}
	
	
}
