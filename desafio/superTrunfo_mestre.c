#include <stdio.h> 

int main(){ 
    char letraEstado1, letraEstado2; 
    char codCarta1[3], codCarta2[3]; 
    char nomeCid1[50], nomeCid2[50]; 
    unsigned long long int populacao1, populacao2; 
    float area1, area2; 
    float pib1, pib2; 
    int pontoTuristico1, pontoTuristico2; 
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    float inversoDensidade1, inversoDensidade2;

    printf("--------------------------------\n"); 
    printf("--------------------------------\n"); 
    printf("Por favor, digite abaixo os dados para cadastrar a Carta 1 \n"); 

    printf("Digite uma letra de A a H para representar o Estado: \n"); 
    scanf(" %c", &letraEstado1); 

    printf("Digite um numero de 01 a 04 para representar o codigo da carta: \n"); 
    scanf("%s", &codCarta1); 

    printf("Digite o nome da Cidade: \n"); 
    scanf("%s", nomeCid1); 

    printf("Digite o numero de habitantes da cidade: \n"); 
    scanf("%d", &populacao1); 

    printf("Digite a area territorial da cidade: \n"); 
    scanf("%f", &area1); 

    printf("Digite o produto interno bruto (PIB) da cidade: \n"); 
    scanf("%f", &pib1); 

    printf("Digite a quantidade de pontos turisticos da cidade: \n"); 
    scanf("%d", &pontoTuristico1); 

    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 =  (float) pib1 /  populacao1;
    inversoDensidade1 = 1 / densidadePopulacional1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontoTuristico1 + inversoDensidade1 + pibPerCapita1;

    printf("--------------------------------\n"); 
    printf("--------------------------------\n"); 
    printf("Por favor, digite abaixo os dados para cadastrar a Carta 2 \n"); 

    printf("Digite uma letra de A a H para representar o Estado: \n"); 
    scanf(" %c", &letraEstado2); 

    printf("Digite um numero de 01 a 04 para representar o codigo da carta: \n"); 
    scanf("%s", &codCarta2); 

    printf("Digite o nome da Cidade: \n"); 
    scanf("%s", nomeCid2); 

    printf("Digite o numero de habitantes da cidade: \n"); 
    scanf("%d", &populacao2); 

    printf("Digite a area territorial da cidade: \n"); 
    scanf("%f", &area2); 

    printf("Digite o produto interno bruto (PIB) da cidade: \n"); 
    scanf("%f", &pib2); 

    printf("Digite a quantidade de pontos turisticos da cidade: \n"); 
    scanf("%d", &pontoTuristico2); 

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 =  (float) pib2 /  populacao2;
    inversoDensidade2 = 1 / densidadePopulacional2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontoTuristico2 + inversoDensidade2 + pibPerCapita2;
    

    printf("---------------------------------\n"); 
    printf("---------------------------------\n"); 
    printf("Dados coletados da Carta 1\n"); 

    printf("Estado: %c\n", letraEstado1); 
    printf("Codigo da carta: %c%s\n", letraEstado1, codCarta1); 
    printf("Nome da cidade: %s\n", nomeCid1); 
    printf("Populacao: %d\n", populacao1); 
    printf("Area territorial: %.2f Km\n", area1); 
    printf("PIB: %.2f bilhoes de reais\n", pib1); 
    printf("Numero de pontos turisticos: %d\n", pontoTuristico1); 
    printf("Densidade Populacional: %.2f hab/Km\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super poder: %.3f\n", superPoder1);


    printf("---------------------------------\n"); 
    printf("---------------------------------\n"); 
    printf("Dados coletados da Carta 2\n"); 

    printf("Estado: %c\n", letraEstado2); 
    printf("Codigo da carta: %c%s\n", letraEstado2, codCarta2); 
    printf("Nome da cidade: %s\n", nomeCid2); 
    printf("Populacao: %d\n", populacao2); 
    printf("Area territorial: %.2f Km\n", area2); 
    printf("PIB: %.2f bilhoes de reais\n", pib2); 
    printf("Numero de pontos turisticos: %d\n", pontoTuristico2); 
    printf("Densidade Populacional: %.2f hab/Km\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super poder: %.3f\n", superPoder2);



    printf("---------------------------------\n"); 
    printf("---------------------------------\n");
    printf("------Comparacao das cartas------\n");

    printf("Populacao: Carta 1 venceu Carta 2? - %d\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu Carta 2? - %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu Carta 2? - %d\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu Carta 2? - %d\n", pontoTuristico1 > pontoTuristico2);
    printf("Densidade Populacional: Carta 1 venceu Carta 2? - %d\n", inversoDensidade1 > inversoDensidade2);
    printf("PIB per Capita: Carta 1 venceu Carta 2? - %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu Carta 2? - %d\n", superPoder1 > superPoder2);
    

    return 0; 
}