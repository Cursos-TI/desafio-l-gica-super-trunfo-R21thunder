#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int populacao;
    int area;
    float densidade;
    int pib;
} Carta;

void exibirMenuAtributos(int escolhido) {
    printf("Escolha um atributo:\n");
    if (escolhido != 1) printf("1 - População\n");
    if (escolhido != 2) printf("2 - Área\n");
    if (escolhido != 3) printf("3 - Densidade Demográfica\n");
    if (escolhido != 4) printf("4 - PIB\n");
}

float obterValor(Carta c, int atributo) {
    switch (atributo) {
        case 1: return (float)c.populacao;
        case 2: return (float)c.area;
        case 3: return c.densidade;
        case 4: return (float)c.pib;
        default: return 0;
    }
}

const char* nomeAtributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "Densidade Demográfica";
        case 4: return "PIB";
        default: return "Desconhecido";
    }
}

int main() {
    // Cartas pré-definidas
    Carta carta1 = {"Brasil", 213000000, 8515767, 25.0, 15000};
    Carta carta2 = {"Japão", 125800000, 377975, 332.8, 40000};

    int atributo1 = 0, atributo2 = 0;

    // Escolha do primeiro atributo
    do {
        exibirMenuAtributos(0);
        printf("Escolha o primeiro atributo: ");
        scanf("%d", &atributo1);
        if (atributo1 < 1 || atributo1 > 4) {
            printf("Atributo inválido. Tente novamente.\n");
            atributo1 = 0;
        }
    } while (atributo1 == 0);

    // Escolha do segundo atributo, diferente do primeiro
    do {
        exibirMenuAtributos(atributo1);
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
        if (atributo2 < 1 || atributo2 > 4 || atributo2 == atributo1) {
            printf("Atributo inválido. Tente novamente.\n");
            atributo2 = 0;
        }
    } while (atributo2 == 0);

    float val1_attr1 = obterValor(carta1, atributo1);
    float val2_attr1 = obterValor(carta2, atributo1);

    float val1_attr2 = obterValor(carta1, atributo2);
    float val2_attr2 = obterValor(carta2, atributo2);

    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
    printf("Carta 1: %s\n", carta1.nome);
    printf("Carta 2: %s\n\n", carta2.nome);

    printf("%s: %.2f vs %.2f --> %s\n", nomeAtributo(atributo1), val1_attr1, val2_attr1,
           atributo1 == 3 ?
           (val1_attr1 < val2_attr1 ? carta1.nome : carta2.nome) :
           (val1_attr1 > val2_attr1 ? carta1.nome : carta2.nome));

    printf("%s: %.2f vs %.2f --> %s\n", nomeAtributo(atributo2), val1_attr2, val2_attr2,
           atributo2 == 3 ?
           (val1_attr2 < val2_attr2 ? carta1.nome : carta2.nome) :
           (val1_attr2 > val2_attr2 ? carta1.nome : carta2.nome));

    float soma1 = val1_attr1 + val1_attr2;
    float soma2 = val2_attr1 + val2_attr2;

    printf("\nSoma dos atributos:\n%s: %.2f\n%s: %.2f\n", carta1.nome, soma1, carta2.nome, soma2);

    printf("\nResultado final: ");
    if (soma1 > soma2) {
        printf("%s venceu a rodada!\n", carta1.nome);
    } else if (soma2 > soma1) {
        printf("%s venceu a rodada!\n", carta2.nome);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
