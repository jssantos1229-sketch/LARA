#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[5], codigo2[5];
  char cidade1[20], cidade2[20];
  unsigned long int populacao1, populacao2;
  int turismo1, turismo2;
  float area1, area2, pib1, pib2, densidade1, densidade2, ppc1, ppc2, super1, super2;

  // Área para entrada de dados
  printf("CARTA 1\n\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado1);

  printf("Digite o código da cidade (letra do estado seguida do número 01 a 04, ex. A01, B02): ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite a população da cidade: ");
  scanf("%lu", &populacao1);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &turismo1);

  densidade1 = populacao1 / area1;
  ppc1 = pib1 / populacao1;
  super1 = populacao1 + area1 + pib1 + turismo1 + ppc1 + (1 / densidade1);
  
  printf("\n\nCARTA 2\n\n");

  printf("Digite o estado (letra de A a H): ");
  scanf(" %c", &estado2);

  printf("Digite o código da cidade (letra do estado seguida do número 01 a 04, ex. A01, B02): ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite a população da cidade: ");
  scanf("%lu", &populacao2);

  printf("Digite a área da cidade (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &turismo2);

  densidade2 = populacao2 / area2;
  ppc2 = pib2 / populacao2;
  super2 = populacao2 + area2 + pib2 + turismo2 + ppc2 + (1 / densidade2);
  
  // Área para exibição dos dados da cidade
  printf("\nCARTA 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %lu habitantes\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", turismo1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", ppc1);
  printf("Super Poder: %.2f\n", super1);
  
  printf("\nCARTA 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %lu habitantes\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", turismo2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", ppc2);
  printf("Super Poder: %.2f\n", super2);

  // Área para comparação de cartas
  printf("\n*** COMPARAÇÃO DE CARTAS ***\n");
  printf("A carta %s venceu? (1 Sim; 0 Não)\n\n", codigo1);
  printf("População         : %d\n", (populacao1 > populacao2));
  printf("Área em km²       : %d\n", (area1 > area2));
  printf("PIB em reais      : %d\n", (pib1 > pib2));
  printf("P. Turísticos     : %d\n", (turismo1 > turismo2));
  printf("Dens. Populacional: %d\n", (densidade1 < densidade2));
  printf("PIB per Capita    : %d\n", (ppc1 > ppc2));
  printf("Super Poder       : %d\n", (super1 > super2));
  
return 0;
} 