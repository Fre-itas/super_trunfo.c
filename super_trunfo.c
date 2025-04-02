#include <stdio.h>

int main(){
    char Estado1[50];
    char codigo1 [3];
    char Cidade1 [50];
    int Populacao1;
    float Area1;
    float PIB1;
    int pontos_turisticos1;

    char Estado2[50];
    char codigo2 [3];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int pontos_turisticos2;


    printf("Digite seu Estado: \n");
    scanf("%s", Estado1);

    printf("Código da Carta: \n");
    scanf("%s", codigo1);

    printf("Digite sua Cidade: \n");
    scanf("%s", Cidade1);

    printf("População: \n");
    scanf("%i", &Populacao1);

    printf("Área em km²: \n");
    scanf("%f", &Area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Pontos Turísticos: \n");
    scanf("%i", &pontos_turisticos1);


    printf("Carta1: \n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %i\n", Populacao1);
    printf("Area: %.2f\n", Area1);
    printf("PIB: %.2f\n:", PIB1);
    printf("Pontos Turisticos: %i\n ", pontos_turisticos1);


    printf("Digite seu Estado: \n");
    scanf("%s", Estado2);

    printf("Código da Carta: \n");
    scanf("%s", codigo2);

    printf("Digite sua Cidade: \n");
    scanf("%s", Cidade2);

    printf("População: \n");
    scanf("%i", &Populacao2);

    printf("Área em km²: \n");
    scanf("%f", &Area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Pontos Turísticos: \n");
    scanf("%i", &pontos_turisticos2);


    printf("Carta2: \n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %i\n", Populacao2);
    printf("Area: %f\n", Area2);
    printf("PIB: %f\n:", PIB2);
    printf("Pontos Turisticos: %i\n", pontos_turisticos2);

    return 0;
}