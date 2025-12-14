#include <stdio.h>

// Definição da estrutura da carta
typedef struct {
    char nomeEstado[50];
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} CartaSuperTrunfo;

int main() {

    CartaSuperTrunfo carta1, carta2;

    // ===== ENTRADA DA CARTA 1 =====
    printf("\nInsira os dados da primeira carta:\n");

    printf("Nome do estado: ");
    scanf("%49s", carta1.nomeEstado);

    printf("Código da Carta (ex: A01): ");
    scanf("%4s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área em km²: ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);


    // ===== ENTRADA DA CARTA 2 =====
    printf("\nInsira os dados da segunda carta:\n");

    printf("Nome do estado: ");
    scanf("%49s", carta2.nomeEstado);

    printf("Código da Carta (ex: A01): ");
    scanf("%4s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área em km²: ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);


    // ===== IMPRESSÃO DA CARTA 1 =====
    printf("\n\n===== CARTA 1 =====\n");
    printf("Estado: %s\n", carta1.nomeEstado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);


    // ===== IMPRESSÃO DA CARTA 2 =====
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", carta2.nomeEstado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
