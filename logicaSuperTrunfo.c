#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // declaração dos tipos de variáveis que serão utilizadas e seus respectivos nomes para carta 01.
    char estado1, codigo_carta1[4], nome_cidade1[20];
    float area1, produto_interno_bruto1, densidade_populacional1, pib_per_capita1;
    int pontos_turisticos1, carta1;
    unsigned long int populacao1;
    float super_poder1;

    // declaração dos tipos de variáveis que serão utilizadas e seus respectivos nomes para carta 02.
    char estado2, codigo_carta2[4], nome_cidade2[20];
    float area2, produto_interno_bruto2, densidade_populacional2, pib_per_capita2;
    int pontos_turisticos2, carta2;
    unsigned long int populacao2;
    float super_poder2;

   // Titulo do App
    printf("************************************\n");
    printf("* Cadastro de Cartas - SuperTrunfo *\n");
    printf("************************************\n");

    // recebe as entradas do usuário para a carta 01 e as armazena nas variáveis.
    printf("Carta 01\n");

    printf("Digite o Estado (Letras entre A e H): \n"); // printa mensagem no terminal
    scanf(" %c", &estado1); // input do usuário

    printf("Digite o código da carta (Letra do Estado + Nº sequencial de 01 a 04): \n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);
 
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em quilometros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &produto_interno_bruto1);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos1);

    // calcula a densidade populacional da carta 1
    densidade_populacional1 = populacao1 / area1;

    // calcula o pib per capita da carta 1
    pib_per_capita1 = (produto_interno_bruto1 * 1000000000) / populacao1;

    printf("\n");

    // recebe os inputs do usuário para a carta 02 e as armazena nas variáveis.
    printf("Carta 02\n");

    printf("Digite a letra do Estado (Letras entre A e H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (Letra do Estado + Nº sequencial de 01 a 04): \n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilometros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &produto_interno_bruto2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // calcula a densidade populacional da carta 2
    densidade_populacional2 = populacao2 / area2;

    // calcula o pib per capita da carta 2
    pib_per_capita2 = (produto_interno_bruto2 * 1000000000) / populacao2;

    //imprime no terminal o resutado de tudo que foi inputado pelo usuário no cadastro da carta 01
    printf("\n");
    printf("************************************\n");
    printf("* Cartas Cadastradas - SuperTrunfo *\n");
    printf("************************************\n");
    printf("\n"); 
    printf("Carta 01\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", nome_cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", produto_interno_bruto1);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    //imprime no terminal o resutado de tudo que foi inputado pelo usuário no cadastro da carta 02
    printf("\n");
    printf("Carta 02\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", produto_interno_bruto2);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    //calculo do super poder
    super_poder1 = populacao1 + area1 + produto_interno_bruto1 + (float)pontos_turisticos1 + pib_per_capita1 + densidade_populacional1;
    super_poder2 = populacao2 + area2 + produto_interno_bruto2 + (float)pontos_turisticos2 + pib_per_capita2 + densidade_populacional2;

    carta1 = 0;
    carta2 = 0;

    // Comparação de Cartas:
    if (populacao1 > populacao2){
        printf("Cidade 1 tem maior população.\n");
        carta1 + 1;
    } else {
        printf("Cidade 2 tem maior população.\n");
        carta2 + 1;
    }

    if (area1 > area2){
        printf("Cidade 1 tem uma área maior.\n");
        carta1 + 1;
    } else {
        printf("Cidade 2 tem uma área maior.\n");
        carta2 + 1;
    }

    if (produto_interno_bruto1 > produto_interno_bruto2){
        printf("Cidade 1 tem um PIB maior.\n");
        carta1 + 1;
    } else {
        printf("Cidade 2 tem um PIB maior.\n");
        carta2 + 1;
    }

    if (pontos_turisticos1 > pontos_turisticos2){
        printf("Cidade 1 tem mais pontos turisticos.\n");
        carta1 + 1;
    } else {
        printf("Cidade 2 tem mais pontos turisticos.\n");
        carta2 + 1;
    }

    if (densidade_populacional1 < densidade_populacional2){
        printf("Cidade 1 tem menor densidade populacional.\n");
        carta1 + 1;
    } else {
        printf("Cidade 2 tem menor densidade populacional.\n");
        carta2 + 1;
    }

    if (pib_per_capita1 > pib_per_capita2){
        printf("Cidade 1 tem PIB per capita maior.\n");
        carta1 + 1;
    } else {
        printf("Cidade 2 tem PIB per capita maior.\n");
        carta2 + 1;
    }

    if (super_poder1 > super_poder2){
        printf("Cidade 1 tem um Super poder maior.\n");
        carta1 + 1;
    } else {
        printf("Cidade 2 tem um Super poder maior.\n");
        carta2 + 1;
    }
   
    // Exibição dos Resultados:
    printf("Pontos Carta 1: %d pontos\n", carta1;
    printf("Pontos Carta 2: %d pontos\n", carta2;

    if (carta1 > carta2){
        printf("A cidade vencedora é: %s\n", nome_cidade1);
    } else {
        printf("A cidade vencedora é: %s\n", nome_cidade2);
    }

    return 0;
}
