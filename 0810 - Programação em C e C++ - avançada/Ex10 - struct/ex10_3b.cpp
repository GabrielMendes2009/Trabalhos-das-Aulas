#include <stdio.h>
#include <string.h>

struct Jogador {
    char nome[50];
    int numero;
    int idade;
    int altura;
    int peso;
};

int main() {

    struct Jogador jogadores[100];
    int quantidade;

    printf("Quantos jogadores deseja inserir? ");
    scanf("%d", &quantidade);
    getchar();

    for (int i = 0; i < quantidade; i++) {

        printf("\n--- Jogador %d ---\n", i + 1);

        printf("Nome: ");
        fgets(jogadores[i].nome, 50, stdin);
        jogadores[i].nome[strcspn(jogadores[i].nome, "\n")] = 0;

        printf("Numero: ");
        scanf("%d", &jogadores[i].numero);

        printf("Idade: ");
        scanf("%d", &jogadores[i].idade);

        printf("Altura (cm): ");
        scanf("%d", &jogadores[i].altura);

        printf("Peso (kg): ");
        scanf("%d", &jogadores[i].peso);

        getchar();
    }

    char nomePesquisa[50];
    int encontrado;

    do {
        encontrado = 0;

        printf("\nQual o nome do jogador que deseja procurar? (ou 's' para terminar): ");
        fgets(nomePesquisa, 50, stdin);
        nomePesquisa[strcspn(nomePesquisa, "\n")] = 0;

        if (strcmp(nomePesquisa, "s") == 0) {
            printf("\nFim do programa.\n");
            break;
        }

        for (int i = 0; i < quantidade; i++) {
            if (strcmp(nomePesquisa, jogadores[i].nome) == 0) {

                printf("\nJogador encontrado!\n");
                printf("Nome: %s\n", jogadores[i].nome);
                printf("Numero: %d\n", jogadores[i].numero);
                printf("Idade: %d\n", jogadores[i].idade);
                printf("Altura (cm): %d\n", jogadores[i].altura);
                printf("Peso (kg): %d\n", jogadores[i].peso);

                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("Jogador nao encontrado! Tente novamente.\n");
        }

    } while (1);
}


