#include <stdio.h>
int main() {
    char nomeestado1[50];
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
 
    char nomeestado2[50];
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

   CartaSuperTrunfo carta1, carta2;

// Entrada de dados
printf("Insira os dados da primeira carta:\n");

   printf("Nome do estado: ");
      scanf("%49s", carta1.nomeestado);

   printf("Código da Carta (ex: A01): ");
   scanf("%4s", carta1.codigo1);

   printf("Nome da Cidade: ");
   scanf(" %[^\n]", carta1.nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
   

printf("\nInsira os dados da segunda carta:\n");

printf("Nome do estado: ");
   scanf("%49s", carta2.nomeestado);

   printf("Código da Carta (ex: A01): ");
   scanf("%4s", carta2.codigo2);

   printf("Nome da Cidade: ");
   scanf(" %[^\n]", carta2.nomeCidade2);

    printf("População: ");
    scanf("%d", &carta2.populacao2);

    printf("Área em km²: ");
    scanf("%f", &carta2.area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos2);

     // ===== IMPRESSÃO DA CARTA 1 =====
    printf("\n\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);


    // ===== IMPRESSÃO DA CARTA 2 =====
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
   

}