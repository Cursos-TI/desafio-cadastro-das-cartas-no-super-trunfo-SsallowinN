#include <stdio.h>

int main() {
    // ----------- Declaração das variáveis da Carta 1 -----------
    char estado1;
    char codigoCarta1[4]; // Ex: A01 + \0 = 4 posições
    char nome1[50];
    long int populacao1;
    double area1;
    double pib1;
    int pontosTuristicos1;

    // ----------- Declaração das variáveis da Carta 2 -----------
    char estado2;
    char codigoCarta2[4];
    char nome2[50];
    long int populacao2;
    double area2;
    double pib2;
    int pontosTuristicos2;

    // ----------- Entrada de dados da Carta 1 -----------
    printf("Digite uma letra de A a H para seu Estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01):\n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome1);

    printf("Digite o número da população:\n");
    scanf("%ld", &populacao1);

    printf("Digite a área da cidade em km²:\n");
    scanf("%lf", &area1);

    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf("%lf", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // ----------- Entrada de dados da Carta 2 -----------
    printf("\nDigite uma letra de A a H para seu Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02):\n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome2);

    printf("Digite o número da população:\n");
    scanf("%ld", &populacao2);

    printf("Digite a área da cidade em km²:\n");
    scanf("%lf", &area2);

    printf("Digite o PIB da cidade (em bilhões):\n");
    scanf("%lf", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // ----------- Saída dos dados da Carta 1 -----------
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // ----------- Saída dos dados da Carta 2 -----------
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}