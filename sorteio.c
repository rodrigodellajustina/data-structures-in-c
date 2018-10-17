#include <stdio.h>


void main(){
	
	int sorteado;
	int i;
	
	char* nome[21];
	nome[0] = "DIEGO PIMENTA";
	nome[1] = "DIRCEU DA SILVA WOYCIECHOWSKI";
	nome[2] = "DYONES EDUARDO SMANIOTTO";
	nome[3] = "EDMAICON DA SILVA MARAFON";
	nome[4] = "ELIAS DE JESUS DE MORAES";
	nome[5] = "EMERSON BROCA SONAI";
	nome[6] = "GIAN LUCAS DAMORDIVINO"; 
	nome[7] = "GIOVANE VINICIUS FLORES SCHEITE";
	nome[8] = "GIOVANI EDUARDO QUISINI";
	nome[9] = "GUSTAVO ANTÔNIO KAMPHORST BANDEIRA";
	nome[10] = "GUSTAVO HENRIQUE POTRICH PERES";
	nome[11] = "JOAO GABRIEL JARUTAIS"; 
	nome[12] = "JOSE LUIS DE OLIVEIRA MARAFON";
	nome[13] = "KAMILA SOPELSA";
	nome[14] = "LUCAS KONRAD"; 
	nome[15] = "MARCELO BIALESKI PERUZZO"; 
	nome[16] = "MARCOS HENRIQUE DE NANTES"; 
	nome[17] = "MATEUS FELIPE GONÇALVES OLIVEIRA";
	nome[18] = "MISAEL CARLOS COLETE"; 
	nome[19] = "MOISES NIEHUES MORAES";
	nome[20] = "WELLINGTON CHIODELLI PEREIRA";

	
	srand(time(0));
	sorteado = rand()%21;
	printf("Quem ira apresentar o exemplo ?");
	scanf("%d", &i);
	printf("%s", nome[sorteado]);

}

