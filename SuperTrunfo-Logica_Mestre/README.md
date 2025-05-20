# Super Trunfo - Nível Mestre em C

## Descrição
Este projeto é a implementação do desafio final do jogo Super Trunfo, onde o jogador escolhe dois atributos para comparar cartas de cidades/países. O programa utiliza menus dinâmicos em C para escolha dos atributos, compara os valores conforme regras específicas e declara o vencedor com base na soma dos atributos.

## Funcionalidades
- Cadastro interativo de duas cartas.
- Escolha de dois atributos diferentes para comparação.
- Menus dinâmicos que excluem atributos já escolhidos.
- Comparação considerando que para "Densidade Demográfica" o menor valor vence.
- Soma dos valores dos atributos para definir o vencedor.
- Tratamento de empates.
- Exibição clara e detalhada dos resultados.

## Como compilar

No terminal, rode:
gcc -logica_nivelmestre.c  -o mestre
./super_trunfo

O programa solicitará o cadastro das cartas e a escolha dos atributos, mostrando o resultado final da comparação.

## Observações

- Certifique-se de inserir dados válidos no cadastro.
- Caso escolha o mesmo atributo duas vezes, o programa solicitará uma nova escolha para o segundo atributo.
