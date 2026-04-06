#include <stdio.h>


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
    // CÁLCULOS
    // =============================================
    densidade1      = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9f) / (float)populacao1;

    densidade2      = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1e9f) / (float)populacao2;

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
    printf("=============================\n");

    // =============================================
    // COMPARAÇÃO - ATRIBUTO ESCOLHIDO NO CÓDIGO
    // Para mudar o atributo comparado, basta trocar
    // o bloco abaixo pelo atributo desejado.
    // Atributos disponíveis:
    //   populacao | area | pib | pontos_turisticos
    //   densidade (menor vence) | pib_per_capita
    // =============================================

    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);

    // Comparação: maior população vence
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // =============================================
    // EXEMPLO: se quiser comparar por DENSIDADE
    // (menor vence), use este bloco no lugar do acima:
    // =============================================
    /*
    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%c): %.2f hab/km²\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%c): %.2f hab/km²\n", cidade2, estado2, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    */

    return 0;
}
