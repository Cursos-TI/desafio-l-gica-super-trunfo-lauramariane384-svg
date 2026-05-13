#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //Carta 01
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;
  float poder1;
  float inverso_densidade1;

  //Carta 02
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;
  float poder2;
  float inverso_densidade2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // === ENTRADA CARTA 1 ===
  printf("== Cadastro Carta 1 ==\n");

  printf("Estado (A a H): ");
  scanf(" %c", &estado1);

  printf("Codigo: ");
  scanf("%s", codigo1);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos1);

  float Densidade1 = (float) populacao1 / area1; // Cálculo da densidade populacional para a carta 1
  float PIB_per_capita1 = (float) pib1 / populacao1; // Cálculo do PIB per capita para a carta 1
  inverso_densidade1 = 1.0f / Densidade1; // Cálculo do inverso da densidade populacional para a carta 1
  poder1 = (float) populacao1 + area1 + pib1 + (float) pontos1 + inverso_densidade1; // Cálculo do poder da carta 1

  // === ENTRADA CARTA 2 ===
  printf("\n== Cadastro Carta 2 ==\n");

  printf("Estado (A a H): ");
  scanf(" %c", &estado2);

  printf("Codigo: ");
  scanf("%s", codigo2);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos2);

  float Densidade2 = (float) populacao2 / area2; // Cálculo da densidade populacional para a carta 2
  float PIB_per_capita2 = (float) pib2 / populacao2; // Cálculo do PIB per capita para a carta 2
  inverso_densidade2 = 1.0f / Densidade2; // Cálculo do inverso da densidade populacional para a carta 2
  poder2 = (float) populacao2 + area2 + pib2 + (float) pontos2 + inverso_densidade2; // Cálculo do poder da carta 2

      // Área para exibição dos dados da cidade
  printf("\n\n=== CARTAS CADASTRADAS ===\n");

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Densidade Populacional: %.2f\n", Densidade1);
  printf("PIB per Capita: %.2f\n", PIB_per_capita1);
  printf("Poder da Carta: %.2f\n", poder1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Densidade Populacional: %.2f\n", Densidade2);
  printf("PIB per Capita: %.2f\n", PIB_per_capita2);
  printf("Poder da Carta: %.2f\n", poder2);
    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    printf("\n\n=== COMPARACAO ENTRE AS CARTAS ===\n");

   if (populacao1 > populacao2) {
    printf("Carta 1 vence em população.\n");
   } else if (populacao2 > populacao1) {
    printf("Carta 2 vence em população.\n");
   } else {
    printf("As cartas têm a mesma população.\n");
   }

    if (area1 > area2) {
     printf("Carta 1 vence em área.\n");
    } else if (area2 > area1) {
     printf("Carta 2 vence em área.\n");
    } else {
     printf("As cartas têm a mesma área.\n");
    }

    if (pib1 > pib2) {
     printf("Carta 1 vence em PIB.\n");
    } else if (pib2 > pib1) {
     printf("Carta 2 vence em PIB.\n");
    } else {
     printf("As cartas têm o mesmo PIB.\n");
    }

    if (pontos1 > pontos2) {
     printf("Carta 1 vence em pontos turísticos.\n");
    } else if (pontos2 > pontos1) {
     printf("Carta 2 vence em pontos turísticos.\n");
    } else {
     printf("As cartas têm o mesmo número de pontos turísticos.\n");
    }

    if (Densidade1 < Densidade2) {
     printf("Carta 1 vence em densidade populacional (menor é melhor).\n");
    } else if (Densidade2 < Densidade1) {
     printf("Carta 2 vence em densidade populacional (menor é melhor).\n");
    } else {
     printf("As cartas têm a mesma densidade populacional.\n");
    }

    if (PIB_per_capita1 > PIB_per_capita2) {
     printf("Carta 1 vence em PIB per capita.\n");
    } else if (PIB_per_capita2 > PIB_per_capita1) {
     printf("Carta 2 vence em PIB per capita.\n");
    } else {
     printf("As cartas têm o mesmo PIB per capita.\n");
    }
    
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
     if (poder1 > poder2) {
     printf("Carta 1 vence no poder total.\n");
    } else if (poder2 > poder1) {
     printf("Carta 2 vence no poder total.\n");
    } else {
     printf("As cartas têm o mesmo poder total.\n");
    }

    
    return 0;
}
