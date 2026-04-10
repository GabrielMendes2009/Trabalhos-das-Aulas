//Ex 12_1 - files
//Solicitar um nome ao ultilizador e armazenar num ficheiro *.txt

#include <stdio.h>
#include <windows.h>

int main(){
    FILE *fp;
    char nome[25];

    fp=fopen("C:\\Users\\Userpl137pc07\\Documents\\pipl0924\\dados.txt", "w");

    printf("Insira o seu nome: ");
    gets (nome);

    fprintf(fp, "O seu nome é %s", nome);

    fclose (fp);

    system("C:\\Users\\Userpl137pc07\\Documents\\pipl0924\\dados.txt");
}
