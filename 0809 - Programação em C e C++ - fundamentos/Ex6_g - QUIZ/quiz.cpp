/*
    Título do Projeto: Quiz sobre O Pequeno Príncipe
    Autor: Gabriel Mendes
    Data e Hora: 10/11/2025 - 08:16
    Descrição:
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main();

int numJogos = 0;

void lerResposta(char *resposta) {

    SetConsoleOutputCP(65001);

    while (1) {
        *resposta = _getch();
        if (*resposta == 'v' || *resposta == 'V' || *resposta == 'f' || *resposta == 'F') {
            break;
        } else {
            printf("\a");
            printf("\nResposta invalida! Por favor, insira 'V' para Verdadeiro ou 'F' para Falso: ");
        }
    }
}

void inicial(){

    SetConsoleOutputCP(65001);

    system("cls");

    char resposta, ver, sair, voltar;
    int certo, errado;

    certo = 0;
    errado = 0;

    for (int i = 1; i<=45; i++){
            printf("-");
        }

    printf("\nNivel Inicial\n");
    for (int i = 1; i < 14; i++){
        printf("*");
    }

    printf("\n");

    printf("1- O narrador era piloto de aviao. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n2- O Pequeno Principe vivia sozinho no seu planeta, o Asteroide B-612. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n3- A rosa do principe era muito humilde e nunca exigia nada. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n4- O principe cuidava de tres vulcoes em seu planeta. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n5- O baoba era uma planta perigosa porque podia destruir o planeta. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n6- O principe pediu ao narrador que desenhasse uma ovelha. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n7- O Pequeno Principe encontra o narrador no deserto do Saara. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n8- O rei que o principe encontra mandava em todos os planetas do universo. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n9- O acendedor de lampioes tinha um trabalho considerado inutil. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n10- O geografo nunca viajava para explorar os lugares que escrevia. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\nPretendes ver o numero de respostas certas e erradas (s/n)? " );
    ver = _getch();
    if (ver == 's' || ver == 'S'){
        printf("\nCertas: %d\nErradas: %d", certo, errado);
    }

    printf("\n");

    printf("Pretendes voltar a jogar (s/n)? ");
    voltar = _getch();
    if (voltar == 's' || voltar == 'S'){
            numJogos += 1;
            main();
        }
        else{
            printf("\nMuito obrigado por jogar!!!\n");
            numJogos+=1;
            printf("Voce jogou %d vez(es).\n", numJogos);
        }

}

void avancado(){

    SetConsoleOutputCP(65001);

    system("cls");

    char resposta, ver, sair, voltar;
    int certo, errado;

    certo = 0;
    errado = 0;

    for (int i = 1; i<=45; i++){
            printf("-");
        }

    printf("\nNível Avançado\n");
    for (int i = 1; i < 14; i++){
        printf("*");
    }

    printf("\n");

    printf("1- A rosa simboliza apenas fragilidade, sem representar orgulho ou amor. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n2- A raposa ensina ao principe que “o essencial é invisivel aos olhos”. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n3- A serpente e mostrada somente como uma ameaca mortal, sem funçao simbolica. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n4- O principe percebe que sua rosa e unica nao por ser a mais bonita, mas porque ele a cativou. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n5- O narrador critica os adultos por valorizarem numeros mais do que sentimentos. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n6- O poço no deserto representa esperança e descoberta interior. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n7- O principe percebe que o aviador e uma figura parecida com os outros adultos retratados no livro. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n8- Cada planeta visitado pelo principe representa um tipo diferente de comportamento humano. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n9- O Pequeno Principe retorna ao seu planeta fisicamente, sem nenhuma ambiguidade. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("\n10- O livro mistura elementos de fabula, filosofia e critica social. ");
    lerResposta(&resposta);
    if (resposta == 'v' || resposta == 'V'){
        certo += 1;
    } else {
        errado += 1;
    }

    printf("\n");

    printf("Pretendes ver o nº de respostas certas e erradas (s/n)? " );
    ver = _getch();
    if (ver == 's' || ver == 'S'){
        printf("\nCertas: %d\nErradas: %d", certo, errado);
    }

    printf("\n");

    printf("Pretendes voltar a jogar (s/n)? ");
    voltar = _getch();
    if (voltar == 's' || voltar == 'S'){
            numJogos += 1;
            main();
        }
    else{
        printf("\nMuito obrigado por jogar!!!\n");
        numJogos+=1;
        printf("Você jogou %d vez(es).\n", numJogos);
    }
}

int main(){

    SetConsoleOutputCP(65001);

    system("cls");

    char dificuldade, sair;

    for (int i = 1; i < 46; i++){
            printf("*");
        }

        printf("\n* Quiz v1.0 - Gabriel Mendes | Menu Inicial *\n");

        for (int i = 1; i < 42; i++){
            printf("*");
        }

        printf("2025\n");

    do{
        for (int i = 1; i<=45; i++){
            printf("-");
        }

        printf("\nQual o nivel de dificuldade que pretendes jogar (inicial - i / avançado - a)? ");
        dificuldade = _getch();
        printf("%c\n", dificuldade);

        for (int i = 1; i<=45; i++){
            printf("-");
        }

        printf("\nAntes de comecar, leia atentamente as instrucoes:\n1- O quiz é composto por perguntas de afirmacoes, e voce deve indicar se cada uma e Verdadeira (V) ou Falsa (F).\n2- Leia cada frase com atencao, pois algumas podem parecer verdadeiras a primeira vista, mas contem detalhes importantes.\n3- Nao ha limite de tempo, mas recomenda-se responder com tranquilidade e tentar lembrar dos detalhes do livro.\n4- Evite consultar a obra durante o quiz para testar realmente seus conhecimentos.\n5- Ao final, você pode conferir o gabarito ou pedir explicações detalhadas de cada afirmacao.\n6- Este quiz inclui perguntas de nivel inicial e avancado, cobrindo desde fatos basicos da historia ate interpretacoes mais profundas e simbolicas.\n---Boa sorte e lembre-se: «O essencial é invisivel aos olhos.»");

        printf("\nDesejas sair do programa (sim - s / não - n)? ");
        sair = _getch();

        if (dificuldade == 'i'){
            inicial();
        }
        else{
            avancado();
        }

    }while (sair == 's');
}
