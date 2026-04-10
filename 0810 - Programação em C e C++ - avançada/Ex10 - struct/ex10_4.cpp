#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[50];
    char autor[50];
    char assunto[50];
    int id;
};

int main() {

    struct Livro livro1;

    strcpy(livro1.titulo, "Linguagem C");
    strcpy(livro1.autor, "Luis Damas");
    strcpy(livro1.assunto, "Programacao em C");

    livro1.id = 82344544;

    printf("Titulo do livro: %s\n", livro1.titulo);
    printf("Autor do livro: %s\n", livro1.autor);
    printf("Assunto do livro: %s\n", livro1.assunto);
    printf("ID do livro: %d\n", livro1.id);

}
