#include <stdio.h>

int main() {

    // Variáveis 
    char estado1, estado2;
    char codigo1[4], codigo2[4]; // 3 Caracteres + '\0'
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2; // Alterado para unsigned long int
    int pontosTuristicos1, pontosTuristicos2;
    float pib1, pib2, area1, area2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Leitura dos dados da Primeira Carta
    printf("\n------------ Carta 1: ------------\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Segunda Carta
    printf("\n------------ Carta 2: ------------\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB para reais
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Comparações
    printf("\n------------ Comparação de Cartas: ------------\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2); // Menor densidade vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    // Comparação baseada em um único atributo: População
    printf("\n------------ Comparação de Cartas (Atributo: População): ------------\n");
    printf("Carta 1 - %s (%c): %lu\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao1 < populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! Ambas as cartas têm a mesma população.\n");
    }

    // Menu interativo
    int opcao;
    printf("\n------------ Menu de Comparação ------------\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n------------ Comparação de Cartas ------------\n");

    switch (opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("Carta 1 - %s (%c): %lu\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%c): %lu\n", nomeCidade2, estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (populacao1 < populacao2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("Carta 1 - %s (%c): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%c): %.2f km²\n", nomeCidade2, estado2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (area1 < area2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", nomeCidade2, estado2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pib1 < pib2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s (%c): %d\n", nomeCidade1, estado1, pontosTuristicos1);
            printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica
            printf("Atributo: Densidade Demográfica\n");
            printf("Carta 1 - %s (%c): %.2f hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
            printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomeCidade2, estado2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (densidadePopulacional1 > densidadePopulacional2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    // Menu interativo para seleção de dois atributos
    int opcao1, opcao2;
    float valor1Carta1, valor1Carta2, valor2Carta1, valor2Carta2, somaCarta1, somaCarta2;

    // Menu interativo para o primeiro atributo
    printf("\n------------ Escolha do Primeiro Atributo ------------\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // Menu interativo para o segundo atributo
    do {
        printf("\n------------ Escolha do Segundo Atributo ------------\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("Opção (diferente do primeiro): ");
        scanf("%d", &opcao2);
    } while (opcao2 == opcao1);

    // Determinar valores do primeiro atributo
    switch (opcao1) {
        case 1: valor1Carta1 = populacao1; valor1Carta2 = populacao2; break;
        case 2: valor1Carta1 = area1; valor1Carta2 = area2; break;
        case 3: valor1Carta1 = pib1; valor1Carta2 = pib2; break;
        case 4: valor1Carta1 = pontosTuristicos1; valor1Carta2 = pontosTuristicos2; break;
        case 5: valor1Carta1 = densidadePopulacional1; valor1Carta2 = densidadePopulacional2; break;
    }

    // Determinar valores do segundo atributo
    switch (opcao2) {
        case 1: valor2Carta1 = populacao1; valor2Carta2 = populacao2; break;
        case 2: valor2Carta1 = area1; valor2Carta2 = area2; break;
        case 3: valor2Carta1 = pib1; valor2Carta2 = pib2; break;
        case 4: valor2Carta1 = pontosTuristicos1; valor2Carta2 = pontosTuristicos2; break;
        case 5: valor2Carta1 = densidadePopulacional1; valor2Carta2 = densidadePopulacional2; break;
    }

    // Comparação dos atributos
    printf("\n------------ Comparação de Atributos ------------\n");
    printf("Atributo 1: %s\n", (opcao1 == 1) ? "População" :
                                  (opcao1 == 2) ? "Área" :
                                  (opcao1 == 3) ? "PIB" :
                                  (opcao1 == 4) ? "Pontos Turísticos" : "Densidade Demográfica");
    printf("Carta 1: %.2f, Carta 2: %.2f\n", valor1Carta1, valor1Carta2);
    printf("Resultado: %s venceu!\n", 
           (opcao1 == 5) ? ((valor1Carta1 < valor1Carta2) ? "Carta 1" : (valor1Carta1 > valor1Carta2) ? "Carta 2" : "Empate") :
                           ((valor1Carta1 > valor1Carta2) ? "Carta 1" : (valor1Carta1 < valor1Carta2) ? "Carta 2" : "Empate"));

    printf("Atributo 2: %s\n", (opcao2 == 1) ? "População" :
                                  (opcao2 == 2) ? "Área" :
                                  (opcao2 == 3) ? "PIB" :
                                  (opcao2 == 4) ? "Pontos Turísticos" : "Densidade Demográfica");
    printf("Carta 1: %.2f, Carta 2: %.2f\n", valor2Carta1, valor2Carta2);
    printf("Resultado: %s venceu!\n", 
           (opcao2 == 5) ? ((valor2Carta1 < valor2Carta2) ? "Carta 1" : (valor2Carta1 > valor2Carta2) ? "Carta 2" : "Empate") :
                           ((valor2Carta1 > valor2Carta2) ? "Carta 1" : (valor2Carta1 < valor2Carta2) ? "Carta 2" : "Empate"));

    // Soma dos atributos
    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;
    printf("\nSoma dos Atributos:\n");
    printf("Carta 1: %.2f, Carta 2: %.2f\n", somaCarta1, somaCarta2);

    // Determinar vencedor final
    if (somaCarta1 > somaCarta2) {
        printf("Resultado Final: Carta 1 venceu!\n");
    } else if (somaCarta1 < somaCarta2) {
        printf("Resultado Final: Carta 2 venceu!\n");
    } else {
        printf("Resultado Final: Empate!\n");
    }

    // Mostrar resultados das cartas
    printf("\n------------ Resultado da Primeira Carta: ------------\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n------------ Resultado da Segunda Carta: ------------\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n ------------ FIM DA LINHA ------------ \n");

    return 0;
}