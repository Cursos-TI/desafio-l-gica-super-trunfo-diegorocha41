#include <stdio.h>
 
 int main() {
     // Definição das variáveis das cidades
     char estado1, estado2;
     char codigo1[5], codigo2[5];
     char nomeCidade1[50], nomeCidade2[50];
     unsigned long int populacao1, populacao2;
     float area1, area2;
     float pib1, pib2;
     int pontosTuristicos1, pontosTuristicos2;
     
 
     // Entrada de dados da primeira cidade
     printf("\n--- Cadastro da Primeira Cidade ---\n");
     printf("Digite a letra do estado:\n ");
     scanf(" %c", &estado1);
 
     printf("Digite o código da cidade:\n ");
     scanf("%s", codigo1);
 
     printf("Digite o nome da cidade:\n ");
     scanf(" %[^\n]", nomeCidade1);
 
     printf("Digite a população da cidade:\n ");
     scanf("%lu", &populacao1);
 
     printf("Digite a área da cidade (em km²):\n ");
     scanf("%f", &area1);
 
     printf("Digite o PIB da cidade (em bilhões de reais):\n ");
     scanf("%f", &pib1);
 
     printf("Digite a quantidade de pontos turísticos:\n ");
     scanf("%d", &pontosTuristicos1);
 
     // Entrada de dados da segunda cidade
     printf("\n--- Cadastro da Segunda Cidade ---\n");
     printf("Digite a letra do estado:\n ");
     scanf(" %c", &estado2);
 
     printf("Digite o código da cidade:\n ");
     scanf("%s", codigo2);
 
     printf("Digite o nome da cidade:\n ");
     scanf(" %[^\n]", nomeCidade2);
 
     printf("Digite a população da cidade:\n ");
     scanf("%lu", &populacao2);
 
     printf("Digite a área da cidade (em km²):\n ");
     scanf("%f", &area2);
 
     printf("Digite o PIB da cidade (em bilhões de reais):\n ");
     scanf("%f", &pib2);
 
     printf("Digite a quantidade de pontos turísticos:\n ");
     scanf("%d", &pontosTuristicos2);

     //comparacao da populacao.
     if (populacao1 > populacao2){
        printf("Cidade1 tem maior populacao!\n");
        
     }else{
        printf("cidade2 tem maior populacao!\n");
     }
     //comparacao da area territorial.
     if (area1 > area2){
        printf("Cidade1 tem maior area!\n");
        
     }else{
        printf("Cidade2 tem maior area!\n");
     }
     // coparacao do pib
     if (pib1 > pib2){
        printf("Cidade1 tem o maior pib!\n");
      
     }else{
      printf("Cidade2 tem o maior pib!\n");
     }
     // comparacao dos pontos turisticos.
     if (pontosTuristicos1 > pontosTuristicos2){
        printf("Cidade1 tem mais pontos turisticos!\n");
        
     }else{
        printf("Cidade2 tem mais pontos turisticos!\n");
     }
     

     return 0;
 }