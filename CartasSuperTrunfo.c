#include <stdio.h>

int main(){
    char estado1;
    int codigo1;
    char letra1; 
    char cidade1 [30];
    float populacao1; 
    float area1;
    float pib1;
    int nt1;
    float densidade1;
    float percapita1;
    
    printf ("Jogador 1 ,digite uma letra de A a H: ");
    scanf ("%c", &letra1);
    printf ("Digite um codigo de 01 a 04: ");
    scanf ("%d", &codigo1);
    printf ("Digite o nome da cidade: ");
    scanf ("%s", cidade1);
    printf ("Digite o numero da população da sua cidade: ");
    scanf ("%f", &populacao1);
    printf ("Digite a area da cidade em quilometros quadrados: ");
    scanf ("%f", &area1);
    printf ("Digite o PIB(produto interno bruto) da sua cidade: " );
    scanf ("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf ("%d", &nt1);

    densidade1= populacao1 / area1;
    percapita1= pib1 / populacao1;
    
    

    printf ("Jogador 1, os seus dados são: \nCarta 1\n");
    printf ("Estado: %c\n", letra1);
    printf ("Codigo: %c %d\n", letra1, codigo1);
    printf ("Nome da cidade: %s\n", cidade1);
    printf ("População: %f\n", populacao1);
    printf ("Area: %f\n", area1);
    printf ("PIB: %f\n", pib1);
    printf ("Pontos turisticos: %d\n", nt1);
    printf ("Densidade populacional: %f\n", densidade1);
    printf ("PIB per capita: %f\n", percapita1);
    





    char estado2;
    int codigo2;
    char letra2; 
    char cidade2 [30];
    float  populacao2; 
    float area2;
    float pib2;
    int nt2;
    float densidade2;
    float percapita2;
    
    printf ("Jogador 2, digite uma letra de A a H: ");
    scanf (" %c", &letra2);
    printf ("Digite um codigo de 01 a 04: ");
    scanf ("%d", &codigo2);
    printf ("Digite o nome da cidade: ");
    scanf ("%s", cidade2);
    printf ("Digite o numero da população da sua cidade: ");
    scanf ("%f", &populacao2);
    printf ("Digite a area da cidade em quilometros quadrados: ");
    scanf ("%f", &area2);
    printf ("Digite o PIB(produto interno bruto) da sua cidade: " );
    scanf ("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf ("%d", &nt2);

    densidade2= populacao2 / area2;
    percapita2= pib2 / populacao2;

    printf ("Jogador 2, os seus dados são: \nCarta 2\n");
    printf ("Estado: %c\n", letra2);
    printf ("Codigo: %c %d\n", letra2, codigo2);
    printf ("Nome da cidade: %s\n", cidade2);
    printf ("População: %f\n", populacao2);
    printf ("Area: %f\n", area2);
    printf ("PIB: %f\n", pib2);
    printf ("Pontos turisticos: %d\n", nt2);
    printf ("Densidade populacional: %f\n", densidade2);
    printf ("PIB per capita: %f\n", percapita2);



    float superpoder1, superpoder2;
    int resultado;

    superpoder1 = populacao1+ area1 + pib1 + percapita1+ 1 / densidade1 + nt1;
    superpoder2 = populacao2 + area2 + pib1 + percapita2 + 1 / densidade2+nt2;


    printf ("Jogador numero 1, sua super carta tem valor de %.f\n", superpoder1);
    printf ("Jogador numero 2 sua super carta tem o valor de %.f\n", superpoder2);
    

    resultado= superpoder1 > superpoder2;

    printf("Com os valores obtidos se a resposta for 1 a vitoria é do jogador 1 e se for 0 a vitoria é do jogador 2 \n");
    printf ("Resultado: %d\n", resultado);


}
