#include <stdio.h>

void soma (int piValorA, int piValorB, int * piResultado){
	printf("Endereco de piResultado = %d\n", piResultado);
	/* o valor está sendo colocado diretamente na memória */
	*piResultado = piValorA + piValorB;
	return;
}


void main (){
	int iValorA;
	int iValorB;
	int iResultado;
	
	
	printf ("Entre com os valores:");
	scanf ("%d %d", &iValorA, &iValorB);
	
	
	printf("Endereco de iResultado = %d\n", &iResultado);
	
	/* está sendo passado o endereço de memória
	da variável, qualquer alteração estará
	sendo realizada na memória */
	
	
	soma (iValorA, iValorB, &iResultado);
	
	printf ("Soma : %d\n", iResultado);

}


