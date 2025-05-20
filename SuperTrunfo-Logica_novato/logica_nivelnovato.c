#include <stdio.h> // Biblioteca padrão de entrada e saída (printf, scanf)

int main() {
    // === Cadastro das duas cidades ===

    // --- Variáveis da Carta 1 ---
    char estado1;
    char codigo1[6];
    char nome1[85];
    int populacao1;
    float area1, pib1;
    int pontos1;

    // --- Variáveis da Carta 2 ---
    char estado2;
    char codigo2[6];
    char nome2[85];
    int populacao2;
    float area2, pib2;
    int pontos2;

    // === Entrada dos dados da Carta 1 ===
    printf("\n=== Cadastro Cidade 1 ===\n");

    printf("Estado (letra): ");
    scanf(" %c", &estado1);
    getchar();

    printf("Codigo da carta: ");
    scanf("%5s", codigo1);
    getchar();

    printf("Nome da cidade: ");
    scanf("%[^\n]", nome1);
    getchar();

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos1);

    // === Entrada dos dados da Carta 2 ===
    printf("\n=== Cadastro Cidade 2 ===\n");

    printf("Estado (letra): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Codigo da carta: ");
    scanf("%5s", codigo2);
    getchar();

    printf("Nome da cidade: ");
    scanf("%[^\n]", nome2);
    getchar();

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontos2);

    // === Cálculo da densidade populacional ===
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // === Cálculo do PIB per capita ===
    float pibPerCapita1 = (pib1 * 1e9) / populacao1;
    float pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // === Comparação fixa por PIB ===
    printf("\n=== Comparação: PIB ===\n");
    printf("%s (Estado: %c) - PIB: R$ %.2f bilhões\n", nome1, estado1, pib1);
    printf("%s (Estado: %c) - PIB: R$ %.2f bilhões\n", nome2, estado2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: %s venceu com o maior PIB.\n", nome1);
    } else if (pib2 > pib1) {
        printf("Resultado: %s venceu com o maior PIB.\n", nome2);
    } else {
        printf("Resultado: Empate no PIB entre %s e %s.\n", nome1, nome2);
    }

    return 0;
}