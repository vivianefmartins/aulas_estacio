#include <stdio.h>

int main() {
    int num1 = 40, num2 = 60, maior;

    num1 > num2 ? (maior = num1) : (maior = num2);

    printf("O numero maior e: %d", maior);

    return 0;
}