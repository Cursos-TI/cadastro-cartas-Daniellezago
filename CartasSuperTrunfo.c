#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
  
int main() {
    // =============================================
    // VARIÁVEIS - CARTA 1
    // =============================================
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    // =============================================
    // VARIÁVEIS - CARTA 2
    // =============================================
    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    // =============================================
    // LEITURA DOS DADOS - CARTA 1
    // =============================================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (letra A a H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // =============================================
    // LEITURA DOS DADOS - CARTA 2
    // =============================================
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (letra A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // =============================================
    // CÁLCULOS - CARTA 1
    // =============================================
    densidade1      = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9f) / (float)populacao1;

    // Super Poder: população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade)
    super_poder1 = (float)populacao1
                 + area1
                 + (pib1 * 1e9f)
                 + (float)pontos_turisticos1
                 + pib_per_capita1
                 + (1.0f / densidade1);

    // =============================================
    // CÁLCULOS - CARTA 2
    // =============================================
    densidade2      = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1e9f) / (float)populacao2;

    super_poder2 = (float)populacao2
                 + area2
                 + (pib2 * 1e9f)
                 + (float)pontos_turisticos2
                 + pib_per_capita2
                 + (1.0f / densidade2);

    // =============================================
    // EXIBIÇÃO DOS DADOS - CARTA 1
    // =============================================
    printf("\n=============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // =============================================
    // EXIBIÇÃO DOS DADOS - CARTA 2
    // =============================================
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    printf("=============================\n");

    // =============================================
    // COMPARAÇÃO DAS CARTAS
    // =============================================
    // Operadores relacionais retornam 1 (verdadeiro) ou 0 (falso)
    // Densidade: menor vence → Carta 1 vence se densidade1 < densidade2
    // Demais: maior vence → Carta 1 vence se atributo1 > atributo2

    int vence_populacao        = populacao1        > populacao2;
    int vence_area             = area1             > area2;
    int vence_pib              = pib1              > pib2;
    int vence_pontos           = pontos_turisticos1 > pontos_turisticos2;
    int vence_densidade        = densidade1        < densidade2; // menor vence
    int vence_pib_per_capita   = pib_per_capita1   > pib_per_capita2;
    int vence_super_poder      = super_poder1      > super_poder2;

    // =============================================
    // EXIBIÇÃO DAS COMPARAÇÕES
    // =============================================
    printf("\nComparação de Cartas:\n");

    printf("População: %s (%d)\n",
        vence_populacao ? "Carta 1 venceu" : "Carta 2 venceu",
        vence_populacao);

    printf("Área: %s (%d)\n",
        vence_area ? "Carta 1 venceu" : "Carta 2 venceu",
        vence_area);

    printf("PIB: %s (%d)\n",
        vence_pib ? "Carta 1 venceu" : "Carta 2 venceu",
        vence_pib);

    printf("Pontos Turísticos: %s (%d)\n",
        vence_pontos ? "Carta 1 venceu" : "Carta 2 venceu",
        vence_pontos);

    printf("Densidade Populacional: %s (%d)\n",
        vence_densidade ? "Carta 1 venceu" : "Carta 2 venceu",
        vence_densidade);

    printf("PIB per Capita: %s (%d)\n",
        vence_pib_per_capita ? "Carta 1 venceu" : "Carta 2 venceu",
        vence_pib_per_capita);

    printf("Super Poder: %s (%d)\n",
        vence_super_poder ? "Carta 1 venceu" : "Carta 2 venceu",
        vence_super_poder);

    return 0;
}