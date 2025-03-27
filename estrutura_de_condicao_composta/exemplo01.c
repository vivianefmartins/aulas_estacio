#include <stdio.h>

int main(){
    int numero1, numero2;

    numero1 = 50;
    numero2 = 50;

    if (numero1 >= numero2) {
        //bloco de código a ser executado se a condição for verdadeira
        printf("Numero 1 e maior ou igual ao numero 2");
    }else {
        //bloco de código a ser executado se a condição for falsa
        printf("O numero1 e menor que o numero2\n");
    }

    return 0;

}