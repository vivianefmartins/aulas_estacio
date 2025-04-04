#include <stdio.h>

int main() {

    int idade, dependentes;
    float renda;

    /*
    A primeira condição idade do usuário está entre 18 a 65 anos.
    A segunda condição se a renda do usuário é menor que 3000.
    A terceira condição verifica se o número de dependentes é maior que 2.
    */

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda);

    printf("Digite o numero de seus dependentes: ");
    scanf("%d", &dependentes);

    if(idade >= 18 && idade < 65) {
        if(renda < 3000) {
            if(dependentes > 2) {
                printf("Voce atende a todos os criterios\n");
            }else {
                printf("Voce nao atende ao criterio de dependentes\n");
            }
        }else {
            printf("Voce nao atende ao criterio de renda\n");
        }
    }else {
        printf("Voce nao atende aos criterios de idade\n");
    }
}