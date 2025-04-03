#include <stdio.h>

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

    // Entrada de dados

    // --- CARTA 1 ---
    printf("\nDigite os dados da primeira carta:\n");

    printf("Estado: \n"); 
    scanf(" %s", &estado1);
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
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado: \n"); 
    scanf(" %s", &estado2);
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
   
    // Exibição dos resultados

    // --- CARTA 1 ---
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n",populacao1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n",pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapta1);

    // --- CARTA 2 ---
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n",populacao2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n",pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapta2);

    // Comparacao de atributos
    printf("\nComparacao de cartas:\n");
    
    // População
    printf("\nAtributo: Populacao\n");
    printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
    if (populacao1 > populacao2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (populacao1 < populacao2)
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Resultado: Empate!\n");
    
    // PIB
    printf("\nAtributo: PIB\n");
    printf("Carta 1 - %s (%s): %.2f bilhoes de reais\n", nomeCidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f bilhoes de reais\n", nomeCidade2, estado2, pib2);
    if (pib1 > pib2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (pib1 < pib2)
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Resultado: Empate!\n");
    
    // Densidade populacional
    printf("\nAtributo: Densidade Populacional\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidade2);
    if (densidade1 > densidade2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (densidade1 < densidade2)
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Resultado: Empate!\n");
    
    return 0;
}