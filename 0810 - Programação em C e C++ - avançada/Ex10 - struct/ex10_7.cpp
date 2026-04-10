#include <stdio.h>
#include <string.h>

struct Usuario {
    char nome[50];
    char apelido[50];
    char telefone[20];
};

int main() {
    struct Usuario usuarios[4];

    for (int i = 0; i < 4; i++) {
        printf("Insira o seu primeiro nome: ");
        scanf("%s", usuarios[i].nome);

        printf("Insira o seu apelido: ");
        scanf("%s", usuarios[i].apelido);

        printf("Insira o seu numero tim: ");
        scanf("%s", usuarios[i].telefone);

        printf("\nNome completo: %s %s (o seu nome tem %lu caracteres)\n", usuarios[i].nome, usuarios[i].apelido, strlen(usuarios[i].nome) + strlen(usuarios[i].apelido));
        printf("Tlm: %s\n\n", usuarios[i].telefone);
    }

}
