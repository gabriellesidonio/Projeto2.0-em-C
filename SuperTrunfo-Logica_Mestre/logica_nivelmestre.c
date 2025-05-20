#include <stdio.h>

#define MAX_CARTAS 3  // Define o número máximo de cartas que o programa pode armazenar

// Estrutura que representa uma carta com os atributos das cidades/estados
typedef struct {
    char estado;              // Letra do estado (exemplo: 'S' para São Paulo)
    char codigo[6];           // Código da carta (até 5 caracteres + '\0')
    char nomeCidade[85];      // Nome completo da cidade
    int populacao;            // População total
    float area;               // Área em km²
    float pib;                // Produto Interno Bruto em bilhões
    int pontosTuristicos;     // Quantidade de pontos turísticos
    float densidade;          // Densidade demográfica (população / área)
} Carta;

// Função para cadastrar os dados de uma carta
void cadastrarCarta(Carta *carta) {
    printf("\n=== Cadastro da Carta ===\n");
    
    // Entrada da letra do estado
    printf("Estado (letra): ");
    scanf(" %c", &carta->estado);

    // Entrada do código da carta (string)
    printf("Código da carta: ");
    scanf("%5s", carta->codigo);

    // Entrada do nome da cidade (permite espaços)
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);

    // Entrada da população
    printf("População: ");
    scanf("%d", &carta->populacao);

    // Entrada da área em km²
    printf("Área (km²): ");
    scanf("%f", &carta->area);

    // Entrada do PIB em bilhões
    printf("PIB (em bilhões): ");
    scanf("%f", &carta->pib);

    // Entrada da quantidade de pontos turísticos
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);

    // Cálculo da densidade demográfica (população dividido pela área)
    carta->densidade = carta->populacao / carta->area;
}

// Função para mostrar os dados de uma carta na tela
void exibirCarta(Carta *carta) {
    printf("\nEstado: %c\n", carta->estado);
    printf("Código: %s\n", carta->codigo);
    printf("Cidade: %s\n", carta->nomeCidade);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2f bilhões\n", carta->pib);
    printf("Pontos turísticos: %d\n", carta->pontosTuristicos);
    printf("Densidade populacional: %.2f\n", carta->densidade);
}

// Função para mostrar o menu de atributos para o usuário escolher
// Recebe o atributo já escolhido para não mostrar na segunda escolha
void mostrarMenu(int atributoExcluido) {
    printf("\nEscolha um atributo para comparar:\n");
    if (atributoExcluido != 1) printf("1. População\n");
    if (atributoExcluido != 2) printf("2. Área\n");
    if (atributoExcluido != 3) printf("3. PIB\n");
    if (atributoExcluido != 4) printf("4. Pontos turísticos\n");
    if (atributoExcluido != 5) printf("5. Densidade (menor é melhor)\n");
}

// Função que retorna o valor do atributo escolhido de uma carta
float valorAtributo(Carta *carta, int atributo) {
    switch (atributo) {
        case 1: return (float)carta->populacao;
        case 2: return carta->area;
        case 3: return carta->pib;
        case 4: return (float)carta->pontosTuristicos;
        case 5: return carta->densidade;
        default: return -1; // Valor inválido
    }
}

// Função que compara dois atributos de duas cartas
// Retorna 1 se carta1 vence, -1 se carta2 vence, 0 se empate
int compararAtributos(Carta *carta1, Carta *carta2, int atributo) {
    float val1 = valorAtributo(carta1, atributo);
    float val2 = valorAtributo(carta2, atributo);

    // Para densidade, menor valor vence
    if (atributo == 5) {
        if (val1 < val2) return 1;
        else if (val1 > val2) return -1;
        else return 0;
    } else {
        // Para os outros atributos, maior valor vence
        if (val1 > val2) return 1;
        else if (val1 < val2) return -1;
        else return 0;
    }
}

int main() {
    Carta cartas[MAX_CARTAS];  // Array para armazenar as cartas

    printf("=== Cadastro de cartas ===\n");
    // Cadastro de duas cartas para comparação
    for (int i = 0; i < 2; i++) {
        cadastrarCarta(&cartas[i]);
    }

    printf("\n=== Dados das cartas cadastradas ===\n");
    for (int i = 0; i < 2; i++) {
        printf("\nCarta %d:\n", i + 1);
        exibirCarta(&cartas[i]);
    }

    int escolha1 = 0, escolha2 = 0;

    // Primeiro atributo escolhido pelo usuário
    mostrarMenu(0);
    printf("Primeiro atributo: ");
    scanf("%d", &escolha1);

    // Validar escolha do primeiro atributo
    while (escolha1 < 1 || escolha1 > 5) {
        printf("Opção inválida! Tente novamente: ");
        scanf("%d", &escolha1);
    }

    // Segundo atributo, que não pode ser igual ao primeiro
    mostrarMenu(escolha1);
    printf("Segundo atributo: ");
    scanf("%d", &escolha2);

    // Validar escolha do segundo atributo
    while (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
        printf("Opção inválida ou atributo repetido! Tente novamente: ");
        scanf("%d", &escolha2);
    }

    // Comparar as cartas com base nos dois atributos escolhidos
    int resultado1 = compararAtributos(&cartas[0], &cartas[1], escolha1);
    int resultado2 = compararAtributos(&cartas[0], &cartas[1], escolha2);

    // Calcular a soma dos valores dos atributos escolhidos para cada carta
    float somaCarta1 = valorAtributo(&cartas[0], escolha1) + valorAtributo(&cartas[0], escolha2);
    float somaCarta2 = valorAtributo(&cartas[1], escolha1) + valorAtributo(&cartas[1], escolha2);

    // Mostrar resultado da comparação com detalhes
    printf("\n=== Resultado da comparação ===\n");
    printf("Carta 1: %s\n", cartas[0].nomeCidade);
    printf("Carta 2: %s\n", cartas[1].nomeCidade);

    // Mostrar nomes dos atributos escolhidos
    const char* nomesAtributos[6] = {"", "População", "Área", "PIB", "Pontos turísticos", "Densidade"};
    printf("Atributos comparados: %s e %s\n", nomesAtributos[escolha1], nomesAtributos[escolha2]);

    // Mostrar valores para cada carta e atributo
    printf("Valores para Carta 1: %.2f e %.2f\n", valorAtributo(&cartas[0], escolha1), valorAtributo(&cartas[0], escolha2));
    printf("Valores para Carta 2: %.2f e %.2f\n", valorAtributo(&cartas[1], escolha1), valorAtributo(&cartas[1], escolha2));

    // Mostrar soma dos valores
    printf("Soma dos atributos - Carta 1: %.2f\n", somaCarta1);
    printf("Soma dos atributos - Carta 2: %.2f\n", somaCarta2);

    // Decidir quem venceu baseado na soma
    if (somaCarta1 > somaCarta2) {
        printf("A Carta 1 venceu a rodada!\n");
    } else if (somaCarta1 < somaCarta2) {
        printf("A Carta 2 venceu a rodada!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
