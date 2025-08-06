#include <stdio.h>

int main() {
    // ------- INICIANDO AS VARIAVEIS DA CARTA 1 ---------
    char ESTADO_1, COD_CARTA_1[4], CD_NOME_1[50];
    int POPULACAO_1, PTT_1;
    float AREA_KM1, PIB_1;

    // ------- INICIANDO AS VARIAVEIS DA CARTA 2 ---------
    char ESTADO_2, COD_CARTA_2[4], CD_NOME_2[50];
    int POPULACAO_2, PTT_2;
    float AREA_KM2, PIB_2;

    // ------- INICIANDO UMA INTERAÇÃO COM O USUARIO ---------
    printf("BEM_VINDO AO SUPER TRUNFO!!!\n");
    printf("VAMOS CRIAR SUA PRIMEIRA CARTA!!\n\n");

    // ------- PEGANDO A ENTRADA DO USUARIO PARA A CARTA 1 -----
    printf("Escolha uma letra que represente o estado dessa cidade, você pode escolher de (A a H)\n");
    scanf(" %c", &ESTADO_1);  // ESPAÇO antes do %c para evitar lixo

    printf("Escolha o codigo dessa carta usando a letra que você escolheu e o numero (ex:A01)\n");
    scanf("%s", COD_CARTA_1);

    printf("Escolha o nome da cidade dessa carta (ex:Barcarena)\n");
    scanf("%s", CD_NOME_1);

    printf("Escolha o numero de habitantes dessa cidade (ex:20000)\n");
    scanf("%d", &POPULACAO_1);

    printf("Escolha o numero de pontos turisticos dessa cidade (ex:10)\n");
    scanf("%d", &PTT_1);

    printf("Escolha a aréa em Km² dessa cidade (ex:10.000)\n");
    scanf("%f", &AREA_KM1);

    printf("Escolha o PIB dessa cidade (ex:10.000.000.00)\n");
    scanf("%f", &PIB_1);

    printf("PERFEITO! AGORA VAMOS PARA SUA SEGUNDA CARTA!!\n");

    // ------- PEGANDO A ENTRADA DO USUARIO PARA A CARTA 2 -----
    printf("Escolha uma letra que represente o estado dessa cidade, você pode escolher de (A a H)\n");
    scanf(" %c", &ESTADO_2);  // ESPAÇO antes do %c para evitar lixo

    printf("Escolha o codigo dessa carta usando a letra que você escolheu e o numero (ex:A01)\n");
    scanf("%s", COD_CARTA_2);

    printf("Escolha o nome da cidade dessa carta (ex:Barcarena)\n");
    scanf("%s", CD_NOME_2);

    printf("Escolha o numero de habitantes dessa cidade (ex:20000)\n");
    scanf("%d", &POPULACAO_2);

    printf("Escolha o numero de pontos turisticos dessa cidade (ex:10)\n");
    scanf("%d", &PTT_2);

    printf("Escolha a aréa em Km² dessa cidade (ex:10.000)\n");
    scanf("%f", &AREA_KM2);

    printf("Escolha o PIB dessa cidade (ex:10.000.000.00)\n");
    scanf("%f", &PIB_2);

    // ------------- SAIDA DE DADOS DA CARTA 1 ---------------
    printf("\n--------- CARTA 1 ---------\n");
    printf("Estado: %c\n", ESTADO_1);
    printf("Codigo: %s\n", COD_CARTA_1);
    printf("Nome da cidade: %s\n", CD_NOME_1);
    printf("População: %d\n", POPULACAO_1);
    printf("Pontos turisticos: %d\n", PTT_1);
    printf("Área: %.2f Km²\n", AREA_KM1);
    printf("PIB: %.2f\n", PIB_1);

    // ------------- SAIDA DE DADOS DA CARTA 2 ---------------
    printf("\n--------- CARTA 2 ---------\n");
    printf("Estado: %c\n", ESTADO_2);
    printf("Codigo: %s\n", COD_CARTA_2);
    printf("Nome da cidade: %s\n", CD_NOME_2);
    printf("População: %d\n", POPULACAO_2);
    printf("Pontos turisticos: %d\n", PTT_2);
    printf("Área: %.2f Km²\n", AREA_KM2);
    printf("PIB: %.2f\n", PIB_2);

    return 0;
}