#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    FILE *fp;
    int num;
    char letra[2];

    do {
        printf("Introduza um número entre 1 e 9: ");
        scanf("%d", &num);
    } while (num < 1 || num > 9);

    printf("Quer acrescentar informação (a), ou novo ficheiro (w)? ");
    scanf(" %c", &letra[0]);

    fp = fopen("E:\\Aulas\\tabuada.txt", letra);

    for (int i = 1; i < 11; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
        fprintf(fp, "%d x %d = %d\n", num, i, num * i);
    }

    fclose(fp);
    
    system("E:\\Aulas\\tabuada.txt");
}
