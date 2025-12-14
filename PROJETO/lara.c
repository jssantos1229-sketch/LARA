#include <stdio.h>

int main() {

  printf("Desafio Trunfo\n");
  printf("Novo Commit\n");

 char estado[50];
 char codigo[5];
 char cidade[50];
  int populacao;
 float area;
 float pib;
 int pontosTuristicos;
 printf("\nInsira os dados da primeira carta 1:\n");

printf("Nome do estado: ");
scanf(" %[^\n]", estado);

printf("Código da Carta (ex: A01): ");
scanf("%s", codigo);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área em km²: ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // ===== SAÍDA  1 =====
    printf("\n===== CARTA CADASTRADA 1 =====\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

 // ===== ENTRADA DA CARTA 2 =====
    printf("\nInsira os dados da segunda carta 2:\n");

    printf("Nome do estado: ");
    scanf(" %[^\n]", estado);

    printf("Código da Carta (ex: A02): ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área em km²: ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // ===== SAÍDA 2 =====
    printf("\n===== CARTA CADASTRADA 2 =====\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}
