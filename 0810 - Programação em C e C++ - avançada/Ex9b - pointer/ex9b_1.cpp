#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

main(){

	char ch='c';
	char *pchar = &ch;
	int i=20;
	int *pint = &i;
	float f=1.20000;
	float *pfloat = &f;
	
	char *stringzinha="Isto e uma string :)";
	
	printf("[%c], [%d], [%f], [%s]", *pchar, *pint, *pfloat, stringzinha);

}

