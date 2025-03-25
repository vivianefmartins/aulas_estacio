#include <stdio.h>

int main(){
    //Declarar variáveis Produto, u i estoque, double valor unitario, double valor total  e
    //u i quantidade minima
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;//estamos usando unsigned porque como se trata de um estoque, o valor não pode ser negativo.
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;
    
    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    //Exibir as informações dos produtos
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoB, estoqueB, valorB);

    //Comparações com o valor mínimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    //Comparações entre os valores totais dos produtos
    printf("O valor total de A(R$ %.2f) e maior que o valor total de B(R$ %.2f)?: %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));
}