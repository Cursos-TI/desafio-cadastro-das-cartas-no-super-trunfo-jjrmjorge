#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída, necessária para funções como printf e scanf.

int main() { // A função principal onde a execução do programa começa.
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1; // Nova variável para a densidade populacional da Carta 1
    float pibPerCapita1;         // Nova variável para o PIB per capita da Carta 1

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2; // Nova variável para a densidade populacional da Carta 2
    float pibPerCapita2;         // Nova variável para o PIB per capita da Carta 2

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da Densidade Populacional e PIB per Capita para a Carta 1
    // A população é convertida para float para garantir um cálculo de ponto flutuante.
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Multiplica o PIB por 1 bilhão para obter o valor total em reais antes de dividir pela população.

    printf("\n");

    // Leitura dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per Capita para a Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Multiplica o PIB por 1 bilhão para obter o valor total em reais antes de dividir pela população.

    printf("\n");

    // Exibição das informações da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1); // Exibe a densidade populacional
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1); // Exibe o PIB per capita

    printf("\n");

    // Exibição das informações da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2); // Exibe a densidade populacional
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2); // Exibe o PIB per capita

    return 0; // Indica que o programa executou com sucesso.
}
