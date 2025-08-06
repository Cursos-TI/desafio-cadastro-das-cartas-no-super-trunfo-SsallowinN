#include <stdio.h>

int main() {
    //---------------------  DECLARANDO AS VARIÁVEIS CARTA 1 -----------------------
    char estado1, cod_carta1[4], cd_nome1[50];
    int populacao1, np_turisticos1;
    float area1, PIB1;

    //---------------------  DECLARANDO AS VARIÁVEIS CARTA 2 -----------------------
    char estado2, cod_carta2[4], cd_nome2[50];
    int populacao2, np_turisticos2;
    float area2, PIB2;

    //---------------------  INSERINDO OS DADOS DA CARTA 1 -----------------------
    printf("Escolha uma letra que represente o estado dessa cidade (A a H): ");
    scanf(" %c", &estado1); 

    printf("Escolha o codigo dessa carta usando a letra que voce escolheu e o numero (ex:A01): ");
    scanf(" %s", cod_carta1);

    printf("Escolha o nome da cidade dessa carta (ex:Barcarena): ");
    scanf(" %[^\n]", cd_nome1);

    printf("Escolha o numero de habitantes dessa cidade (ex:20000): ");
    scanf("%d", &populacao1);

    printf("Escolha o numero de pontos turisticos dessa cidade (ex:10): ");
    scanf("%d", &np_turisticos1);

    printf("Escolha a area em Km² dessa cidade (ex:10.000): ");
    scanf("%f", &area1);

    printf("Escolha o PIB dessa cidade (ex:10.000.000.00): ");
    scanf("%f", &PIB1);

    printf("PERFEITO! AGORA VAMOS PARA SUA SEGUNDA CARTA!!\n");

    //---------------------  INSERINDO OS DADOS DA CARTA 2 -----------------------
    printf("Escolha uma letra que represente o estado dessa cidade (A a H): ");
    scanf(" %c", &estado2);

    printf("Escolha o codigo dessa carta usando a letra que voce escolheu e o numero (ex:A01): ");
    scanf(" %s", cod_carta2);

    printf("Escolha o nome da cidade dessa carta (ex:Barcarena): ");
    scanf(" %[^\n]", cd_nome2); // <-- ESPAÇO ANTES IMPORTANTE

    printf("Escolha o numero de habitantes dessa cidade (ex:20000): ");
    scanf("%d", &populacao2);

    printf("Escolha o numero de pontos turisticos dessa cidade (ex:10): ");
    scanf("%d", &np_turisticos2);

    printf("Escolha a area em Km² dessa cidade (ex:10.000): ");
    scanf("%f", &area2);

    printf("Escolha o PIB dessa cidade (ex:10.000.000.00): ");
    scanf("%f", &PIB2);

    // ----------- CALCULANDO A DENSIDADE POPULACIONAL E PIB PER CAPITA -------------
    float dp1 = populacao1 / area1;
    float pib_pc1 = PIB1 / populacao1;

    float dp2 = populacao2 / area2;
    float pib_pc2 = PIB2 / populacao2;

    // --------------  MOSTRANDO AS CARTAS -------------
    printf("\n--------- CARTA 1 ---------\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", cd_nome1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", np_turisticos1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Densidade populacional: %.2f\n", dp1);
    printf("PIB per capita: %.2f\n", pib_pc1);

    printf("\n--------- CARTA 2 ---------\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", cd_nome2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", np_turisticos2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Densidade populacional: %.2f\n", dp2);
    printf("PIB per capita: %.2f\n", pib_pc2);

    return 0;
}