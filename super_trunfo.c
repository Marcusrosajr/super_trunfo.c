#include <stdio.h>

int main(){
    //declaração das variáveis
    char estado[10], codigo[10], cidade[20];
    char estado2[10], codigo2[10], cidade2[20];

    int populacao, turistico;
    int populacao2, turistico2;

    float area, pib;
    float area2, pib2;

    //programa de cadastro das cartas

    printf("(Super Trunfo Em C)");
    printf(" Cadastre 2 cartas:\n");

    //carta 1
    printf("Carta 1:\n");

    printf("(Uma letra de 'A' a 'H') Estado: \n");
    scanf("%s", &estado);

    printf("(De 01 a 04) Código da Carta: \n");
    scanf("%s", &codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("(O número de habitantes da cidade) População: \n");
    scanf("%d", &populacao);

    printf("(área da cidade) Área(km): \n");
    scanf("%f", &area);

    printf("(O Produto Interno Bruto da cidade) PIB: \n");
    scanf("%f", &pib);

    printf("\nNúmero de Pontos Turísticos: \n");
    scanf("%d", &turistico);

    //Carta 2

    printf("Carta 2:\n");

    printf("(Uma letra de 'A' a 'H') Estado: \n");
    scanf("%s", &estado2);

    printf("(De 01 a 04) Código da Carta: \n");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("(número de habitantes da cidade) População: \n");
    scanf("%d", &populacao2);

    printf("(área da cidade) Área(km): \n");
    scanf("%f", &area2);

    printf("(Produto Interno Bruto da cidade) PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turistico2);

    //Resultado das cartas

    printf("\nRESULTADO DAS CARTAS:\n");

    //carta 1

    printf("Carta 1:\n");
    
    printf("Estado: %s\n", estado);
    
    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s\n", cidade);

    printf("População: %d\n", populacao);

    printf("Área: %.2f\n", area);

    printf("PIB: %f\n", pib);

    printf("Pontos Turísticos: %d\n", turistico);

    //carta 2
    
    printf("Carta 2:\n");
    
    printf("\nEstado: %s\n", estado2);
    
    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f\n", area2);

    printf("PIB: %f\n", pib2);

    printf("Pontos Turísticos: %d\n", turistico2);
}