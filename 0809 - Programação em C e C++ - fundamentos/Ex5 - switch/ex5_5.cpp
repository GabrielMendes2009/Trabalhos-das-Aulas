#include <stdio.h>
#include <locale.h>
#include <windows.h>

main(){

	SetConsoleOutputCP(65001);
	
	char c;
    
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
         printf("O caractere '%c' é alfabético.\n", c);
    }
    else if (c >= '0' && c <= '9') {
         printf("O caractere '%c' é um dígito.\n", c);
    }
    else {
         printf("O caractere '%c' é especial.\n", c);
    }
	
}