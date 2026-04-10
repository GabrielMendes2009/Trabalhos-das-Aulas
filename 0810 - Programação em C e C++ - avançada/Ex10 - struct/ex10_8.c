#include <stdio.h>

void exibir_filmes(char filmes[3][100], int anos[3]);

int main() {
    char filmes[3][100];
    int anos[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do filme: ");
        fgets(filmes[i], sizeof(filmes[i]), stdin);
        printf("Digite o ano de realização do filme: ");
        scanf("%d", &anos[i]);
        getchar();
    }

    exibir_filmes(filmes, anos);
}

void exibir_filmes(char filmes[3][100], int anos[3]) {
    printf("\nOs filmes inseridos foram:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s (%d)\n", filmes[i], anos[i]);
    }
}
