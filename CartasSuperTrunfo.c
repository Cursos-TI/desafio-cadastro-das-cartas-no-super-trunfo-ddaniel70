#include <stdio.h>
#include <string.h> //garantir que o strcspn seja reconhecido


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){

    //variaveis

    char estado1[20], estado2[20];                        //cada carta tem seu estado  
    char cidade1[20], cidade2[20];                       //cada cidade tem sua carta
    char numero1[4], numero2[4];                        //codigo da carta , usei numero para nao usar a palavra codigo podendo confundir.
    
    int populacao1, populacao2;                        // populaçao de cada cidade
    int pontos1, pontos2;                             //numero de pontos turisticos
   
    float area1, area2;                              //tamanho de cada cidade de cada carta
    float pib1, pib2;                               //PIB de cada cidade de cada carta 
    float densidade1;                              //densidade populacional carta 1
    float densidade2;                             //densidade populacional carta 1
    float pibpercapita1;                        //pib per capita carta 1 
    float pibpercapita2;                       //pib per capita carta 2
    float super1;                             // super poder carta1 
    float super2;                            // super poder carta 2'
    
    //tela inicial 

    printf("Bem Vindo Ao Super Trunfo \n");                      // tela de bem vindo
   
    //tela de cadastro da 1 carta

    printf("\nVamos cadastrar sua primeira Carta \n");

    printf("\ncrie um codigo unico para essa carta, exemplo: A01 \n");
    scanf("%s", numero1); // cadastrar o codigo unico da carta 1.

    getchar(); // limpar o buffer apos o scanf

    printf("Qual o nome da Cidade? \n");
    fgets(cidade1, sizeof(cidade1), stdin);   // ler mais de uma palavra usar o tamanho do array e entrada padrao do teclado
    cidade1[strcspn(cidade1, "\n")] = '\0';   // remover o enter pois o fgets captura o enter substituindo pelo \0

    printf("Qual o Estado dessa cidade? \n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';


    printf("Qual o tamanho da area dessa ciade em km²? use numeros\n");
    scanf("%f", &area1);

    printf("Qual o PIB dessa Cidade? use numeros\n");
    scanf("%f", &pib1);

    printf("Qual a Populaçao dessa Cidade? use numero\n");
    scanf("%d", &populacao1);

    printf("Quantos poontos turisticos tem essa Cidade? use numeros\n");
    scanf("%d", &pontos1);

     //variaveis , atribuindo os valores de densidade e pib per capita e super poder 
     densidade1 = (float) populacao1 / area1;
     pibpercapita1 = pib1 / (float) populacao1;
     super1 = (float) populacao1 + (float) pontos1 + area1 + pib1 + pibpercapita1 + (1 / densidade1);



    //cadastro carta 2

    printf("\n"); // dar espaço 

    printf("Tudo certo, Agora vamos cadastrar sua segunda carta! \n");
    printf("\n");

    printf("crie um codigo unico para essa carta,Nao pode ser igual o da carta1 exemplo: A02 \n");
    scanf("%s", numero2); // cadastrar o codigo unico da carta 1.

    getchar(); // limpar o buffer

    printf("Qual o nome da Cidade? \n");
    fgets(cidade2, sizeof(cidade2), stdin);   // cadastrar dois nomes , usar o tamanho do array e salvar usando entrada padrao do teclado
    cidade2[strcspn(cidade2, "\n")] = '\0';   // remover o enter

    printf("Qual o Estado dessa cidade? \n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Qual o tamanho da area dessa ciade em km²?  use numeros\n");
    scanf("%f", &area2);

    printf("Qual o PIB dessa Cidade? use numeros \n");
    scanf("%f", &pib2);

    printf("Qual a Populaçao dessa Cidade? use numeros  \n");
    scanf("%d", &populacao2);

    printf("Quantos poontos turisticos tem essa Cidade? use numeros\n");
    scanf("%d", &pontos2);
     
    
     //  varivaeis ,atribuindo os valores de densidade e pib per capita  carta 2 e super poder
    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 / (float) populacao2;
    super2 = (float) populacao2 + (float) pontos2 + area2 + pib2 + pibpercapita2 + (1 / densidade2);

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
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d \n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f \n", super1);

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
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d \n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f \n", super2);

    printf("\nObrigado Por Cadastrar sua Cartas \n");

    
    // comparaçao cartas
    printf("\nAgora vamos Comparar suas cartas que vença a melhor\n");
    printf("\nLembrando que 1, a carta 1 vence e 0 a carta dois venceu!\n");

    printf("\nPopulação: %d \n", populacao1 > populacao2);
    printf("Área: %d \n", area1 > area2);
    printf("PIB: %d \n", pib1 > pib2);
    printf("Pontos Turísticos: %d \n", pontos1 > pontos2);
    printf("Densidade Populacional: %d \n", densidade1 < densidade2);
    printf("PIB Per Capita: %d \n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: %d \n", super1 > super2);

    printf("\nObrigado por Jogar Super Trunfo\n");

    return 0;
}