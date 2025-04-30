#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){

    //variaveis

    char estado1[20], estado2[20];            //cada carta tem seu estado  
    char cidade1[20], cidade2[20];           //cada cidade tem sua carta
    char numero1[4], numero2[4];            //codigo da carta , usei numero para nao usar a palavra codigo podendo confundir.
    int populacao1, populacao2;            // populaçao de cada cidade
    int pontos1, pontos2;                  //numero de pontos turisticos
    float area1, area2;                   //tamanho de cada cidade de cada carta
    float pib1, pib2;                    //PIB de cada cidade de cada carta 
   
    //tela inicial 

    printf("Bem Vindo Ao Super Trunfo \n");                      // tela de bem vindo
   
    //tela de cadastro da 1 carta

    printf("Vamos cadastrar sua primeira Carta \n");

    printf("crie um codigo unico para essa carta, exemplo: A01 \n");
    scanf("%s", numero1); // cadastrar o codigo unico da carta 1.

    printf("Qual o nome da Cidade? \n");
    scanf("%s", cidade1);

    printf("Qual o Estado dessa cidade? \n");
    scanf("%s", estado1);

    printf("Qual o tamanho da area dessa ciade em km²? use numeros e pontos\n");
    scanf("%f", &area1);

    printf("Qual o PIB dessa Cidade? use numeros e pontos\n");
    scanf("%f", &pib1);

    printf("Qual a Populaçao dessa Cidade? use numeros e pontos\n");
    scanf("%d", &populacao1);

    printf("Quantos poontos turisticos tem essa Cidade?\n");
    scanf("%d", &pontos1);

    //cadastro carta 2

    printf("\n"); // dar espaço 

    printf("Tudo certo, Agora vamos cadastrar sua segunda carta! \n");
    printf("\n");

    printf("crie um codigo unico para essa carta,Nao pode ser igual o da carta1 exemplo: A02 \n");
    scanf("%s", numero2); // cadastrar o codigo unico da carta 1.

    printf("Qual o nome da Cidade? \n");
    scanf("%s", cidade2);

    printf("Qual o Estado dessa cidade? \n");
    scanf("%s", estado2);

    printf("Qual o tamanho da area dessa ciade em km²?  use numeros e pontos\n");
    scanf("%f", &area2);

    printf("Qual o PIB dessa Cidade? use numeros e pontos\n");
    scanf("%f", &pib2);

    printf("Qual a Populaçao dessa Cidade? use numeros e pontos \n");
    scanf("%d", &populacao2);

    printf("Quantos poontos turisticos tem essa Cidade?\n");
    scanf("%d", &pontos2);
     
    // agora mostraremos as informaçoes da 1 carta

    printf("\n");   

    printf("informaçoes das cartas cadstradas \n");
    printf("\n");                       //espaço
    printf("Carta 1");
    printf("\n");
    printf("Codigo da Carta: %s \n", numero1);
    printf("Cidade: %s \n", cidade1);
    printf("Estado: %s \n", estado1);
    printf("Populaçao: %d \n", populacao1);
    printf("Area: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos turisticos: %d \n", pontos1);

    printf("\n");

    // informaçoes da 2 carta

    printf("informaçoes da segunda carta \n");
    printf("\n");                       //espaço
    printf("Carta 2");
    printf("\n");
    printf("Codigo da Carta: %s \n", numero2);
    printf("Cidade: %s \n", cidade2);
    printf("Estado: %s \n", estado2);
    printf("Populaçao: %d \n", populacao2);
    printf("Area: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turisticos: %d \n", pontos2);

    printf("\n");
    printf("\nObrigado Por Cadastrar sua Cartas \n");

    return 0;
}
