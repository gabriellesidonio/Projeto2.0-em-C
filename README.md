# Projeto2.0-em-C# 
Desafio Super Trunfo em C

Projeto desenvolvido para representar cidades em cartas, conforme desafio prático da disciplina de Programação em C.

---

## Estrutura do Projeto

### Super_trunfo_novato/  
Implementa o nível Novato, onde o programa faz o cadastro básico de duas cidades, armazenando informações como estado, código da carta, nome da cidade, área, PIB e pontos turísticos.  
O foco aqui é entrada e saída simples de dados.

### Super_trunfo_aventureiro/  
Implementa o nível Aventureiro, com cadastro avançado para duas cidades e comparação dos atributos das cartas.  
O programa permite comparar população, área, PIB, pontos turísticos, densidade populacional e PIB per capita, exibindo qual cidade tem o maior valor para o atributo escolhido.

### Super_trunfo_mestre/  
Implementa o nível Mestre, usando funções para modularizar o cadastro e a exibição das cartas.  
O programa cadastra até três cidades usando um vetor de estruturas, facilitando a organização do código e a reutilização de funções.

---

## Como compilar e executar

No terminal, navegue até a pasta do nível desejado e execute:

gcc nome_do_arquivo.c -o nome_do_executavel
./nome_do_executavel

Exemplo para o nível Novato:

gcc nivelnovato.c -o novato
./novato



