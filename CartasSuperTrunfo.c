#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[8];
  char estado2[8];
  char codigocarta[8];
  char codigocarta2[8];
  char nomecidade[50];
  char nomecidade2[50];
  int populacao;
  int populacao2;
  int pontos;
  int pontos2;
  float area;
  float area2;
  float pib;
  float pib2;
  

  // Área para entrada de dados
  // carta 1
  printf("Digite o estado: \n");
  scanf("%s", &estado);

  printf("Digite o código da carta: \n");
  scanf("%s", &codigocarta);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &nomecidade);

  printf("Digite o número de habitantes na cidade: \n");
  scanf("%d", &populacao);

  printf("Digite a área da cidade em km2: \n");
  scanf("%f", &area);

  printf("Digite o pib da cidade: \n");
  scanf("%f", &pib);

  printf("Digite o a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &pontos);

  //carta2 
  printf("Por favor, após essa etapa digite os dados da segunda cidade! \n");
  printf("Digite o estado: \n");
  scanf("%s", &estado2);

  printf("Digite o código da carta: \n");
  scanf("%s", &codigocarta2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &nomecidade2);

  printf("Digite o número de habitantes na cidade: \n");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade em km2: \n");
  scanf("%f", &area2);

  printf("Digite o pib da cidade: \n");
  scanf("%f", &pib2);

  printf("Digite o a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade
  //carta1
  printf("Carta 1: \n");
  printf("Estado: %s \n", estado);
  printf("Código: %s \n", codigocarta);
  printf("Nome da cidade: %s \n", nomecidade);
  printf("Número de habitantes: %d \n", populacao);
  printf("Quantidade de pontos turísticos: %d \n", pontos);
  printf("Área da cidade em km2: %f \n", area);
  printf("PIB da cidade: %f \n", pib); 
  
  //carta2
  printf("Carta 2: \n");
  printf("Estado: %s \n", estado2);
  printf("Código: %s \n", codigocarta2);
  printf("Nome da cidade: %s \n", nomecidade2);
  printf("Número de habitantes: %d \n", populacao2);
  printf("Quantidade de pontos turísticos: %d \n", pontos2);
  printf("Área da cidade em km2: %f \n", area2);
  printf("PIB da cidade: %f \n", pib2);

    return 0;
    
} 