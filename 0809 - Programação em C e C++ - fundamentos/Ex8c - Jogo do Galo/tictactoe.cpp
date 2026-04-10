/*

Nome: Gabriel Mendes
Copyright: Todos os Direitos Reservados | Gabriel Mendes
Author: Gabriel Mendes
Date: 10/12/2025
Description: Tic Tac Toe | Jogo do Galo | Jogo da Velha

*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

// Declaração das variáveis globais
int grelha[3][3];  // Array que representa o tabuleiro do jogo
int jogador1Ganho = 0, jogador2Ganho = 0; // Contagem de vitórias para cada jogador
int jogando = 1; // Controla se o jogo tá em andamento ou não

void inicializarGrelha();
void exibirGrelha();
int verificarVitoria();
void jogarContraComputador();
void resetarJogo();
void exibirSplashScreen();
void exibirMenu();

// Função para inicializar o tabuleiro
void inicializarGrelha() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            grelha[i][j] = 0;
        }
    }
}

// Função para exibir o tabuleiro
void exibirGrelha() {
    system("cls"); // Limpar a tela
    printf(" ____  __  ___    ____  __    ___    ____  __  ____  \n");
    printf("(_  _)(  )/ __)  (_  _)/ _\\  / __)  (_  _)/  \\(  __) \n");
    printf("  )(   )(( (__     )( /    \\( (__     )( (  O )) _)  \n");
    printf(" (__) (__)\\\___)   (__)\\_/\\_/ \\___)   (__) \\__/(____) \n");
    printf("                                                      \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grelha[i][j] == 0) {
                printf(" - ");  // Espaço vazio
            } else if (grelha[i][j] == 1) {
                printf(" X ");  // Jogador 1 (X)
            } else {
                printf(" O ");  // Jogador 2 (O)
            }
        }
        printf("\n");
    }
}

// Função para verificar a vitória
int verificarVitoria() {
    // Verifica linhas, colunas e diagonais
    for (int i = 0; i < 3; i++) {
        // Verifica linhas
        if (grelha[i][0] == grelha[i][1] && grelha[i][1] == grelha[i][2] && grelha[i][0] != 0)
            return grelha[i][0];
        // Verifica colunas
        if (grelha[0][i] == grelha[1][i] && grelha[1][i] == grelha[2][i] && grelha[0][i] != 0)
            return grelha[0][i];
    }

    // Verifica diagonais
    if (grelha[0][0] == grelha[1][1] && grelha[1][1] == grelha[2][2] && grelha[0][0] != 0)
        return grelha[0][0];
    if (grelha[0][2] == grelha[1][1] && grelha[1][1] == grelha[2][0] && grelha[0][2] != 0)
        return grelha[0][2];

    return 0; // Não houve vencedor ainda
}

// Função para jogar contra o computador
void jogarContraComputador(){
    int linha, coluna;
    // Jogador 1 sempre começa
    for (int turno = 1; jogando; turno++) {
        exibirGrelha();
        if (turno % 2 != 0) {
            // Jogador 1 (X) faz a jogada
            printf("\nJogador 1 (X) - Faça sua jogada\n");
            printf("Escolha uma linha e coluna (ex: 0 1): ");
            scanf("%d %d", &linha, &coluna);

            // Verificando se a entrada está dentro dos limites e se a posição está disponível
            if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
                printf("Entrada inválida!\nEscolha uma linha e coluna entre 0 e 2.\n");
                Sleep(1500);
                Beep(750, 300); // Som de erro
                turno--; // Retorna ao turno anterior
            } else if (grelha[linha][coluna] != 0) {
                printf("Posição já ocupada!\nTente novamente.\n");
                Sleep(1500);
                Beep(750, 300); // Som de erro
                turno--; // Retorna ao turno anterior
            } else {
                grelha[linha][coluna] = 1;
            }
        } else {
            // Computador joga (Jogador 2 - O)
            printf("\nJogador 2 (O) - Computador fazendo jogada...\n");
            do {
                linha = rand() % 3;
                coluna = rand() % 3;
            } while (grelha[linha][coluna] != 0); // Garantir que a jogada seja em uma célula vazia
            grelha[linha][coluna] = 2;
        }

        // Verifica se houve vencedor
        int vencedor = verificarVitoria();
        if (vencedor == 1) {
            jogador1Ganho++;
            printf("\nJogador 1 (X) Venceu!\n");
            break;
        } else if (vencedor == 2) {
            jogador2Ganho++;
            printf("\nJogador 2 (O) Venceu!\n");
            break;
        }

        // Verifica se houve empate (se todas as células estiverem preenchidas)
        int empate = 1;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (grelha[i][j] == 0) {
                    empate = 0;
                }
            }
        }
        if (empate) {
            printf("\nEmpate!\n");
            break;
        }
        Sleep(1000);
    }
    Sleep(1500);
}

// Função para exibir a tela inicial
void exibirSplashScreen() {
    system("cls");
    printf("*****************************************************\n");
    printf(" ____  __  ___    ____  __    ___    ____  __  ____  \n");
    printf("(_  _)(  )/ __)  (_  _)/ _\\  / __)  (_  _)/  \\(  __) \n");
    printf("  )(   )(( (__     )( /    \\( (__     )( (  O )) _)  \n");
    printf(" (__) (__)\\\___)   (__)\\_/\\_/ \\___)   (__) \\__/(____) \n");
    printf("                                                      \n");
    printf("*****************************************************\n");
    Sleep(3000);  // Pausa por 3 segundos
}

// Função para exibir o menu inicial
void exibirMenu() {
    int opcao;
    do {
        system("cls");
        printf(" _  _  ____  __ _  _  _ \n");
        printf("( \\/ )(  __)(  ( \\/ )( \\\ \n");
        printf("/ \\\/ \\ ) _) /    /) \\/ ( \n");
        printf("\\_)(_/(____)\\\_)__)\\____/ \n");
        printf("                         \n");
        printf("1. Iniciar novo jogo\n");
        printf("2. Exibir vitorias\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        opcao = getch();   // NÃO precisa de Enter

        switch (opcao) {
            case '1':
                resetarJogo();
                jogarContraComputador();
                break;

            case '2':
                printf("\nJogador 1 (X): %d vitorias\n", jogador1Ganho);
                printf("Jogador 2 (O): %d vitorias\n", jogador2Ganho);
                printf("\nPressione qualquer tecla para voltar ao menu...\n");
                getch();
                break;

            case '3':
                printf("\nSaindo do jogo...\n");
                Sleep(1500);
                break;

            default:
                printf("\nOpcao invalida!\n");
                Beep(750, 300);
                Sleep(1200);
                break;
        }
    } while (opcao != 3);
}

// Função para reiniciar o jogo
void resetarJogo() {
    inicializarGrelha();
    jogando = 1;
}

int main() {
    exibirSplashScreen();
    exibirMenu();
    return 0;
}

