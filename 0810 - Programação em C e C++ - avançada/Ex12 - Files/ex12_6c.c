#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    FILE *fp;
    char nome[25];
    char nomeFi[50];
    char caminho[100] = "E:\\Aulas\\";

    printf("Insira o nome do ficheiro (sem extensao): ");
    gets(nomeFi);

    // Junta o caminho, nome e a extensão
    strcat(caminho, nomeFi);
    strcat(caminho, ".txt");

    fp = fopen(caminho, "w");

    printf("Insira o seu nome: ");
    gets(nome);

    fprintf(fp, "O seu nome é %s", nome);
    printf("\nO seu nome é %s", nome);

    fclose(fp);

    system(caminho);
}
