#include <stdio.h>

int main() {
    // Estrutura para guardar os dados da carta
    char estado1[50], estado2[50];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int pontosTuristicos1, pontosTuristicos2;
    long populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%ld", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%ld", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcula densidade
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    printf("\n=== Dados das Cartas ===\n");
    printf("Carta 1: %s - %s - %s\nPopulação: %ld\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\n\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1);

    printf("Carta 2: %s - %s - %s\nPopulação: %ld\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\n\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2);

    // Comparação - escolha fixa (exemplo: comparar PIB)
    printf("=== Comparação: PIB ===\n");
    if (pib1 > pib2) {
        printf("Carta vencedora: %s (%s)\n", cidade1, codigo1);
    } else if (pib2 > pib1) {
        printf("Carta vencedora: %s (%s)\n", cidade2, codigo2);
    } else {
        printf("Empate!\n");
    }

    // Comparação - densidade populacional (menor vence)
    printf("\n=== Comparação: Densidade Populacional ===\n");
    if (densidade1 < densidade2) {
        printf("Carta vencedora: %s (%s)\n", cidade1, codigo1);
    } else if (densidade2 < densidade1) {
        printf("Carta vencedora: %s (%s)\n", cidade2, codigo2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
