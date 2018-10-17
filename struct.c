#include <stdio.h>

typedef struct{
	int ra;
	float nota1;
	float nota2;
} Aluno;



void main(){
	Aluno dirceu;
	Aluno marcelo;
	
	dirceu.ra = 300;
	dirceu.nota1 = 5.5;
	dirceu.nota2 = 4.5;
	
	printf("Aluno RA = %d \n", dirceu.ra);
	printf("Nota 1 = %f \n", dirceu.nota1);
	printf("Nota 2 = %f \n", dirceu.nota2);
	
	printf("Informe NOVA nota para o Dirceu");
	scanf("%f", &dirceu.nota1);
	
	printf("Nova Nota 1 %f \n", dirceu.nota1);
	
}
