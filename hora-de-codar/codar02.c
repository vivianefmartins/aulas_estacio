#include <stdio.h>

//aula sobre Casting
int main(){
    int nota1, nota2, nota3;
    float media;

    printf("--------Programa de Calcular Media-------\n");

    printf("Digite sua primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite sua segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite sua terceira nota: \n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3; //o (float) esta sendo usado para realizar uma conversão explícita

    printf("A media e: %.1f", media);

    return 0;
}