#include <stdio.h>

int main(){
    char estado [50], estado2 [50];
    char codigo [50], codigo2 [50];
    char cidade [50], cidade2 [50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos, pontos2;

    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite o código: ");
    scanf("%s", codigo);

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos);

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o código: ");
    scanf("%s", codigo2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos2);

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area, "km²");
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);


    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2, "km²");
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;


}