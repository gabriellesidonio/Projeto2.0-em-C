#include <stdio.h>

#define MAX_CARTAS 3  // Define o número máximo de cartas (cidades)

// Estrutura para armazenar os dados de cada cidade
typedef struct {
    char estado;              // Letra do estado (ex: 'S' para SP)
    char codigo[6];           // Código da carta (até 5 caracteres + '\0')
    char nomeCidade[85];      // Nome da cidade (até 84 caracteres + '\0')
    int populacao;            // População total
    float area;               // Área em km²
    float pib;                // PIB em bilhões
    int pontosTuristicos;     // Quantidade de pontos turísticos
} Carta;

// Função para cadastrar uma cidade (carta)
void cadastrarCarta(Carta cartas[], int i) {
    printf("\n=== Cadastro da Carta %d ===\n", i + 1);

    printf("Estado (letra): ");
    scanf(" %c", &cartas[i].estado);

    printf("Código da carta: ");
    scanf("%5s", cartas[i].codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cartas[i].nomeCidade);

    printf("População: ");
    scanf("%d", &cartas[i].populacao);

    printf("Área (km²): ");
    scanf("%f", &cartas[i].area);

    printf("PIB (em bilhões): ");
    scanf("%f", &cartas[i].pib);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &cartas[i].pontosTuristicos);
}

// Função para exibir os dados cadastrados
void exibirCartas(Carta cartas[], int total) {
    for (int i = 0; i < total; i++) {
        printf("\n=== Dados da Carta %d ===\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontosTuristicos);
    }
}

int main() {
    Carta cartas[MAX_CARTAS]; // Vetor para armazenar as cartas
    int totalCartas = MAX_CARTAS;

    printf("=== Desafio Super Trunfo - Nivel Mestre ===\n");

    // Loop para cadastrar as cartas
    for (int i = 0; i < totalCartas; i++) {
        cadastrarCarta(cartas, i);
    }

    // Exibe os dados cadastrados
    exibirCartas(cartas, totalCartas);

    return 0;
}
