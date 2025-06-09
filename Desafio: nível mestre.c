#include <stdio.h>                          // Inclui a biblioteca padrão de entrada/saída.

int main() {                               // Função principal onde a execução do programa começa.

    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    unsigned long int populacao1;          // População agora é unsigned long int para maior capacidade
    float area1;
    float pib1;                            // PIB em bilhões de reais
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;                    // Variável para o Super Poder da Carta 1

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    unsigned long int populacao2;        // População agora é unsigned long int para maior capacidade
    float area2;
    float pib2;                         // PIB em bilhões de reais
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;                 // Variável para o Super Poder da Carta 2

    // --- Leitura dos dados da Carta 1 ---
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População: ");
    scanf("%lu", &populacao1);         // Usamos %lu para unsigned long int

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // - Cálculos para a Carta 1 -
    // Cálculo da Densidade Populacional: População / Área
    // Convertemos populacao1 para float para garantir cálculo de ponto flutuante.
    densidadePopulacional1 = (float)populacao1 / area1;

    // Cálculo do PIB per Capita: (PIB em bilhões * 1 bilhão) / População
    // Convertemos populacao1 para float para garantir cálculo de ponto flutuante.
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    // Cálculo do Super Poder: Soma de atributos numéricos + inverso da densidade
    // Conversão de tipos explícita para float para garantir a soma correta.
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    printf("\n");

    // --- Leitura dos dados da Carta 2 ---
    printf("Cadastro da Carta 2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2); // Usamos %lu para unsigned long int

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos para a Carta 2 ---
    // Cálculo da Densidade Populacional: População / Área
    densidadePopulacional2 = (float)populacao2 / area2;

    // Cálculo do PIB per Capita: (PIB em bilhões * 1 bilhão) / População
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // Cálculo do Super Poder: Soma de atributos numéricos + inverso da densidade
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    printf("\n");

    // --- Exibição das informações da Carta 1 ---
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n");

    // --- Exibição das informações da Carta 2 ---
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n");

    // --- Comparação das Cartas ---
    printf("Comparação de Cartas:\n");

    // População: Maior valor vence
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2));

    // Área: Maior valor vence
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2));

    // PIB: Maior valor vence
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2));

    // Pontos Turísticos: Maior valor vence
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2 ? 1 : 2), (pontosTuristicos1 > pontosTuristicos2));

    // Densidade Populacional: MENOR valor vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2 ? 1 : 2), (densidadePopulacional1 < densidadePopulacional2));

    // PIB per Capita: Maior valor vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2 ? 1 : 2), (pibPerCapita1 > pibPerCapita2));

    // Super Poder: Maior valor vence
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2 ? 1 : 2), (superPoder1 > superPoder2));

    return 0; // Indica que o programa foi executado com sucesso.
}
