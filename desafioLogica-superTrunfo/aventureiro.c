#include <stdio.h>

int main(){ // Função principal do programa. A execução começa aqui.
    char letraEstado1, letraEstado2; // Declara duas variáveis do tipo char para armazenar a letra do estado para a carta 1 e 2.
    char codCarta1[3], codCarta2[3]; // Declara dois arrays de char para armazenar o código da carta (string) para a carta 1 e 2. Tamanho 3 para acomodar dois dígitos e o caractere nulo '\0'.
    char nomeCid1[50], nomeCid2[50], nomePais1[50], nomePais2[50]; // Declara dois arrays de char para armazenar o nome da cidade (string) para a carta 1 e 2. Tamanho 50 para evitar buffer overflow.
    int populacao1, populacao2; // Declara duas variáveis do tipo int para armazenar a população para a carta 1 e 2.
    float area1, area2; // Declara duas variáveis do tipo float para armazenar a área para a carta 1 e 2.
    float pib1, pib2; // Declara duas variáveis do tipo float para armazenar o PIB para a carta 1 e 2.
    int pontoTuristico1, pontoTuristico2; // Declara duas variáveis do tipo int para armazenar o número de pontos turísticos para a carta 1 e 2.
    float densidadePopulacional1, densidadePopulacional2;

    float inversoDensidade1, inversoDensidade2;

    float pibPerCapita1, pibPerCapita2;

    int atributoEscolhido;

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
    inversoDensidade1 = 1 / densidadePopulacional1;

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
    inversoDensidade2 = 1 / densidadePopulacional2;
    

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



    printf("-------------------------------\n"); 
    printf("-------------------------------\n");
    printf("-----Comparacao das cartas-----\n");
    printf("Carta 1 - Digite o nome do pais: ");
    scanf("%s", &nomePais1);
    printf("Carta 2 - Digite o nome do pais: ");
    scanf("%s", &nomePais2);
    printf("Escolha o numero que corresponde ao atributo que deseja usar para a comparacao entre a Carta 1 e a Carta 2:\n");
    printf("[1] Para Populacao\n");
    printf("[2] Para Area territorial\n");
    printf("[3] Para PIB\n");
    printf("[4] Para Numero de pontos turisticos\n");
    printf("[5] Para Densidade populacional\n");
    scanf("%d", &atributoEscolhido);

    printf("-------------------------------\n"); 
    printf("-------------------------------\n");
    printf("---------- Resultado ----------\n");

    switch (atributoEscolhido) {
        case 1:
            if(populacao1 > populacao2) {
                printf("%s X %s\n", nomePais1, nomePais2);
                printf("Atributo escolhido: Populacao\n");
                printf("Valores comparados: %d X %d\n", populacao1, populacao2);
                printf("Carta vencedora: Carta 1\n");
            }else if(populacao1 < populacao2) {
                printf("%s X %s\n", nomePais1, nomePais2);
                printf("Atributo escolhido: Populacao\n");
                printf("Valores comparados: %d X %d\n", populacao1, populacao2);
                printf("Carta vencedora: Carta 2\n");
            }else {
                printf("%s X %s\n", nomePais1, nomePais2);
                printf("Atributo escolhido: Populacao\n");
                printf("Valores comparados: %d X %d\n", populacao1, populacao2);
                printf("### Empate! ###\n");
            }
            break;

            case 2:
                if(area1 > area2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Area territorial\n");
                    printf("Valores comparados: %.2f X %.2f\n", area1, area2);
                    printf("Carta vencedora: Carta 1\n");
                }else if(area1 < area2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Area territorial\n");
                    printf("Valores comparados: %.2f X %.2f\n", area1, area2);
                    printf("Carta vencedora: Carta 2\n");
                }else {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Area territorial\n");
                    printf("Valores comparados: %.2f X %.2f\n", area1, area2);
                    printf("### Empate! ###\n");
                }
            break;

            case 3:
                if(pib1 > pib2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: PIB\n");
                    printf("Valores comparados: %.2f X %.2f\n", pib1, pib2);
                    printf("Carta vencedora: Carta 1\n");
                }else if(pib1 < pib2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: PIB\n");
                    printf("Valores comparados: %.2f X %.2f\n", pib1, pib2);
                    printf("Carta vencedora: Carta 2\n");
                }else {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: PIB\n");
                    printf("Valores comparados: %.2f X %.2f\n", pib1, pib2);
                    printf("### Empate! ###\n");
                }
            break;

            case 4:
                if(pontoTuristico1 > pontoTuristico2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Pontos turisticos\n");
                    printf("Valores comparados: %d X %d\n", pontoTuristico1, pontoTuristico2);
                    printf("Carta vencedora: Carta 1\n");
                }else if(pontoTuristico1 < pontoTuristico2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Pontos turisticos\n");
                    printf("Valores comparados: %d X %d\n", pontoTuristico1, pontoTuristico2);
                    printf("Carta vencedora: Carta 2\n");
                }else {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Pontos turisticos\n");
                    printf("Valores comparados: %d X %d\n", pontoTuristico1, pontoTuristico2);
                    printf("### Empate! ###\n");
                }
            break;

            case 5:
                if(inversoDensidade1 < inversoDensidade2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("Valores comparados: %.2f X %.2f\n", inversoDensidade1, inversoDensidade2);
                    printf("Carta vencedora: Carta 1\n");
                }else if(area1 > area2) {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("Valores comparados: %.2f X %.2f\n", inversoDensidade1, inversoDensidade2);
                    printf("Carta vencedora: Carta 2\n");
                }else {
                    printf("%s X %s\n", nomePais1, nomePais2);
                    printf("Atributo escolhido: Densidade Populacional\n");
                    printf("Valores comparados: %.2f X %.2f\n", inversoDensidade1, inversoDensidade2);
                    printf("### Empate! ###\n");
                }
            break;

            default:
                printf("Opcao Invalida!\n");
            break;
    }

    return 0; // Indica que o programa foi executado com sucesso.
}