#include <stdio.h>
#include <locale.h>
#include <windows.h>

main(){

	SetConsoleOutputCP(65001);
	
	int num1, num2;
    char op;
    float resultado;

    printf("Digite uma expressão (ex: 3+5, 8/2): ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '/':
            if (num2 == 0) {
                printf("Erro: divisão por zero não permitida!\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            }
            break;

        default:
            printf("Erro: operador inválido! Use apenas +, -, * ou /.\n");
    }
		
}