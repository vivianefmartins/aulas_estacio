#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída, que fornece funções como printf e scanf.

int main(){ // Define a função principal do programa. A execução do programa começa aqui.
    char letraEstado1, letraEstado2; // Declara duas variáveis do tipo char para armazenar a letra do estado para a Carta 1 e Carta 2.
    char codCarta1[3], codCarta2[3]; // Declara dois arrays de char para armazenar o código da carta (até 2 dígitos + '\0') para a Carta 1 e Carta 2.
    char nomeCid1[50], nomeCid2[50]; // Declara dois arrays de char para armazenar o nome da cidade (até 49 caracteres + '\0') para a Carta 1 e Carta 2.
    unsigned long long int populacao1, populacao2; // Declara duas variáveis do tipo unsigned long long int para armazenar a população da cidade para a Carta 1 e Carta 2. Usar unsigned garante que não haverá sinal negativo.
    float area1, area2; // Declara duas variáveis do tipo float para armazenar a área territorial da cidade para a Carta 1 e Carta 2.
    float pib1, pib2; // Declara duas variáveis do tipo float para armazenar o Produto Interno Bruto (PIB) da cidade para a Carta 1 e Carta 2.
    int pontoTuristico1, pontoTuristico2; // Declara duas variáveis do tipo int para armazenar a quantidade de pontos turísticos da cidade para a Carta 1 e Carta 2.
    float densidadePopulacional1, densidadePopulacional2; // Declara duas variáveis do tipo float para armazenar a densidade populacional da cidade para a Carta 1 e Carta 2.
    float pibPerCapita1, pibPerCapita2; // Declara duas variáveis do tipo float para armazenar o PIB per capita da cidade para a Carta 1 e Carta 2.
    float superPoder1, superPoder2; // Declara duas variáveis do tipo float para armazenar o "super poder" da cidade para a Carta 1 e Carta 2.
    float inversoDensidade1, inversoDensidade2; // Declara duas variáveis do tipo float para armazenar o inverso da densidade populacional da cidade para a Carta 1 e Carta 2.

    printf("--------------------------------\n"); // Imprime uma linha de separação no console.
    printf("--------------------------------\n"); // Imprime uma linha de separação no console.
    printf("Por favor, digite abaixo os dados para cadastrar a Carta 1 \n"); // Imprime uma mensagem solicitando ao usuário que insira os dados para a Carta 1.

    printf("Digite uma letra de A a H para representar o Estado: \n"); // Imprime uma mensagem solicitando ao usuário que insira a letra do estado.
    scanf(" %c", &letraEstado1); // Lê um caractere digitado pelo usuário e armazena na variável letraEstado1. O espaço antes de %c consome qualquer whitespace pendente (como o '\n' deixado por scanf anteriores)

    printf("Digite um numero de 01 a 04 para representar o codigo da carta: \n"); // Imprime uma mensagem solicitando ao usuário que insira o código da carta.
    scanf("%s", codCarta1); // Lê uma string digitada pelo usuário e armazena no array codCarta1.

    printf("Digite o nome da Cidade: \n"); // Imprime uma mensagem solicitando ao usuário que insira o nome da cidade.
    scanf("%s", nomeCid1); // Lê uma string digitada pelo usuário e armazena no array nomeCid1.

    printf("Digite o numero de habitantes da cidade: \n"); // Imprime uma mensagem solicitando ao usuário que insira o número de habitantes.
    scanf("%llu", &populacao1); // Lê um inteiro digitado pelo usuário e armazena na variável populacao1.

    printf("Digite a area territorial da cidade: \n"); // Imprime uma mensagem solicitando ao usuário que insira a área territorial.
    scanf("%f", &area1); // Lê um float digitado pelo usuário e armazena na variável area1.

    printf("Digite o produto interno bruto (PIB) da cidade: \n"); // Imprime uma mensagem solicitando ao usuário que insira o PIB.
    scanf("%f", &pib1); // Lê um float digitado pelo usuário e armazena na variável pib1.

    printf("Digite a quantidade de pontos turisticos da cidade: \n"); // Imprime uma mensagem solicitando ao usuário que insira a quantidade de pontos turísticos.
    scanf("%d", &pontoTuristico1); // Lê um inteiro digitado pelo usuário e armazena na variável pontoTuristico1.

    densidadePopulacional1 = (float) populacao1 / area1; // Calcula a densidade populacional dividindo a população pela área. Converte populacao1 para float para evitar divisão inteira.
    pibPerCapita1 =  (float) pib1 /  populacao1; // Calcula o PIB per capita dividindo o PIB pela população. Converte pib1 para float para evitar divisão inteira.
    inversoDensidade1 = 1 / densidadePopulacional1; // Calcula o inverso da densidade populacional.
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontoTuristico1 + inversoDensidade1 + pibPerCapita1; // Calcula o "super poder" somando diversos atributos da cidade.

    printf("--------------------------------\n"); // Imprime uma linha de separação no console.
    printf("--------------------------------\n"); // Imprime uma linha de separação no console.
    printf("Por favor, digite abaixo os dados para cadastrar a Carta 2 \n"); // Imprime uma mensagem solicitando ao usuário que insira os dados para a Carta 2.

    printf("Digite uma letra de A a H para representar o Estado: \n"); // Imprime uma mensagem solicitando ao usuário que insira a letra do estado.
    scanf(" %c", &letraEstado2); // Lê um caractere digitado pelo usuário e armazena na variável letraEstado2.

    printf("Digite um numero de 01 a 04 para representar o codigo da carta: \n"); // Imprime uma mensagem solicitando ao usuário que insira o código da carta.
    scanf("%s", codCarta2); // Lê uma string digitada pelo usuário e armazena no array codCarta2.

    printf("Digite o nome da Cidade: \n"); // Imprime uma mensagem solicitando ao usuário que insira o nome da cidade.
    scanf("%s", nomeCid2); // Lê uma string digitada pelo usuário e armazena no array nomeCid2.

    printf("Digite o numero de habitantes da cidade: \n"); // Imprime uma mensagem solicitando ao usuário que insira o número de habitantes.
    scanf("%llu", &populacao2); // Lê um inteiro digitado pelo usuário e armazena na variável populacao2.

    printf("Digite a area territorial da cidade: \n"); // Imprime uma mensagem solicitando ao usuário que insira a área territorial.
    scanf("%f", &area2); // Lê um float digitado pelo usuário e armazena na variável area2.

    printf("Digite o produto interno bruto (PIB) da cidade: \n"); // Imprime uma mensagem solicitando ao usuário que insira o PIB.
    scanf("%f", &pib2); // Lê um float digitado pelo usuário e armazena na variável pib2.

    printf("Digite a quantidade de pontos turisticos da cidade: \n"); // Imprime uma mensagem solicitando ao usuário que insira a quantidade de pontos turísticos.
    scanf("%d", &pontoTuristico2); // Lê um inteiro digitado pelo usuário e armazena na variável pontoTuristico2.

    densidadePopulacional2 = (float) populacao2 / area2; // Calcula a densidade populacional dividindo a população pela área.
    pibPerCapita2 =  (float) pib2 /  populacao2; // Calcula o PIB per capita dividindo o PIB pela população.
    inversoDensidade2 = 1 / densidadePopulacional2; // Calcula o inverso da densidade populacional.
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontoTuristico2 + inversoDensidade2 + pibPerCapita2; // Calcula o "super poder" somando diversos atributos da cidade.
    

    printf("---------------------------------\n"); // Imprime uma linha de separação no console.
    printf("---------------------------------\n"); // Imprime uma linha de separação no console.
    printf("Dados coletados da Carta 1\n"); // Imprime uma mensagem indicando os dados da Carta 1.

    printf("Estado: %c\n", letraEstado1); // Imprime a letra do estado da Carta 1.
    printf("Codigo da carta: %c%s\n", letraEstado1, codCarta1); // Imprime o código da carta da Carta 1.  Combina a letra do estado com o código da carta.
    printf("Nome da cidade: %s\n", nomeCid1); // Imprime o nome da cidade da Carta 1.
    printf("Populacao: %llu\n", populacao1); // Imprime a população da Carta 1.
    printf("Area territorial: %.2f Km\n", area1); // Imprime a área territorial da Carta 1 formatada com duas casas decimais.
    printf("PIB: %.2f bilhoes de reais\n", pib1); // Imprime o PIB da Carta 1 formatado com duas casas decimais.
    printf("Numero de pontos turisticos: %d\n", pontoTuristico1); // Imprime o número de pontos turísticos da Carta 1.
    printf("Densidade Populacional: %.2f hab/Km\n", densidadePopulacional1); // Imprime a densidade populacional da Carta 1 formatada com duas casas decimais.
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1); // Imprime o PIB per capita da Carta 1 formatado com duas casas decimais.
    printf("Super poder: %.3f\n", superPoder1); // Imprime o "super poder" da Carta 1 formatado com três casas decimais.


    printf("---------------------------------\n"); // Imprime uma linha de separação no console.
    printf("---------------------------------\n"); // Imprime uma linha de separação no console.
    printf("Dados coletados da Carta 2\n"); // Imprime uma mensagem indicando os dados da Carta 2.

    printf("Estado: %c\n", letraEstado2); // Imprime a letra do estado da Carta 2.
    printf("Codigo da carta: %c%s\n", letraEstado2, codCarta2); // Imprime o código da carta da Carta 2. Combina a letra do estado com o código da carta.
    printf("Nome da cidade: %s\n", nomeCid2); // Imprime o nome da cidade da Carta 2.
    printf("Populacao: %llu\n", populacao2); // Imprime a população da Carta 2.
    printf("Area territorial: %.2f Km\n", area2); // Imprime a área territorial da Carta 2 formatada com duas casas decimais.
    printf("PIB: %.2f bilhoes de reais\n", pib2); // Imprime o PIB da Carta 2 formatado com duas casas decimais.
    printf("Numero de pontos turisticos: %d\n", pontoTuristico2); // Imprime o número de pontos turísticos da Carta 2.
    printf("Densidade Populacional: %.2f hab/Km\n", densidadePopulacional2); // Imprime a densidade populacional da Carta 2 formatada com duas casas decimais.
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2); // Imprime o PIB per capita da Carta 2 formatado com duas casas decimais.
    printf("Super poder: %.3f\n", superPoder2); // Imprime o "super poder" da Carta 2 formatado com três casas decimais.



    printf("---------------------------------\n"); // Imprime uma linha de separação no console.
    printf("---------------------------------\n"); // Imprime uma linha de separação no console.
    printf("------Comparacao das cartas------\n"); // Imprime um cabeçalho para a seção de comparação.

    printf("Populacao: Carta 1 venceu Carta 2? - %d\n", populacao1 > populacao2); // Compara a população da Carta 1 com a da Carta 2 e imprime o resultado (1 se a Carta 1 venceu, 0 caso contrário).
    printf("Area: Carta 1 venceu Carta 2? - %d\n", area1 > area2); // Compara a área da Carta 1 com a da Carta 2 e imprime o resultado.
    printf("PIB: Carta 1 venceu Carta 2? - %d\n", pib1 > pib2); // Compara o PIB da Carta 1 com o da Carta 2 e imprime o resultado.
    printf("Pontos Turisticos: Carta 1 venceu Carta 2? - %d\n", pontoTuristico1 > pontoTuristico2); // Compara os pontos turísticos da Carta 1 com os da Carta 2 e imprime o resultado.
    printf("Densidade Populacional: Carta 1 venceu Carta 2? - %d\n", inversoDensidade1 > inversoDensidade2); // Compara o inverso da densidade populacional da Carta 1 com o da Carta 2 e imprime o resultado.
    printf("PIB per Capita: Carta 1 venceu Carta 2? - %d\n", pibPerCapita1 > pibPerCapita2); // Compara o PIB per capita da Carta 1 com o da Carta 2 e imprime o resultado.
    printf("Super Poder: Carta 1 venceu Carta 2? - %d\n", superPoder1 > superPoder2); // Compara o "super poder" da Carta 1 com o da Carta 2 e imprime o resultado.
    

    return 0; // Indica que o programa foi executado com sucesso.
}