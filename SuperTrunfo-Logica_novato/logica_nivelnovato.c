#include <stdio.h> // Biblioteca padrão de entrada e saída (printf, scanf)

int main() {
    // === Cadastro das duas cidades ===

    // --- Variáveis da Carta 1 ---
    char estado1;              // Armazena a letra que representa o estado (ex: 'S' para São Paulo)
    char codigo1[6];           // Código identificador da carta (até 5 caracteres + '\0' do final da string)
    char nome1[85];            // Nome da cidade (até 84 caracteres + '\0')
    int populacao1;            // População total da cidade
    float area1, pib1;         // Área territorial (em km²) e PIB (em bilhões)
    int pontos1;               // Número de pontos turísticos

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
    getchar(); // Limpa o buffer para evitar pular a próxima leitura

    printf("Codigo da carta: ");
    scanf("%5s", codigo1);
    getchar();

    printf("Nome da cidade: ");
    scanf("%[^\n]", nome1); // Lê a linha toda, permitindo espaços no nome
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
    float densidade1 = populacao1 / area1; // habitantes por km²
    float densidade2 = populacao2 / area2;

    // === Cálculo do PIB per capita (convertendo bilhões para reais) ===
    float pibPerCapita1 = (pib1 * 1e9) / populacao1;
    float pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // === Comparação fixa por PIB (atributo definido no desafio) ===
    printf("\n=== Comparação: PIB ===\n");

    if (pib1 > pib2) {
        printf("%s venceu com o maior PIB.\n", nome1);
    } else if (pib2 > pib1) {
        printf("%s venceu com o maior PIB.\n", nome2);
    } else {
        printf("Empate no PIB entre %s e %s.\n", nome1, nome2);
    }

    return 0; // Fim do programa
}


