#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    FILE *fp;
    char nome[50], localidade[75];
    int idade, batata, i=0;

    printf("Indique quantas vezes pretende preencher o inquérito? ");
    scanf("%d", &batata);

    do{
        getchar();

        fp=fopen("C:\\Users\\Userpl137pc07\\Documents\\pipl0924\\Ex12_4.txt", "a");

        printf("Nome: ");
        gets(nome);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Localidade: ");
        scanf("%s", &localidade);

        fprintf(fp, "\n=== REGISTRO ===\n");
        fprintf(fp, "Nome: %s\n", nome);
        fprintf(fp, "Idade: %d\n", idade);
        fprintf(fp, "Localidade: %s\n", localidade);

        printf("\n--- DADOS INSERIDOS ---\n");
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Localidade: %s\n", localidade);

        printf("------------------------------\n");
        fprintf(fp, "------------------------------\n");

        fclose(fp);

        i++;

    } while(i < batata);

    system("C:\\Users\\Userpl137pc07\\Documents\\pipl0924\\Ex12_4.txt");

    return 0;
}
