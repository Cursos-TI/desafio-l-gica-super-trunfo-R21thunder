#include <stdio.h>

int main() {
    // Dados da primeira carta
    char estado1[3], nome1[50];
    int populacao1;
    float area1, pib1;
    int pontos1;

    // Dados da segunda carta
    char estado2[3], nome2[50];
    int populacao2;
    float area2, pib2;
    int pontos2;

    // Variáveis para cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada dos dados da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1); // Lê o enter

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada dos dados da carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Comparação: População
    printf("\nComparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", nome2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) { //else if para segunda condição
        printf("\nResultado: Carta 2 (%s) venceu!\n", nome2);
    } else { //else comum para empate se tiver
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
