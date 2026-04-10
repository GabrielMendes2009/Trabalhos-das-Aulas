#include <stdio.h>

struct Jogador {
    int numero;
    int idade;
    int altura;
    int peso;
};

int perguntarJogador() {
    int opcao;
    printf("Qual o jogador que deseja ver? [1, 2, 0 - sair]: ");
    scanf("%d", &opcao);
    return opcao;
}

int main() {

    struct Jogador j1 = {1, 20, 180, 90};
    struct Jogador j2 = {2, 22, 175, 80};

    int opcao;

    do {
        opcao = perguntarJogador();

        if (opcao == 1) {
            printf("\nNo Jogador = %d\n", j1.numero);
            printf("Idade = %d\n", j1.idade);
            printf("Altura (cm) = %d\n", j1.altura);
            printf("Peso (kg) = %d\n", j1.peso);
        }
        else if (opcao == 2) {
            printf("\nNo Jogador = %d\n", j2.numero);
            printf("Idade = %d\n", j2.idade);
            printf("Altura (cm) = %d\n", j2.altura);
            printf("Peso (kg) = %d\n", j2.peso);
        }
        else if (opcao == 0) {
            printf("\nFim do programa.\n");
        }
        else {
            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);
    
}
