
#include <stdio.h>

int main() {
    //declarando variaveis
  char estado[2];
  int carta;
  char cidade[30];
  int populacao;
  float area;
  float pib;
  int pontos;

  //declarando variaveis 2
    char estado2[2];
  int carta2;
  char cidade2[30];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

    //solicitando dados ao usuario 1
  printf("Qual Numero da sua carta?:\n");
  scanf("%d", &carta);

  printf("Qual seu estado? (Letra):\n");
  scanf("%s", &estado[0]);
  estado[1] = '\0'; 

    printf("Qual sua cidade?:\n");
    scanf("%s", &cidade);

    printf("Qual a sua populacao?:\n");
    scanf("%d", &populacao);

    printf("Qual a sua area?:\n");
    scanf("%f", &area);

    printf("Qual o seu PIB?:\n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem?:\n");
    scanf("%d", &pontos);


    
    //solicitando dados ao usuario 2
  printf("Qual Numero da sua 2° carta?:\n");
  scanf("%d", &carta2);

  printf("Qual seu 2° estado? (Letra):\n");
  scanf("%s", &estado2[0]);
  estado[1] = '\0'; 

    printf("Qual sua 2° cidade?:\n");
    scanf("%s", &cidade2);

    printf("Qual a populacao da sua 2° carta?:\n");
    scanf("%d", &populacao2);

    printf("Qual a area da 2° carta?:\n");
    scanf("%f", &area2);

    printf("Qual o seu PIB da 2° carta?:\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem sua 2° cidade?:\n");
    scanf("%d", &pontos2);


    //imprimindo os dados 1
    printf("-----DADOS DA CARTA 1-----\n");
    printf("sua Carta é: %d\n", carta);

    printf("seu estado é: %s\n", estado);

    printf("seu Codigo É: %s%02d\n", estado, carta);

    printf("Nome da cidade: %s\n", cidade);

    printf("Populacao da cidade: %d\n", populacao);

    printf("Area da cidade: %.2f km²\n", area);

    printf("PIB da cidade: %.2f bilhões\n", pib);

    printf("Pontos turisticos: %d\n", pontos);




    //imprimindo os dados 2
    printf("\n-----DADOS DA CARTA 2-----\n");
    printf("sua Carta é: %d\n", carta2);

    printf("seu estado é: %s\n", estado2);

    printf("seu Codigo É: %s%02d\n", estado2, carta2);

    printf("Nome da cidade: %s\n", cidade2);

    printf("Populacao da cidade: %d\n", populacao2);

    printf("Area da cidade: %.2f km²\n", area2);

    printf("PIB da cidade: %.2f bilhões\n", pib2);

    printf("Pontos turisticos: %d\n", pontos2);

    return 0;

   

  
}
