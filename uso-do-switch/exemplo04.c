#include <stdio.h>

int main() {
    int opcao;

    printf("-----Menu Principal-----\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Execucao do jogo\n");
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