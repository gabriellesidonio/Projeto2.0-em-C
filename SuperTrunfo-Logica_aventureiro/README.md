# 🃏 Super Trunfo - Nível Aventureiro

Este programa em linguagem C é uma continuação do desafio Super Trunfo, onde o jogador compara cartas de cidades com base em atributos como população, área, PIB e outros. Neste nível, foi adicionado um **menu interativo** com lógica de comparação usando `switch` e `if-else`, além do cálculo de indicadores como **densidade demográfica** e **PIB per capita**.

---

## 📋 Funcionalidades

- Cadastro de **duas cidades** com os seguintes atributos:
  - Estado (letra)
  - Código da carta
  - Nome da cidade
  - População
  - Área (km²)
  - PIB (em bilhões)
  - Pontos turísticos
- Cálculo de:
  - Densidade populacional (hab/km²)
  - PIB per capita (R$/pessoa)
- Menu interativo para escolher qual atributo comparar.
- Regras:
  - A cidade com maior valor no atributo vence.
  - **Exceção**: na densidade populacional, **vence quem tiver menor valor**.

---

## Como compilar e executar

### 1. Compile o código

Se estiver usando GCC:
gcc logica_nivelaventureiro.c -o aventureiro

▶️: ./aventureiro

## Exemplo de uso
yaml
Copiar código
=== Cadastro Cidade 1 ===
Estado (letra): S
Codigo da carta: C123
Nome da cidade: São Paulo
Populacao: 12000000
Area (em km²): 1521.11
PIB (em bilhoes): 700
Pontos turisticos: 10

=== Cadastro Cidade 2 ===
Estado (letra): R
Codigo da carta: C456
Nome da cidade: Rio de Janeiro
Populacao: 6700000
Area (em km²): 1182.3
PIB (em bilhoes): 360
Pontos turisticos: 15

=== Escolha o atributo para comparar ===
1 - Populacao
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Populacional
6 - PIB per Capita
Opcao: 5

=== Resultado ===
Rio de Janeiro tem menor densidade populacional e vence.
