#include <stdio.h>

int main() {
    int idade = 12;
    int resultado;

    //condição ? verdadeiro : falso

    //idade >= 18 ? printf("Voce e MAIOR de idade!\n") : printf("Voce e MENOR de idade!\n");

    resultado = idade >= 18 ? 1 : 0;

    if(resultado == 1) {
        printf("Voce e MAIOR de idade!\n");
    }else {
        printf("Voce e MENOR de idade!\n");
    }
}