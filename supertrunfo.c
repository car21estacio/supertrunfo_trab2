#include <stdio.h>

// Função para exibir o menu de atributos, omitindo a opção já escolhida (parâmetro "excluido").
void exibirMenu(int excluido) {
    printf("Escolha uma opcao:\n");
    if (excluido != 1) printf("1 - Populacao\n");
    if (excluido != 2) printf("2 - Area\n");
    if (excluido != 3) printf("3 - PIB\n");
    if (excluido != 4) printf("4 - Numero de Pontos Turisticos\n");
    if (excluido != 5) printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
}

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1[3];         // Exemplo: "BR"
    char codigo1[4];         // Exemplo: "A01"
    char pais1[100];         // Nome do país
    int populacao1;
    float area1;
    float pib1;              // PIB em bilhoes de reais
    int pontosTuristicos1;
    float densidade1;        // Densidade demografica = populacao / area

    // Declaração das variáveis para a Carta 2
    char estado2[3];         // Exemplo: "US"
    char codigo2[4];         // Exemplo: "B02"
    char pais2[100];         // Nome do país
    int populacao2;
    float area2;
    float pib2;              // PIB em bilhoes de reais
    int pontosTuristicos2;
    float densidade2;        // Densidade demografica = populacao / area

    // ----- Cadastro das Cartas -----
    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (ex: BR): ");
    scanf("%s", estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome do Pais: ");
    scanf(" %[^\n]s", pais1); // Lê toda a linha, permitindo espaços
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (ex: US): ");
    scanf("%s", estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome do Pais: ");
    scanf(" %[^\n]s", pais2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade demográfica para cada carta
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // ----- Escolha dos Atributos para Comparação -----
    int atributo1, atributo2;

    // Escolha do primeiro atributo
    printf("\n=== Escolha do Primeiro Atributo para Comparacao ===\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Numero de Pontos Turisticos\n5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);
    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opcao invalida. Reinicie o programa.\n");
        return 1;
    }

    // Escolha do segundo atributo (menu dinâmico, omitindo o primeiro atributo escolhido)
    printf("\n=== Escolha do Segundo Atributo para Comparacao ===\n");
    exibirMenu(atributo1);
    scanf("%d", &atributo2);
    // Verifica se o mesmo atributo foi escolhido ou se a opção é inválida.
    if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5) {
        printf("Opcao invalida ou atributo repetido. Reinicie o programa.\n");
        return 1;
    }

    // Variáveis para armazenar os valores dos atributos escolhidos para cada carta
    float valorCarta1Attr1 = 0.0f, valorCarta2Attr1 = 0.0f;
    float valorCarta1Attr2 = 0.0f, valorCarta2Attr2 = 0.0f;
    char nomeAttr1[40], nomeAttr2[40];

    // ----- Seleção do Primeiro Atributo -----
    switch (atributo1) {
        case 1: // População
            snprintf(nomeAttr1, sizeof(nomeAttr1), "Populacao");
            valorCarta1Attr1 = (float)populacao1;
            valorCarta2Attr1 = (float)populacao2;
            break;
        case 2: // Área
            snprintf(nomeAttr1, sizeof(nomeAttr1), "Area");
            valorCarta1Attr1 = area1;
            valorCarta2Attr1 = area2;
            break;
        case 3: // PIB
            snprintf(nomeAttr1, sizeof(nomeAttr1), "PIB");
            valorCarta1Attr1 = pib1;
            valorCarta2Attr1 = pib2;
            break;
        case 4: // Número de Pontos Turísticos
            snprintf(nomeAttr1, sizeof(nomeAttr1), "Pontos Turisticos");
            valorCarta1Attr1 = (float)pontosTuristicos1;
            valorCarta2Attr1 = (float)pontosTuristicos2;
            break;
        case 5: // Densidade Demográfica
            snprintf(nomeAttr1, sizeof(nomeAttr1), "Densidade Demografica");
            valorCarta1Attr1 = densidade1;
            valorCarta2Attr1 = densidade2;
            break;
        default:
            printf("Erro na escolha do atributo 1.\n");
            return 1;
    }

    // ----- Seleção do Segundo Atributo -----
    switch (atributo2) {
        case 1: // População
            snprintf(nomeAttr2, sizeof(nomeAttr2), "Populacao");
            valorCarta1Attr2 = (float)populacao1;
            valorCarta2Attr2 = (float)populacao2;
            break;
        case 2: // Área
            snprintf(nomeAttr2, sizeof(nomeAttr2), "Area");
            valorCarta1Attr2 = area1;
            valorCarta2Attr2 = area2;
            break;
        case 3: // PIB
            snprintf(nomeAttr2, sizeof(nomeAttr2), "PIB");
            valorCarta1Attr2 = pib1;
            valorCarta2Attr2 = pib2;
            break;
        case 4: // Número de Pontos Turísticos
            snprintf(nomeAttr2, sizeof(nomeAttr2), "Pontos Turisticos");
            valorCarta1Attr2 = (float)pontosTuristicos1;
            valorCarta2Attr2 = (float)pontosTuristicos2;
            break;
        case 5: // Densidade Demográfica
            snprintf(nomeAttr2, sizeof(nomeAttr2), "Densidade Demografica");
            valorCarta1Attr2 = densidade1;
            valorCarta2Attr2 = densidade2;
            break;
        default:
            printf("Erro na escolha do atributo 2.\n");
            return 1;
    }

    // ----- Comparações Individuais Utilizando Operador Ternário -----
    // Para atributos gerais: vence a carta com maior valor.
    // Para densidade demográfica (atributo 5): vence a carta com menor valor.
    char resultadoAttr1[60], resultadoAttr2[60];

    // Comparação para o primeiro atributo
    if (atributo1 == 5) { // Densidade Demográfica: menor vence
        snprintf(resultadoAttr1, sizeof(resultadoAttr1),
                 (valorCarta1Attr1 < valorCarta2Attr1) ? "Carta 1 venceu" :
                 (valorCarta1Attr1 > valorCarta2Attr1) ? "Carta 2 venceu" : "Empate");
    } else { // Outros atributos: maior vence
        snprintf(resultadoAttr1, sizeof(resultadoAttr1),
                 (valorCarta1Attr1 > valorCarta2Attr1) ? "Carta 1 venceu" :
                 (valorCarta1Attr1 < valorCarta2Attr1) ? "Carta 2 venceu" : "Empate");
    }

    // Comparação para o segundo atributo
    if (atributo2 == 5) { // Densidade Demográfica: menor vence
        snprintf(resultadoAttr2, sizeof(resultadoAttr2),
                 (valorCarta1Attr2 < valorCarta2Attr2) ? "Carta 1 venceu" :
                 (valorCarta1Attr2 > valorCarta2Attr2) ? "Carta 2 venceu" : "Empate");
    } else { // Outros atributos: maior vence
        snprintf(resultadoAttr2, sizeof(resultadoAttr2),
                 (valorCarta1Attr2 > valorCarta2Attr2) ? "Carta 1 venceu" :
                 (valorCarta1Attr2 < valorCarta2Attr2) ? "Carta 2 venceu" : "Empate");
    }

    // ----- Exibição dos Resultados das Comparações Individuais -----
    printf("\n=== Resultado das Comparacoes Individuais ===\n");
    printf("Atributo 1: %s\n", nomeAttr1);
    printf("  Carta 1 - %s: %.2f\n", pais1, valorCarta1Attr1);
    printf("  Carta 2 - %s: %.2f\n", pais2, valorCarta2Attr1);
    printf("  Resultado: %s\n", resultadoAttr1);

    printf("\nAtributo 2: %s\n", nomeAttr2);
    printf("  Carta 1 - %s: %.2f\n", pais1, valorCarta1Attr2);
    printf("  Carta 2 - %s: %.2f\n", pais2, valorCarta2Attr2);
    printf("  Resultado: %s\n", resultadoAttr2);

    // ----- Cálculo da Soma dos Atributos (com ajuste para densidade) -----
    float somaCarta1 = 0.0f, somaCarta2 = 0.0f;
    // Para cada atributo escolhido, se for densidade (opção 5) usamos 1/densidade para inverter a comparação
    somaCarta1 += (atributo1 == 5) ? (1.0f / valorCarta1Attr1) : valorCarta1Attr1;
    somaCarta2 += (atributo1 == 5) ? (1.0f / valorCarta2Attr1) : valorCarta2Attr1;
    somaCarta1 += (atributo2 == 5) ? (1.0f / valorCarta1Attr2) : valorCarta1Attr2;
    somaCarta2 += (atributo2 == 5) ? (1.0f / valorCarta2Attr2) : valorCarta2Attr2;

    // ----- Exibição do Resultado Final da Rodada -----
    printf("\n=== Resultado Final da Rodada ===\n");
    printf("Soma dos Atributos escolhidos:\n");
    printf("  Carta 1 - %s: %.2f\n", pais1, somaCarta1);
    printf("  Carta 2 - %s: %.2f\n", pais2, somaCarta2);
    if (somaCarta1 > somaCarta2)
        printf("Resultado Final: Carta 1 (%s) venceu a rodada!\n", pais1);
    else if (somaCarta2 > somaCarta1)
        printf("Resultado Final: Carta 2 (%s) venceu a rodada!\n", pais2);
    else
        printf("Resultado Final: Empate!\n");

    return 0;
}
