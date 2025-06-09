#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída.

int main() { // A função principal onde a execução do programa começa.
    // Declaração das variáveis da Carta 1
    // Declara variáveis para armazenar informações da 'Carta 1'.
    char estado1;                           // Armazena um único caractere para o 'Estado' (por exemplo, 'A' a 'H').
    char codigo1[4];                        // Armazena uma string (array de caracteres) para o 'Código da Carta' (por exemplo, "A01"). O tamanho 4 considera 3 caracteres + o terminador nulo.
    char nomeCidade1[100];                  // Armazena uma string para o 'Nome da Cidade', com um máximo de 99 caracteres mais o terminador nulo.
    int populacao1;                         // Armazena um número inteiro para a 'População'.
    float area1;                            // Armazena um número de ponto flutuante para a 'Área' em km².
    float pib1;                             // Armazena um número de ponto flutuante para o 'PIB' em bilhões de reais.
    int pontosTuristicos1;                  // Armazena um número inteiro para o 'Número de Pontos Turísticos'.

    // Declaração das variáveis da Carta 2
    // Declara variáveis para armazenar informações da 'Carta 2', semelhante à Carta 1.
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da Carta 1
    // Solicita ao usuário que insira os dados da 'Carta 1' e lê os valores.
    printf("Cadastro da Carta 1:\n");               // Imprime um cabeçalho para o cadastro da Carta 1.
    printf("Digite o Estado (A-H): ");              // Solicita o estado.
    scanf(" %c", &estado1);                         // Lê um único caractere para o estado. O espaço antes de %c consome quaisquer caracteres de nova linha restantes de entradas anteriores.

    printf("Digite o Código da Carta (ex: A01): "); // Solicita o código da carta.
    scanf("%s", codigo1);                           // Lê uma string para o código da carta.

    printf("Digite o Nome da Cidade: ");            // Solicita o nome da cidade.
    scanf(" %[^\n]", nomeCidade1);                  // Lê uma string para o nome da cidade, incluindo espaços, até encontrar um caractere de nova linha. O espaço antes de %[^\n] consome quaisquer caracteres de nova linha restantes.

    printf("Digite a População: ");                 // Solicita a quantidade da população.
    scanf("%d", &populacao1);                       // Lê um número inteiro para a população.

    printf("Digite a Área (em km²): ");             // Solicita a área.
    scanf("%f", &area1);                            // Lê um número de ponto flutuante para a área.

    printf("Digite o PIB (em bilhões de reais): "); // Solicita o PIB.
    scanf("%f", &pib1);                             // Lê um número de ponto flutuante para o PIB.

    printf("Digite o Número de Pontos Turísticos: ");// Solicita o número de pontos turísticos.
    scanf("%d", &pontosTuristicos1);                 // Lê um número inteiro para o número de pontos turísticos.

    printf("\n"); // Imprime uma nova linha para melhor legibilidade, separando as seções de entrada.

    // Leitura dos dados da Carta 2
    // Solicita ao usuário que insira os dados da 'Carta 2' e lê os valores, semelhante à Carta 1.
    printf("Cadastro da Carta 2:\n");               // Imprime um cabeçalho para o cadastro da Carta 2.
    printf("Digite o Estado (A-H): ");              // Solicita o estado.
    scanf(" %c", &estado2);                         // Lê um único caractere para o estado.

    printf("Digite o Código da Carta (ex: B02): "); // Solicita o código da carta.
    scanf("%s", codigo2);                           // Lê uma string para o código da carta.

    printf("Digite o Nome da Cidade: ");            // Solicita o nome da cidade.
    scanf(" %[^\n]", nomeCidade2);                  // Lê uma string para o nome da cidade.

    printf("Digite a População: ");                 // Solicita a quantidade da população.
    scanf("%d", &populacao2);                       // Lê um número inteiro para a população.

    printf("Digite a Área (em km²): ");             // Solicita a área.
    scanf("%f", &area2);                            // Lê um número de ponto flutuante para a área.

    printf("Digite o PIB (em bilhões de reais): "); // Solicita o PIB.
    scanf("%f", &pib2);                             // Lê um número de ponto flutuante para o PIB.

    printf("Digite o Número de Pontos Turísticos: "); // Solicita o número de pontos turísticos.
    scanf("%d", &pontosTuristicos2);                // Lê um número inteiro para o número de pontos turísticos.

    printf("\n"); // Imprime uma nova linha para melhor legibilidade.

    // Exibição das informações da Carta 1
    // Exibe as informações coletadas para a 'Carta 1'.
    printf("Carta 1:\n");                           // Imprime um cabeçalho para a exibição da Carta 1.
    printf("Estado: %c\n", estado1);                // Imprime o estado.
    printf("Código: %s\n", codigo1);                // Imprime o código.
    printf("Nome da Cidade: %s\n", nomeCidade1);    // Imprime o nome da cidade.
    printf("População: %d\n", populacao1);          // Imprime a população.
    printf("Área: %.2f km²\n", area1);              // Imprime a área, formatada com duas casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib1);   // Imprime o PIB, formatado com duas casas decimais.
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); // Imprime o número de pontos turísticos.

    printf("\n"); // Imprime uma nova linha para melhor legibilidade.

    // Exibição das informações da Carta 2
    // Exibe as informações coletadas para a 'Carta 2', semelhante à Carta 1.
    printf("Carta 2:\n");                           // Imprime um cabeçalho para a exibição da Carta 2.
    printf("Estado: %c\n", estado2);                // Imprime o estado.
    printf("Código: %s\n", codigo2);                // Imprime o código.
    printf("Nome da Cidade: %s\n", nomeCidade2);    // Imprime o nome da cidade.
    printf("População: %d\n", populacao2);          // Imprime a população.
    printf("Área: %.2f km²\n", area2);              // Imprime a área, formatada com duas casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib2);   // Imprime o PIB, formatado com duas casas decimais.
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2); // Imprime o número de pontos turísticos.

    return 0; // Indica que o programa foi executado com sucesso.
}