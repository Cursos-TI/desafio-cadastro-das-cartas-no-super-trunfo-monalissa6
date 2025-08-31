
#include <stdio.h>

struct Carta {
    char codigo[4]; // Ex: A01 + '\0'
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite a população da cidade %s: ", carta1.codigo);
    scanf("%d", &carta1.populacao);

    printf("Digite a área da cidade %s (em km²): ", carta1.codigo);
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade %s (em bilhões): ", carta1.codigo);
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos da cidade %s: ", carta1.codigo);
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da segunda carta
    printf("\nDigite o código da segunda carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite a população da cidade %s: ", carta2.codigo);
    scanf("%d", &carta2.populacao);

    printf("Digite a área da cidade %s (em km²): ", carta2.codigo);
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade %s (em bilhões): ", carta2.codigo);
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos da cidade %s: ", carta2.codigo);
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados
    printf("\n=== Dados da Carta 1 (%s) ===\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    printf("\n=== Dados da Carta 2 (%s) ===\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
