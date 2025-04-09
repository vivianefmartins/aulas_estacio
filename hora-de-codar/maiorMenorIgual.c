#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1;//Número entre 1 e 100

    //Início do jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Voce deve escolher um numero o tipo de comparcao.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparacao: ");
    scanf(" %c", &tipoComparacao);

    printf("Escolha seu numero entre 1 e 100: ");
    scanf("%d", &numeroJogador);


    switch(tipoComparacao) {
        case 'M':
        case 'm':
            printf("Voce escolheu a opcao MAIOR\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            printf("O numero do computador e: %d e voce escolheu o numero: %d\n", numeroComputador, numeroJogador);
            break;

        case 'N':
        case 'n':
        printf("Voce escolheu a opcao MENOR\n");
            resultado = numeroJogador < numeroComputador ? 1 : 0;
            printf("O numero do computador e: %d e voce escolheu o numero: %d\n", numeroComputador, numeroJogador);
            break;

        case 'I':
        case 'i':
            printf("Voce escolheu a opcao IGUAL\n");
            resultado = numeroJogador == numeroComputador ? 1 : 0;
            printf("O numero do computador e: %d e voce escolheu o numero: %d\n", numeroComputador, numeroJogador);
            break;

        default:
            printf("Opcao de jogo invalida!\n");
            break;
    }

    if(resultado == 1) {
        printf("Parabens, voce venceu!\n");
    }else {
        printf("Infelizmente voce perdeu!\n");
    }


    return 0;
}