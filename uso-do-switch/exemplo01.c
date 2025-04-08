#include <stdio.h>

int main() {
    int variavel;

    printf("Digite um valor:\n");
    scanf("%d", &variavel);

    switch (variavel) {
        case 1:
          printf("Codigo a ser executado se variavel == valor1\n");
          break;//parar a execução
        case 2:
          printf("Codigo a ser executado se variavel == valor2\n");
          break;
        // Você pode adicionar quantos casos forem necessários
        default:
          printf("Codigo a ser executado se nenhum dos casos acima for verdadeiro\n");
      }
}