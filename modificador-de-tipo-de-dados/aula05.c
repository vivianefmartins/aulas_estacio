#include <stdio.h>

int main(){
    short int numeroPequeno = 32767; //Valor máximo de short int
    printf("Numero pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; //Valor maior que o máximo de short int
    printf("Numero pequeno atualizado (short int): %d\n", numeroPequeno);

    printf("\n*** Tamanho das variáveis ***\n");
    printf("Short int: %lu B - int: %lu B - long int: %lu B\n", sizeof(int), sizeof(short int), sizeof(long int));
    printf("Float: %lu B - Double: %lu B - long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));

    return 0;
}