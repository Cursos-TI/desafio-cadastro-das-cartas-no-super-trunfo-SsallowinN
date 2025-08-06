#include <stdio.h>

int main() {
    //---------------------  DECLARANDO AS VARIÁVEIS CARTA 1 -----------------------
    char estado1, cod_carta1[10], cd_nome1[50];
    int populacao1, np_turisticos1;
    double area1, PIB1;

    //---------------------  DECLARANDO AS VARIÁVEIS CARTA 2 -----------------------
    char estado2, cod_carta2[10], cd_nome2[50];
    int populacao2, np_turisticos2;
    double area2, PIB2;

    //---------------------  INSERINDO OS DADOS DA CARTA 1 -----------------------
    printf("Escolha uma letra que represente o estado dessa cidade (A a H): ");
    scanf(" %c", &estado1);

    printf("Escolha o codigo dessa carta usando a letra que voce escolheu e o numero (ex:A01): ");
    scanf(" %9s", cod_carta1);

    printf("Escolha o nome da cidade dessa carta (ex:Barcarena): ");
    scanf(" %[^\n]", cd_nome1);

    printf("Escolha o numero de habitantes dessa cidade (ex:20000): ");
    scanf(" %d", &populacao1);

    printf("Escolha o numero de pontos turisticos dessa cidade (ex:10): ");
    scanf("%d", &np_turisticos1);

    printf("Escolha a area em Km² dessa cidade (ex:10.000): ");
    scanf("%lf", &area1);

    if (area1 == 0) {
        printf("Erro: Area nao pode ser zero.\n");
        return 1;
    }

    printf("Escolha o PIB dessa cidade (ex:10.000.000.00): ");
    scanf("%lf", &PIB1);

    if (populacao1 == 0) {
        printf("Erro: Populacao nao pode ser zero.\n");
        return 1;
    }

    printf("PERFEITO! AGORA VAMOS PARA SUA SEGUNDA CARTA!!\n");

    //---------------------  INSERINDO OS DADOS DA CARTA 2 -----------------------
    printf("Escolha uma letra que represente o estado dessa cidade (A a H): ");
    scanf(" %c", &estado2);

    printf("Escolha o codigo dessa carta usando a letra que voce escolheu e o numero (ex:A01): ");
    scanf(" %9s", cod_carta2);

    printf("Escolha o nome da cidade dessa carta (ex:Barcarena): ");
    scanf(" %[^\n]", cd_nome2);

    printf("Escolha o numero de habitantes dessa cidade (ex:20000): ");
    scanf(" %d", &populacao2);

    printf("Escolha o numero de pontos turisticos dessa cidade (ex:10): ");
    scanf("%d", &np_turisticos2);

    printf("Escolha a area em Km² dessa cidade (ex:10.000): ");
    scanf("%lf", &area2);

    if (area2 == 0) {
        printf("Erro: Area nao pode ser zero.\n");
        return 1;
    }

    printf("Escolha o PIB dessa cidade (ex:10.000.000.00): ");
    scanf("%lf", &PIB2);

    if (populacao2 == 0) {
        printf("Erro: Populacao nao pode ser zero.\n");
        return 1;
    }

    // ----------- CALCULANDO A DENSIDADE POPULACIONAL E PIB PER CAPITA e SUPER PODER -------------
    double dp1 = populacao1 / area1;
    double pib_pc1 = PIB1 / populacao1;

    double dp2 = populacao2 / area2;
    double pib_pc2 = PIB2 / populacao2;

    // ------------------------------------ CALCULANDO SUPER PODER ---------------------------------------------
    double super_poder_1 = populacao1 + area1 + PIB1 + np_turisticos1 + pib_pc1 + (1.0 / dp1);
    double super_poder_2 = populacao2 + area2 + PIB2 + np_turisticos2 + pib_pc2 + (1.0 / dp2);

    // COMPARAÇÕES (1 = Carta 1 vence, 0 = Carta 2 vence)
    int pop_vence = (populacao1 > populacao2) ? 1 : 0;
    int area_vence = (area1 > area2) ? 1 : 0;
    int pib_vence = (PIB1 > PIB2) ? 1 : 0;
    int pontos_vence = (np_turisticos1 > np_turisticos2) ? 1 : 0;

    // PARA A DENSIDADE MENOR VENCER 
    int dens_vence = (dp1 < dp2) ? 1 : 0;

    int pibpc_vence = (pib_pc1 > pib_pc2) ? 1 : 0;
    int superpoder_vence = (super_poder_1 > super_poder_2) ? 1 : 0;

    // --------------  MOSTRANDO AS CARTAS -------------
    printf("\n--------- CARTA 1 ---------\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", cd_nome1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", np_turisticos1);
    printf("Área: %.2lf Km²\n", area1);
    printf("PIB: %.2lf\n", PIB1);
    printf("Densidade populacional: %.2lf\n", dp1);
    printf("PIB per capita: %.2lf\n", pib_pc1);

    printf("\n--------- CARTA 2 ---------\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", cd_nome2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", np_turisticos2);
    printf("Área: %.2lf Km²\n", area2);
    printf("PIB: %.2lf\n", PIB2);
    printf("Densidade populacional: %.2lf\n", dp2);
    printf("PIB per capita: %.2lf\n", pib_pc2);

    // ---------- Mostrar os dados (pode manter seu print anterior aqui se quiser) --------------

    printf("\nComparacao de Cartas:\n");
    printf("(Se o numero for 1 a carta 1 venceu, se o numero for 0  Carta 2 venceu)\n");

    printf("Populacao: Carta 1 venceu (%d)\n", pop_vence);
    printf("Area: Carta 1 venceu (%d)\n", area_vence);
    printf("PIB: Carta 1 venceu (%d)\n", pib_vence);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos_vence);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", dens_vence);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpc_vence);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder_vence);

    return 0;
}