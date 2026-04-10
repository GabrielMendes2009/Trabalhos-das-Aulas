#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

main(){

	int x=3;
	int *ptr_x = &x;
	int y = *ptr_x;
	
	printf("Sabendo que x = %d", x);
    printf("\nValor apontado por ptr_x = %d", *ptr_x);
    printf("\nMostre que y = %d", y);
}

