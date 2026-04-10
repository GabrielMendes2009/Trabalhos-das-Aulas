#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

main(){

	int dez=10;
	int *int_pointer = &dez;
	int x = *int_pointer;
	
	printf("variavel = %d, x = %d", dez, x);

}

