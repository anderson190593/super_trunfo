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
    int escolhaAtributo1, escolhaAtributo2;
    int jogadorSelecionado;
    int resultado1, resultado2;
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
   
    // Exibição dos resultados

    // --- CARTA 1 ---
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n",populacao1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n",pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapta1);
    printf("Super poder: %f\n", superPoder1);

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
    printf("Super poder: %f\n", superPoder2);

    jogadorSelecionado = rand() % 2 + 1;
    printf("\nO computador ira selecionar o jogador pra escolher o atributo!\n");
    printf("\nO jogador selecionado é o numero %d\n", jogadorSelecionado); 

    printf("\nVocê pode escolher dois atributos para batalhar!\n");

    printf("\nEscolha o primeiro atributo que você deseja batalhar!:\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capta\n");
    scanf("%d", &escolhaAtributo1);

    printf("\nEscolha o segundo atributo que você deseja batalhar!:\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capta\n");
    scanf("%d", &escolhaAtributo2);

    if (escolhaAtributo2 == escolhaAtributo1)
    {
        printf("Você escolheu o mesmo atributo!");        
    }    

    switch (escolhaAtributo1) {
        case 1:
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
    
        case 2:
            resultado1 = area1 > area2 ? 1 : 0;
            break;
    
        case 3:
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
    
        case 4:
            resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;
    
        case 5:
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
    
        case 6:
            resultado1 = pibpercapta1 > pibpercapta2 ? 1 : 0;
            break;
    
        default:
            printf("Atributo inválido!\n");
            break;
    }

    switch (escolhaAtributo2) {
        case 1:
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
    
        case 2:
            resultado2 = area1 > area2 ? 1 : 0;
            break;
    
        case 3:
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
    
        case 4:
            resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;
    
        case 5:
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
    
        case 6:
            resultado2 = pibpercapta1 > pibpercapta2 ? 1 : 0;
            break;
    
        default:
            printf("Atributo inválido!\n");
            break;
    }

    printf("RESULTADO FINAL!\n");
    printf("As cidades que batalharam foram %s e %s.\n", nomeCidade1, nomeCidade2);
    printf("Os atributos escolhidos foram %d e %d\n", escolhaAtributo1, escolhaAtributo2);

    if (resultado1 == 1)
    {
        printf("O jogador numero 1 ganhou no primeiro atributo!\n");
    } else {
        printf("O jogador numero 2 ganhou no primeiro atributo!\n");
    }

    if (resultado2 == 1)
    {
        printf("O jogador numero 1 ganhou no segundo atributo!\n");
    } else {
        printf("O jogador numero 2 ganhou no segundo atributo!\n");
    }
    

    return 0;
}