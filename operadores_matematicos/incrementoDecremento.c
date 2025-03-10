#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-incremento (++a)
    Pós-incremento (a++)
    Decremento (--)
    Pré-decremento (--a)
    Pós-decremento (a--)
    */

    int numero1 = 1, resultado;

    printf("Antes do incremento: %d\n", numero1);
    //numero1 = numero1 + 1;
    //numero1 += 1;
    resultado = numero1++;
    //printf("Depois do incremento: %d\n", numero1);
    printf("Apos Pos-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Apos Pre-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
    //numero1 = numero1 - 1;
    //numero1 -= 1;
    //numero1--;
    //printf("Depois do decremento: %d\n", numero1);

    resultado = numero1--;
    printf("Apos Pos-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Apos Pre-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

}