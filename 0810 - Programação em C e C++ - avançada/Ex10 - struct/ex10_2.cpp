#include <stdio.h>
#include <string.h>

int main() {
    int quantidade_pessoas;
    
	printf("Quantos inputs desejas? ");
	scanf("%d",&quantidade_pessoas);
    
    struct {
        char nome[50];
        char endereco[50];
        char telefone[12]; // Alterado para char, pois é uma string
    } pessoas[quantidade_pessoas];

    printf("=== cadastro de %d pessoas ===\n\n", quantidade_pessoas);
	
	getchar();
    for (int i = 0; i < quantidade_pessoas; i++) {
		printf("\n--- pessoa %d ---\n", i + 1);

        printf("Digite seu nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = 0; // Corrigido para remover \n

        printf("Digite seu endereco: ");
        fgets(pessoas[i].endereco, sizeof(pessoas[i].endereco), stdin);
        pessoas[i].endereco[strcspn(pessoas[i].endereco, "\n")] = 0; // Corrigido para remover \n

        printf("Digite seu telefone: ");
        fgets(pessoas[i].telefone, sizeof(pessoas[i].telefone), stdin);
        pessoas[i].telefone[strcspn(pessoas[i].telefone, "\n")] = 0; // Corrigido para remover \n
    }

    printf("\n=== dados cadastrados ===\n");
    for (int i = 0; i < quantidade_pessoas; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("  Nome: %s\n", pessoas[i].nome);
        printf("  Endereco: %s\n", pessoas[i].endereco);
        printf("  Telefone: %s\n", pessoas[i].telefone); // Exibindo como string
        printf("------------------------\n");
    }
}
