#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

main(){

	char b='b';
	char *ptr_b = &b;
	char d='d';
	char *ptr_d = &d;
	
	printf("(1) %c\n\n(2) %p\n\n(3) %c", b, *ptr_b, *ptr_d);

}

