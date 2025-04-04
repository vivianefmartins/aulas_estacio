#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero > 0) {
        if(numero % 2 == 0) {
            printf("O numero e PAR\n");
        }else {
            printf("O numero e IMPAR\n");
        }
        printf("Numero positivo\n");
    }else if(numero == 0) {
        printf("Numero e zero\n");
    }else {
        printf("Numero negativo\n");
    }
}