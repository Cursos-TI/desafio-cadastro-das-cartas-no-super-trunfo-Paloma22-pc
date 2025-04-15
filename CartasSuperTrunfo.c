#include <stdio.h>

int main(){
    char estado1;
    int codigo1;
    char letra1; 
    char cidade1 [30];
    float  habitantes1; 
    float area1;
    float pib1;
    int nt1;

    printf ("Jogador 1 ,digite uma letra de A a H: ");
    scanf ("%c", &letra1);
    printf ("Digite um codigo de 01 a 04: ");
    scanf ("%d", &codigo1);
    printf ("Digite o nome da cidade: ");
    scanf ("%s", cidade1);
    printf ("Digite o numero de habitantes da sua cidade: ");
    scanf ("%f", &habitantes1);
    printf ("Digite a area da cidade em quilometros quadrados: ");
    scanf ("%f", &area1);
    printf ("Digite o PIB(produto interno bruto) da sua cidade: " );
    scanf ("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf ("%d", &nt1);

    printf ("Jogador 1, os seus dados são: \nCarta 1\n");
    printf ("Estado: %c\n", letra1);
    printf ("Codigo: %c %d\n", letra1, codigo1);
    printf ("Nome da cidade: %s\n", cidade1);
    printf ("População: %f\n", habitantes1);
    printf ("Area: %f\n", area1);
    printf ("PIB: %f\n", pib1);
    printf ("Pontos turisticos: %d\n", nt1);
    





    char estado2;
    int codigo2;
    char letra2; 
    char cidade2 [30];
    float  habitantes2; 
    float area2;
    float pib2;
    int nt2;

    
    printf ("Jogador 2, digite uma letra de A a H: ");
    scanf (" %c", &letra2);
    printf ("Digite um codigo de 01 a 04: ");
    scanf ("%d", &codigo2);
    printf ("Digite o nome da cidade: ");
    scanf ("%s", cidade2);
    printf ("Digite o numero de habitantes da sua cidade: ");
    scanf ("%f", &habitantes2);
    printf ("Digite a area da cidade em quilometros quadrados: ");
    scanf ("%f", &area2);
    printf ("Digite o PIB(produto interno bruto) da sua cidade: " );
    scanf ("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf ("%d", &nt2);

    printf ("Jogador 2, os seus dados são: \nCarta 2\n");
    printf ("Estado: %c\n", letra2);
    printf ("Codigo: %c %d\n", letra2, codigo2);
    printf ("Nome da cidade: %s\n", cidade2);
    printf ("População: %f\n", habitantes2);
    printf ("Area: %f\n", area2);
    printf ("PIB: %f\n", pib2);
    printf ("Pontos turisticos: %d\n", nt2);



}

