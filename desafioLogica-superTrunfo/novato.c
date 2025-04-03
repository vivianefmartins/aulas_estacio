#include <stdio.h>

int main(){ // Função principal do programa. A execução começa aqui.
    char letraEstado1, letraEstado2; // Declara duas variáveis do tipo char para armazenar a letra do estado para a carta 1 e 2.
    char codCarta1[3], codCarta2[3]; // Declara dois arrays de char para armazenar o código da carta (string) para a carta 1 e 2. Tamanho 3 para acomodar dois dígitos e o caractere nulo '\0'.
    char nomeCid1[50], nomeCid2[50]; // Declara dois arrays de char para armazenar o nome da cidade (string) para a carta 1 e 2. Tamanho 50 para evitar buffer overflow.
    int populacao1, populacao2; // Declara duas variáveis do tipo int para armazenar a população para a carta 1 e 2.
    float area1, area2; // Declara duas variáveis do tipo float para armazenar a área para a carta 1 e 2.
    float pib1, pib2; // Declara duas variáveis do tipo float para armazenar o PIB para a carta 1 e 2.
    int pontoTuristico1, pontoTuristico2; // Declara duas variáveis do tipo int para armazenar o número de pontos turísticos para a carta 1 e 2.
    float densidadePopulacional1, densidadePopulacional2;

    float pibPerCapita1, pibPerCapita2;

    printf("--------------------------------\n"); 
    printf("--------------------------------\n"); 
    printf("Por favor, digite abaixo os dados para cadastrar a Carta 1 \n"); // Imprime uma mensagem solicitando a entrada de dados para a Carta 1.

    printf("Digite uma letra de A a H para representar o Estado: \n"); // Imprime uma mensagem solicitando a entrada da letra do estado.
    scanf(" %c", &letraEstado1); // Lê um caractere do teclado e armazena na variável letraEstado1. O espaço em branco antes do %c consome qualquer espaço em branco pendente no buffer de entrada.

    printf("Digite um numero de 01 a 04 para representar o codigo da carta: \n"); // Imprime uma mensagem solicitando a entrada do código da carta.
    scanf("%s", &codCarta1); // Lê uma string do teclado e armazena no array codCarta1.

    printf("Digite o nome da Cidade: \n"); // Imprime uma mensagem solicitando a entrada do nome da cidade.
    scanf("%s", nomeCid1); // Lê uma string do teclado e armazena no array nomeCid1.

    printf("Digite o numero de habitantes da cidade: \n"); // Imprime uma mensagem solicitando a entrada do número de habitantes.
    scanf("%d", &populacao1); // Lê um inteiro do teclado e armazena na variável populacao1.

    printf("Digite a area territorial da cidade: \n"); // Imprime uma mensagem solicitando a entrada da área territorial.
    scanf("%f", &area1); // Lê um float do teclado e armazena na variável area1.

    printf("Digite o produto interno bruto (PIB) da cidade: \n"); // Imprime uma mensagem solicitando a entrada do PIB.
    scanf("%f", &pib1); // Lê um float do teclado e armazena na variável pib1.

    printf("Digite a quantidade de pontos turisticos da cidade: \n"); // Imprime uma mensagem solicitando a entrada da quantidade de pontos turísticos.
    scanf("%d", &pontoTuristico1); // Lê um inteiro do teclado e armazena na variável pontoTuristico1.

    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 =  (float) pib1 /  populacao1;

    printf("--------------------------------\n"); 
    printf("--------------------------------\n"); 
    printf("Por favor, digite abaixo os dados para cadastrar a Carta 2 \n"); // Imprime uma mensagem solicitando a entrada de dados para a Carta 2.

    printf("Digite uma letra de A a H para representar o Estado: \n"); // Imprime uma mensagem solicitando a entrada da letra do estado.
    scanf(" %c", &letraEstado2); // Lê um caractere do teclado e armazena na variável letraEstado2. O espaço em branco antes do %c consome qualquer espaço em branco pendente no buffer de entrada.

    printf("Digite um numero de 01 a 04 para representar o codigo da carta: \n"); // Imprime uma mensagem solicitando a entrada do código da carta.
    scanf("%s", &codCarta2); // Lê uma string do teclado e armazena no array codCarta2.

    printf("Digite o nome da Cidade: \n"); // Imprime uma mensagem solicitando a entrada do nome da cidade.
    scanf("%s", nomeCid2); // Lê uma string do teclado e armazena no array nomeCid2.

    printf("Digite o numero de habitantes da cidade: \n"); // Imprime uma mensagem solicitando a entrada do número de habitantes.
    scanf("%d", &populacao2); // Lê um inteiro do teclado e armazena na variável populacao2.

    printf("Digite a area territorial da cidade: \n"); // Imprime uma mensagem solicitando a entrada da área territorial.
    scanf("%f", &area2); // Lê um float do teclado e armazena na variável area2.

    printf("Digite o produto interno bruto (PIB) da cidade: \n"); // Imprime uma mensagem solicitando a entrada do PIB.
    scanf("%f", &pib2); // Lê um float do teclado e armazena na variável pib2.

    printf("Digite a quantidade de pontos turisticos da cidade: \n"); // Imprime uma mensagem solicitando a entrada da quantidade de pontos turísticos.
    scanf("%d", &pontoTuristico2); // Lê um inteiro do teclado e armazena na variável pontoTuristico2.

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 =  (float) pib2 /  populacao2;
    

    printf("---------------------------------\n"); 
    printf("---------------------------------\n"); 
    printf("Dados coletados da Carta 1\n"); // Imprime uma mensagem indicando os dados da Carta 1.

    printf("Estado: %c\n", letraEstado1); // Imprime a letra do estado da Carta 1.
    printf("Codigo da carta: %c%s\n", letraEstado1, codCarta1); // Imprime o código da carta da Carta 1 (letra do estado + código).
    printf("Nome da cidade: %s\n", nomeCid1); // Imprime o nome da cidade da Carta 1.
    printf("Populacao: %d\n", populacao1); // Imprime a população da Carta 1.
    printf("Area territorial: %.2f Km\n", area1); // Imprime a área territorial da Carta 1 formatada com duas casas decimais.
    printf("PIB: %.2f bilhoes de reais\n", pib1); // Imprime o PIB da Carta 1 formatado com duas casas decimais.
    printf("Numero de pontos turisticos: %d\n", pontoTuristico1); // Imprime o número de pontos turísticos da Carta 1.
    printf("Densidade Populacional: %.2f hab/Km\n", densidadePopulacional1);

    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("---------------------------------\n"); 
    printf("---------------------------------\n"); 
    printf("Dados coletados da Carta 2\n"); // Imprime uma mensagem indicando os dados da Carta 2.

    printf("Estado: %c\n", letraEstado2); // Imprime a letra do estado da Carta 2.
    printf("Codigo da carta: %c%s\n", letraEstado2, codCarta2); // Imprime o código da carta da Carta 2 (letra do estado + código).
    printf("Nome da cidade: %s\n", nomeCid2); // Imprime o nome da cidade da Carta 2.
    printf("Populacao: %d\n", populacao2); // Imprime a população da Carta 2.
    printf("Area territorial: %.2f Km\n", area2); // Imprime a área territorial da Carta 2 formatada com duas casas decimais.
    printf("PIB: %.2f bilhoes de reais\n", pib2); // Imprime o PIB da Carta 2 formatado com duas casas decimais.
    printf("Numero de pontos turisticos: %d\n", pontoTuristico2); // Imprime o número de pontos turísticos da Carta 2.
    printf("Densidade Populacional: %.2f hab/Km\n", densidadePopulacional2);

    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    printf("--------------------------------------------------\n"); 
    printf("--------------------------------------------------\n");
    printf("Comparacao das cartas (Atributo: Pontos Turisticos):\n");

    printf("Carta 1 - %s: %d\n", nomeCid1, pontoTuristico1);
    printf("Carta 2 - %s: %d\n", nomeCid2, pontoTuristico2);

    if(pontoTuristico1 > pontoTuristico2) {
       printf("Resultado: Carta 1 (%s) venceu!\n", nomeCid1);
    }else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCid2);
    }

    return 0; // Indica que o programa foi executado com sucesso.
}