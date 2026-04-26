#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  float area1, area2 ;
  float pib1, pib2 ;
  int populacao1, populacao2 ;
  int pontos_turisticos1, pontos_turisticos2 ;
  char estado1 [20];
  char estado2 [20];
  char codigo1 [20];
  char codigo2 [20];
  char cidade1 [20];
  char cidade2 [20];
  float densidade1;
  float densidade2;
  float pib_per_capita1;
  float pib_per_capita2;

  // Área para entrada de dados
  // Carta 1
  

  printf (" **** Digite os dados da carta 1 **** \n");
  
  printf("Digite o estado 1:\n"); 
  scanf("%s", estado1);
  printf("Digite o codigo da carta:\n");
  scanf("%s", codigo1);
  printf("Digite a cidade:\n");
  scanf("%s", cidade1);
  printf("Digite a area da cidade:\n");
  scanf("%f", &area1);
  printf("Digite o pib da cidade:\n");
  scanf("%f", &pib1);
  printf("Digite a população da cidade:\n");
  scanf("%d", &populacao1);
  printf("Digite quantos pontos turisticos tem:\n");
  scanf("%d", &pontos_turisticos1);

  // Carta 2
  
  printf(" **** Digite os dados da carta 2 **** \n");
  
  printf("Digite o estado :\n");
  scanf("%s", estado2);

  printf("Digite o codigo da carta:\n");
  scanf("%s", codigo2 );

  printf("Digite a cidade:\n");
  scanf("%s", cidade2 );

  printf("Digite a area da cidade:\n");
  scanf("%f", &area2 );

  printf("Digite o pib da cidade:\n");
  scanf("%f", &pib2 );

  printf("Digite a população da cidade:\n");
  scanf("%d", &populacao2 );

  printf("Digite quantos pontos turisticos tem:\n");
  scanf("%d", &pontos_turisticos2 );


 
 //Area para calcular densidade demografica

  densidade1 = populacao1 / area1;
  densidade2 = populacao2 / area2;

  //Area para calcular PIB per capita

  pib_per_capita1 = pib1 / populacao1;
  pib_per_capita2 = pib2 / populacao2;
 
 
  // Área para exibição dos dados da cidade
  
  // Carta 1
  
  printf ("CARTA 1\n");
  printf ("Estado: %s\n", estado1);
  printf ("Codigo: %s\n", codigo1);
  printf ("Cidade: %s\n", cidade1);
  printf ("Area: %0.2f\n", area1);
  printf ("Pib: %0.2f\n", pib1);
  printf ("População: %d\n", populacao1);
  printf ("Pontos Turisticos: %d\n:", pontos_turisticos1);
  printf ("Pib per capita: %0.2f\n", pib_per_capita1);
  printf ("Densidade Demográfica: %0.2f\n", densidade1);



  // Carta 2

  printf ("CARTA 2\n");
  printf ("Estado: %s\n", estado2);
  printf ("Codigo: %s\n", codigo2);
  printf ("Cidade: %s\n", cidade2);
  printf ("Area: %0.2f\n", area2);
  printf ("Pib: %0.2f\n", pib2);
  printf ("População: %d\n", populacao2);
  printf ("Pontos Turisticos: %d\n:", pontos_turisticos2);
  printf ("Pib per capita: %0.2f\n", pib_per_capita2);
  printf ("Densidade Demográfica: %0.2f\n", densidade2);

  


return 0;
} 