#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Quantos itens tem no estoque: \n");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("A temperatura esta alta.\n");
    }else {
        printf("A temperatura esta dentro dos parametros.\n");
    }

    if(umidade > 50){
        printf("Umidade elevada!\n");
    }else {
        printf("Umidade dentro dos parametros!\n");
    }

    if(estoque < estoqueMinimo) {
        printf("Estoque abaixo do minino!\n");
    }else {
        printf("Estoque normal!\n");
    }

    return 0;
}