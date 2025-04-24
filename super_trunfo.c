#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // Declaração de variáveis
    char estado1[30], estado2[30];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibpercapta1, pibpercapta2;
    float superPoder1, superPoder2;
    int escolhaAtributo1 = 0, escolhaAtributo2 = 0;
    int jogadorSelecionado;
    int resultado1 = 0, resultado2 = 0;

    srand(time(0));

    // Entrada de dados
    printf("Bem vindos ao jogo Super Trunfo de cartas!\n");
    printf("Definam entre si, qual de vocês será o jogador 1 ou 2!\n");
    printf("Escolheram? Memorizem esse numero na mente de vocês!\n");
    printf("O computador ira definir por este numero qual jogador irá escolher os atributos que as cartas iram batalhar!\n");
    printf("Agora, cada 1 coloque os dados da sua carta!\n");

    // --- CARTA 1 ---
    printf("\nDigite os dados da carta do jogador 1:\n");

    printf("Estado: \n"); 
    scanf(" %s", estado1);
    printf("Código (ex: A01): \n");     
    scanf(" %s", codigo1);
    printf("Nome da cidade: \n");     
    scanf(" %s", nomeCidade1);
    printf("População: \n");     
    scanf(" %lu", &populacao1);
    printf("Área (km²): \n");     
    scanf(" %f", &area1);
    printf("PIB (bilhões de reais): \n");     
    scanf(" %f", &pib1);
    printf("Pontos turísticos: \n");     
    scanf(" %d", &pontosTuristicos1);

    // --- CARTA 2 ---
    printf("\nDigite os dados da carta do jogador 2:\n");

    printf("Estado: \n"); 
    scanf(" %s", estado2);
    printf("Código (ex: B02): \n"); 
    scanf(" %s", codigo2);
    printf("Nome da cidade: \n"); 
    scanf(" %s", nomeCidade2);
    printf("População: \n"); 
    scanf(" %lu", &populacao2);
    printf("Área (km²): \n"); 
    scanf(" %f", &area2);
    printf("PIB (bilhões de reais): \n"); 
    scanf(" %f", &pib2);
    printf("Pontos turísticos: \n"); 
    scanf(" %d", &pontosTuristicos2);

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibpercapta1 = pib1 / (float)populacao1;
    pibpercapta2 = pib2 / (float)populacao2;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapta1 + (1.0 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapta2 + (1.0 / densidade2);

    // Exibição das cartas
    printf("\nCarta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n", nomeCidade2);

    jogadorSelecionado = rand() % 2 + 1;
    printf("\nO computador selecionou o jogador %d para escolher os atributos.\n", jogadorSelecionado);

    // Menu dinâmico para escolha dos atributos
    printf("\nEscolha o primeiro atributo:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade demográfica\n6. PIB per capita\n");
    scanf("%d", &escolhaAtributo1);

    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        switch (escolhaAtributo1) {
            case 1:
                printf("2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade demográfica\n6. PIB per capita\n");
                break;
            case 2:
                printf("1. População\n3. PIB\n4. Pontos turísticos\n5. Densidade demográfica\n6. PIB per capita\n");
                break;
            case 3:
                printf("1. População\n2. Área\n4. Pontos turísticos\n5. Densidade demográfica\n6. PIB per capita\n");
                break;
            case 4:
                printf("1. População\n2. Área\n3. PIB\n5. Densidade demográfica\n6. PIB per capita\n");
                break;
            case 5:
                printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n6. PIB per capita\n");
                break;
            case 6:
                printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade demográfica\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
        scanf("%d", &escolhaAtributo2);
        if (escolhaAtributo1 == escolhaAtributo2) printf("\nVocê escolheu o mesmo atributo! Escolha outro.\n");
    } while (escolhaAtributo1 == escolhaAtributo2);

    // Comparações
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    switch (escolhaAtributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = pibpercapta1; valor1_carta2 = pibpercapta2; break;
    }

    switch (escolhaAtributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: valor2_carta1 = pibpercapta1; valor2_carta2 = pibpercapta2; break;
    }

    resultado1 = (escolhaAtributo1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
    resultado2 = (escolhaAtributo2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);

    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    // Resultados
    printf("\nRESULTADOS FINAIS\n");
    printf("Atributos escolhidos: %d e %d\n", escolhaAtributo1, escolhaAtributo2);
    printf("Valores da carta 1: %.2f e %.2f\n", valor1_carta1, valor2_carta1);
    printf("Valores da carta 2: %.2f e %.2f\n", valor1_carta2, valor2_carta2);
    printf("Somas: Carta 1 = %.2f, Carta 2 = %.2f\n", soma1, soma2);

    if (soma1 > soma2) {
        printf("\n%s venceu a rodada!\n", nomeCidade1);
    } else if (soma2 > soma1) {
        printf("\n%s venceu a rodada!\n", nomeCidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
