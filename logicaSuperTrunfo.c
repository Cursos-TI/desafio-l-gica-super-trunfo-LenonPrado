#include <stdio.h>

int main() {

    char estado[3];
    char codigo[10];
    char nomeCidade[100];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    char estado2[3];
    char codigo2[10];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //Carta 1
    printf(" Carta Super Trunfo 1 \n");

    printf("Informe o estado: ");
    scanf("%2s", estado);

    printf("Informe o código da cidade: ");
    scanf("%9s", codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade); 

    printf("Informe a população: ");
    scanf("%d", &populacao);

    printf("Informe a área(em km²): ");
    scanf("%f", &area);

    printf("Informe o PIB: ");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n");

    // Carta 2
    printf(" Carta Super Trunfo 2 \n");

    printf("Informe o estado: ");
    scanf("%2s", estado2);

    printf("Informe o código da cidade: ");
    scanf("%9s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a população: ");
    scanf("%d", &populacao2);

    printf("Informe a área(em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);


        printf("\n Comparação: Quem número de população maior? \n");


    if (populacao > populacao2){
        printf("Carta 1 vence! %s tem maior número de população.\n", nomeCidade);
    }
    else if (populacao2 > populacao){
        printf("Carta 2 vence! %s tem maior número de população.\n", nomeCidade2);
    }
    else{
        printf("Empate! As duas cidades têm o mesmo número de população.\n");
    }


        printf("\n Comparação de área(km²): Qual estado é maior? \n");

    if(area > area2){
        printf("Carta 1 vence! %f tem uma área(km²) maior.\n");
    }
    else if (area2 > area){
        printf("Carta 2 vence! %f tem uma área(km²) maior.\n");
    }
    else{
        printf("Empate! As duas áreas tem o mesmo tamanho.\n");
    }


        printf("\n Comparação do PIB: Qual PIB é maior? \n");

    if(pib > pib2){
        printf("Carta 1 vence! %f o PIB é maior.\n");
    }
    else if (pib2 > pib){
        printf("Carta 2 vence! %f o PIB é maior.\n");
    }
    else{
        printf("Empate! Os dois PIB tem o mesmo valor.\n");
    }

    return 0;
}
