#include <stdio.h> // Biblioteca para entrada e saída de dados

int main() {
    // === Declaração das variáveis ===

    // --- Carta 1 ---
    char estado1;              // Letra representando o estado (ex: 'S' para SP)
    char codigo1[6];           // Código da carta (até 5 caracteres + '\0')
    char nome1[85];            // Nome da cidade
    int populacao1;            // População total da cidade
    float area1, pib1;         // Área (km²) e PIB (em bilhões)
    int pontos1;               // Quantidade de pontos turísticos

    // --- Carta 2 ---
    char estado2, codigo2[6], nome2[85];
    int populacao2, pontos2;
    float area2, pib2;

    // === Entrada de dados da Carta 1 ===
    printf("\n=== Cadastro Cidade 1 ===\n");

    printf("Estado (letra): ");
    scanf(" %c", &estado1); getchar(); // O espaço antes de %c ignora o '\n' anterior

    printf("Codigo da carta: ");
    scanf("%5s", codigo1); getchar(); // Lê até 5 caracteres no código

    printf("Nome da cidade: ");
    scanf("%[^\n]", nome1); getchar(); // Lê nome completo com espaços

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // === Entrada de dados da Carta 2 ===
    printf("\n=== Cadastro Cidade 2 ===\n");

    printf("Estado (letra): ");
    scanf(" %c", &estado2); getchar();

    printf("Codigo da carta: ");
    scanf("%5s", codigo2); getchar();

    printf("Nome da cidade: ");
    scanf("%[^\n]", nome2); getchar();

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // === Cálculos dos indicadores ===
    float densidade1 = populacao1 / area1;                  // habitantes por km²
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1e9) / populacao1;        // PIB por pessoa
    float pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // === Escolha de atributo para comparação ===
    int opcao;
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    // === Resultado da comparação ===
    printf("\n=== Resultado ===\n");

    switch(opcao) {
        case 1: // População
            if (populacao1 > populacao2)
                printf("%s tem mais populacao.\n", nome1);
            else if (populacao2 > populacao1)
                printf("%s tem mais populacao.\n", nome2);
            else
                printf("Empate na populacao.\n");
            break;

        case 2: // Área
            if (area1 > area2)
                printf("%s tem maior area.\n", nome1);
            else if (area2 > area1)
                printf("%s tem maior area.\n", nome2);
            else
                printf("Empate na area.\n");
            break;

        case 3: // PIB
            if (pib1 > pib2)
                printf("%s tem maior PIB.\n", nome1);
            else if (pib2 > pib1)
                printf("%s tem maior PIB.\n", nome2);
            else
                printf("Empate no PIB.\n");
            break;

        case 4: // Pontos turísticos
            if (pontos1 > pontos2)
                printf("%s tem mais pontos turisticos.\n", nome1);
            else if (pontos2 > pontos1)
                printf("%s tem mais pontos turisticos.\n", nome2);
            else
                printf("Empate nos pontos turisticos.\n");
            break;

        case 5: // Densidade populacional
            if (densidade1 > densidade2)
                printf("%s tem maior densidade populacional.\n", nome1);
            else if (densidade2 > densidade1)
                printf("%s tem maior densidade populacional.\n", nome2);
            else
                printf("Empate na densidade populacional.\n");
            break;

        case 6: // PIB per capita
            if (pibPerCapita1 > pibPerCapita2)
                printf("%s tem maior PIB per capita.\n", nome1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("%s tem maior PIB per capita.\n", nome2);
            else
                printf("Empate no PIB per capita.\n");
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
