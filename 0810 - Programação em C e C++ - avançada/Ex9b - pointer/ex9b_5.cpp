#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

main(){

	int a=7;
	int *aPtr=&a;
	
	printf("O valor da variavel 'a' e %d\n O valor do ponteiro *aPtr e %d", a, *aPtr);
	printf("\n");
	printf("\nO endereco de 'a' e %p\n O endereco de *aPtr e %p", a, *aPtr);

}

