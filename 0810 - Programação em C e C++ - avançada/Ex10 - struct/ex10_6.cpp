#include <stdio.h>

struct Equipamento {
    int ano;
    float custo;
    char marca_cpu[50];
    int velocidade_cpu;
};

int main() {
    struct Equipamento equip;

    printf("Qual a marca do CPU que tem no seu computador? ");
    scanf("%s", equip.marca_cpu);

    printf("Qual a velocidade (MHz) do seu CPU? ");
    scanf("%d", &equip.velocidade_cpu);

    printf("Qual o ano de compra do seu computador? ");
    scanf("%d", &equip.ano);

    printf("Qual o custo do seu computador? ");
    scanf("%f", &equip.custo);

    printf("\nDados do equipamento\n");
    printf("---------------------\n");
    printf("Ano: %d\n", equip.ano);
    printf("Custo: %.2f euros\n", equip.custo);
    printf("Marca do CPU: %s\n", equip.marca_cpu);
    printf("Velocidade do CPU: %d MHz\n", equip.velocidade_cpu);

}
