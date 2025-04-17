#include <stdio.h>

int main(){
    //Dados da Carta 1
    char Estado1[50];
    char codigo1 [3];
    char Cidade1 [50];
  unsigned long int Populacao1;
    float Area1;
    float PIB1;
    int pontos_turisticos1;

    //Dados da Carta 2
    char Estado2[50];
    char codigo2 [3];
    char Cidade2[50];
   unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int pontos_turisticos2;



    //Campo de preenchimento Carta1. O usuário pode colocar o dado das cartas em suas áreas correspondentes
    printf("Digite seu Estado: \n");
    scanf("%s", Estado1);

    printf("Código da Carta: \n");
    scanf("%s", codigo1);

    printf("Digite sua Cidade: \n");
    scanf("%s", Cidade1);

    printf("População: \n");
    scanf("%lu", &Populacao1);

    printf("Área em km²: \n");
    scanf("%f", &Area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Pontos Turísticos: \n");
    scanf("%i", &pontos_turisticos1);

    //Cálculo de Densidade Populacional e de PIB Per Capita.  Carta 1
    float Densidade_Populacional =   Populacao1 / Area1;
    float PIB1_perCapita =  PIB1 / Populacao1;
    float Super_Poder1 = (int) Populacao1 + Area1 + PIB1 + pontos_turisticos1 + PIB1_perCapita + Densidade_Populacional;

    //Saída de Dados da Carta 1
    printf("Carta1: \n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %ld\n", Populacao1);
    printf("Area : %.2f km² \n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %i\n ", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional);
    printf("PIB per Capita: R$%.2f\n", PIB1_perCapita);


    //Campo de preenchimento Carta2. O usuário pode colocar o dado das cartas em suas áreas correspondentes
    printf("Digite seu Estado: \n");
    scanf("%s", Estado2);

    printf("Código da Carta: \n");
    scanf("%s", codigo2);

    printf("Digite sua Cidade: \n");
    scanf("%s", Cidade2);

    printf("População: \n");
    scanf("%lu", &Populacao2);

    printf("Área em km²: \n");
    scanf("%f", &Area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Pontos Turísticos: \n");
    scanf("%i", &pontos_turisticos2);

    //Cálculo de Densidade Populacional e de PIB Per Capita.  Carta 1
    float Densidade_Populacional2 = (float) Populacao2 / Area2;
    float PIB2_perCapita = (float) PIB2 / Populacao2;
    float Super_Poder2 = (int) Populacao2 + Area2 + PIB2 + pontos_turisticos2 + PIB2_perCapita + Densidade_Populacional2;

    //Saída de Dados da Carta 2
    printf("Carta2: \n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %lu\n", Populacao2);
    printf("Area: %f\n", Area2);
    printf("PIB: %f\n:", PIB2);
    printf("Pontos Turisticos: %i\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
    printf("PIB per Capita: R$%.2f\n", PIB2_perCapita);

    /*printf("***COMPARAÇÃO DE CARTAS***");
    printf("População: %lu\n", (Populacao1) > (Populacao2));
    printf("Área: %f\n", (Area1) > (Area2));
    printf("Pontos Turísticos: %i\n", (pontos_turisticos1) > (pontos_turisticos2));
    printf("Densidade Populacional: %d\n" (Densidade_Populacional) < (Densidade_Populacional2));
    printf("PIB per Capita: %f\n", (PIB1_perCapita) > (PIB2_perCapita));
    printf("Super poder:");*/

    //int resultado = Super_Poder1 > Super_Poder2;
    return 0;
}