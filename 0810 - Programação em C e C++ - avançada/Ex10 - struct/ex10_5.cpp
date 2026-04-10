#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    struct Data data;

    data.dia = 18;
    data.mes = 02;
    data.ano = 2026;

    printf("Hoje é dia %d/%d/%d\n", data.dia, data.mes, data.ano);

}
