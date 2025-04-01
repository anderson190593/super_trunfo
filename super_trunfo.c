#include <stdio.h>

int main(){
    
    // Declaração de variáveis
    char estado1[30], estado2[30];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibpercapta1, pibpercapta2;

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
   
    // Exibição dos resultados

    // --- CARTA 1 ---
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n",populacao1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB: %f bilhões de reais\n", pib1);
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
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n",pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapta2);
    
    return 0;
}