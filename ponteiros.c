#include <stdio.h>

void main (void){
	
	/* declaracao do ponteiro piValor para inteiro  */
	int *piValor; 
	
	/*declaração de uma variável */
	int iVariavel = 27121975;	
	
	piValor = &iVariavel; /* pegando o endereço de memória da variável */

	printf ("Endereco do Ponteiro: %d\n", piValor);
	printf ("Valor : %d\n", *piValor);


}
