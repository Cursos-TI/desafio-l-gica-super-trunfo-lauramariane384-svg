#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// No nível Aventureiro, você expandirá o sistema para incluir a comparação aninhada e a criação de um menu interativo usando

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
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
  char estado2 = 'D';
  char codigo2[4] = "D01";
  char cidade2[50] = "São Paulo";
  int populacao2 = 11300000;
  float area2 = 152.8;
  float pib2 = 125000.0;
  int pontos2 = 10;
  float Densidade2 = (float) populacao2 / area2; // Cálculo da densidade populacional para a carta 2
  float PIB_per_capita2 = (float) pib2 / populacao2; // Cálculo do PIB per capita para a carta 2
  float inverso_densidade2 = 1.0f / Densidade2; // Cálculo do inverso da densidade populacional para a carta 2
  float poder2 = (float) populacao2 + area2 + pib2 + (float) pontos2 + inverso_densidade2; // Cálculo do poder da carta 2

  printf("=== DESAFIO SUPER TRUNFO - PAÍSES ===\n");
  printf("Escolha uma opção:\n");
  printf("1. Cadastrar Cartas\n");
  printf("2. Exibir Regras\n");
  printf("3. Sair\n");
  int opcao;
  printf("Digite sua escolha: ");
  scanf("%d", &opcao);
  
  switch (opcao) { 
  case 1:
    // Área para entrada de dados
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
  

    // Área para exibição dos dados da cidade
    printf("\n\n=== CARTAS CADASTRADAS ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Demográfica: %.2f\n", Densidade1);
    printf("PIB per Capita: %.2f\n", PIB_per_capita1);
    printf("Poder da Carta: %.2f\n", poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Demográfica: %.2f\n", Densidade2);
    printf("PIB per Capita: %.2f\n", PIB_per_capita2);
    printf("Poder da Carta: %.2f\n", poder2);

    // === COMPARAÇÕES ATRIBUTO POR ATRIBUTO ===
    printf("\n\n=== COMPARACAO ENTRE AS CARTAS ===\n");

    int atributo1, atributo2;

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo (menu dinâmico)
    printf("\nEscolha o segundo atributo:\n");

    switch(atributo1) {
      case 1:
        printf("2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
        break;
      case 2:
        printf("1 - População\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
        break;
      case 3:
        printf("1 - População\n2 - Área\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
        break;
      case 4:
        printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade Demográfica\n");
        break;
      case 5:
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
        break;
      default:
        printf("Opção inválida!\n");
        return 1;
    }

    scanf("%d", &atributo2);

    // Impede atributos iguais
    if(atributo1 == atributo2) {
      printf("Você não pode escolher o mesmo atributo duas vezes!\n");
      return 1;
    }

    // Variáveis para armazenar valores
    float valor1Carta1, valor1Carta2;
    float valor2Carta1, valor2Carta2;

    // Comparação do primeiro atributo
    switch(atributo1) {
      case 1:
        valor1Carta1 = populacao1;
        valor1Carta2 = populacao2;
        break;
      case 2:
        valor1Carta1 = area1;
        valor1Carta2 = area2;
        break;
      case 3:
        valor1Carta1 = pib1;
        valor1Carta2 = pib2;
        break;
      case 4:
        valor1Carta1 = pontos1;
        valor1Carta2 = pontos2;
        break;
      case 5:
        valor1Carta1 = Densidade1;
        valor1Carta2 = Densidade2;
        break;
    }

    // Comparação do segundo atributo
    switch(atributo2) {
     case 1:
        valor2Carta1 = populacao1;
        valor2Carta2 = populacao2;
        break;
      case 2:
        valor2Carta1 = area1;
        valor2Carta2 = area2;
        break;
      case 3:
        valor2Carta1 = pib1;
        valor2Carta2 = pib2;
        break;
      case 4:
        valor2Carta1 = pontos1;
        valor2Carta2 = pontos2;
        break;
     case 5:
        valor2Carta1 = Densidade1;
        valor2Carta2 = Densidade2;
        break;
    }

    // Soma dos atributos
    float somaCarta1 = valor1Carta1 + valor2Carta1;
    float somaCarta2 = valor1Carta2 + valor2Carta2;

    // Resultado
    printf("\nComparação entre %s e %s\n", cidade1, cidade2);
    printf("Atributo 1: %.2f vs %.2f\n", valor1Carta1, valor1Carta2);
    printf("Atributo 2: %.2f vs %.2f\n", valor2Carta1, valor2Carta2);
    printf("Soma carta 1: %.2f\n", somaCarta1);
    printf("Soma carta 2: %.2f\n", somaCarta2);

    // Verificação do vencedor
    if(somaCarta1 > somaCarta2) {
      printf("Vencedor: %s\n", cidade1);
    } else if(somaCarta2 > somaCarta1) {
      printf("Vencedor: %s\n", cidade2);
    } else {
      printf("Empate!\n");
    }
  break;
   
  case 2:
    printf("Regras do Jogo:\n");
    printf("1. O jogador vai cadastrar uma carta com as informações de um país (estado, código, cidade, população, área, PIB e pontos turísticos).\n");
    printf("2. O sistema já possui uma carta pré-cadastrada para comparação.\n");
    printf("3. O jogador escolhe dois atributos para comparar (nome do país, população, área, PIB, pontos turísticos ou densidade demográfica).\n");
    printf("4. O jogo irá comparar a carta cadastrada com uma carta pré-definida (Carta 2) com base em um atributo escolhido pelo jogador.\n");
    printf("5. O vencedor é determinado com base no valor do atributo escolhido (maior ou menor, dependendo do atributo).\n");
  break;

  case 3:
    printf("Saindo...\n");
    break;
  }

  printf("Obrigado por jogar!\n");

return 0;
}
