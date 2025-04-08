#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao;
    int numeroSecreto, palpite;

    printf("-----Menu Principal-----\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            srand(time(0));
            numeroSecreto = rand() % 10;
            printf("Digite um numero de 0 a 9: ");
            scanf("%d", &palpite);
            
            if(numeroSecreto == palpite) {
                printf("Voce acertou!\n");
                printf("Numero secreto: %d\n", numeroSecreto);
            }else {
                printf("Voce errou!\n");
                printf("Numero secreto: %d\n", numeroSecreto);
            }
            
            break;
        case 2:
            printf("As regras sao ...\n");
            break;
        case 3:
            printf("Saindo do jogo\n");
            break;
        default:
            printf("Opcao Invalida!\n");
            break;
    }
}