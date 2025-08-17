#include <stdio.h>

// Define a estrutura de dados para armazenar os atributos de uma carta
struct Carta {
    int populacao;
    float area;
    float pib; // Produto Interno Bruto
    int pontosTuristicos;
};

int main() {
    // Declara duas variáveis do tipo 'Carta' para armazenar os dados
    struct Carta carta1;
    struct Carta carta2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

    // Solicita e lê a população da primeira cidade
    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);

    // Solicita e lê a área da primeira cidade
    printf("Digite a area (em km2): ");
    scanf("%f", &carta1.area);

    // Solicita e lê o PIB da primeira cidade
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    // Solicita e lê o número de pontos turísticos da primeira cidade
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n"); // Adiciona uma linha em branco para separar os cadastros

    // --- CADASTRO DA CARTA 2 ---
    printf("--- Cadastro da Carta 2 ---\n");

    // Solicita e lê a população da segunda cidade
    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);

    // Solicita e lê a área da segunda cidade
    printf("Digite a area (em km2): ");
    scanf("%f", &carta2.area);

    // Solicita e lê o PIB da segunda cidade
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    // Solicita e lê o número de pontos turísticos da segunda cidade
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n\n"); // Adiciona duas linhas em branco para organizar a saída

    // --- EXIBIÇÃO DOS DADOS CADASTRADOS ---
    printf("----------------------------------------\n");
    printf("        CARTAS CADASTRADAS\n");
    printf("----------------------------------------\n\n");

    // Exibe os dados da Carta 1
    printf("--- Dados da Carta 1 ---\n");
    printf("Populacao: %d habitantes\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: R$ %.2f bilhoes\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\n"); // Adiciona uma linha em branco entre as cartas

    // Exibe os dados da Carta 2
    printf("--- Dados da Carta 2 ---\n");
    printf("Populacao: %d habitantes\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: R$ %.2f bilhoes\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0; // Indica que o programa terminou com sucesso
}
