//Ex 12_2 - files
//Alterar o exercício anterior por forma a que seja, solicitado se quer novo ficheiro ou acrescentar a informação ao ficheiro existente

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

int main(){
    FILE *fp;
    char letra[2], nome[25];

    printf("Quer acresentar informação (a), ou novo ficheiro (w)? ");
    gets(letra);

    printf("Insira o seu nome: ");
    gets(nome);

    fp=fopen("C:\\Users\\Userpl137pc07\\Documents\\pipl0924\\dados.txt", letra);
    fprintf(fp, "\nO seu nome é %s", nome);
    fclose (fp);

    system("C:\\Users\\Userpl137pc07\\Documents\\pipl0924\\dados.txt");
}


