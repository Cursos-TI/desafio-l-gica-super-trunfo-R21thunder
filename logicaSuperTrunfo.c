#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

int main() {
    // Duas cartas cadastradas
    Carta carta1 = {"Brasil", 211000000, 8515767, 2.05, 30, 24.78};
    Carta carta2 = {"Argentina", 44938712, 2780400, 0.45, 20, 16.16};

    int escolha;

    printf("=== SUPER TRUNFO: CARTAS DE PAÍSES ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    printf("\n--- Comparando %s vs %s ---\n", carta1.nome, carta2.nome);

    switch (escolha) {
        case 1:
            printf("População: %d vs %d\n", carta1.populacao, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta1.populacao < carta2.populacao)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área: %.2f km² vs %.2f km²\n", carta1.area, carta2.area);
            if (carta1.area > carta2.area)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta1.area < carta2.area)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %.2f trilhões USD vs %.2f trilhões USD\n", carta1.pib, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta1.pib < carta2.pib)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos: %d vs %d\n", carta1.pontos_turisticos, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta1.pontos_turisticos < carta2.pontos_turisticos)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica: %.2f vs %.2f\n", carta1.densidade_demografica, carta2.densidade_demografica);
            if (carta1.densidade_demografica < carta2.densidade_demografica)
                printf("Vencedor: %s (menor densidade)\n", carta1.nome);
            else if (carta1.densidade_demografica > carta2.densidade_demografica)
                printf("Vencedor: %s (menor densidade)\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
