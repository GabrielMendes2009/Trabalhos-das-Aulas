#include <stdio.h>
#include <string.h>

int main() {
    char nome[] = "Carlos";
    int idade = 30;
    char sexo[] = "Masculino";
    char estado_civil[] = "Solteiro";
    float salario = 1000.00;
    char mes_salario[] = "Maio";

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Sexo: %s\n", sexo);
    printf("Estado Civil: %s\n", estado_civil);
    printf("Salario: %.2f\n", salario);
    printf("Mes do Salario: %s\n", mes_salario);
}
