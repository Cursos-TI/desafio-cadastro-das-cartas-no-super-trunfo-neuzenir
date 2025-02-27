#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo

int main() {
    
    //Declaração das variáveis do jogo.
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapta1, percapta2, inverso_densidade1, inverso_densidade2;

       // Cadastro das Cartas:
    
    //Cadastro da carta 1.
      printf("\nCadastre a Carta 1: \n");
      printf("Digite o estado (A-H): \n"); //Digitar uma letra de A a H.
      scanf("%c", &estado1);

      printf("Digite o código da carta: \n"); //Exemplo: A01, B03
      scanf("%s", &codigo1);

      printf("Digite o nome da cidade: \n");
      scanf("%s", &cidade1);

      printf("Digite a população: \n");
      scanf("%d", &populacao1);

      printf("Digite a área: \n");
      scanf("%f", &area1);

      printf("Digite o PIB: \n");
      scanf("%f", &pib1);

      printf("Digite o número de pontos turísticos: \n");
      scanf("%d", &pontos1);


     //Cadastro da carta 2.
       printf("\nCadastre a Carta 2: \n");
       printf("Digite o estado (A-H): \n"); //Digitar uma letra de A a H.
       scanf(" %c", &estado2);
 
       printf("Digite o código da carta: \n"); //Exemplo: A01, B03
       scanf("%s", &codigo2);
 
       printf("Digite o nome da cidade: \n");
       scanf("%s", &cidade2);
 
       printf("Digite a população: \n");
       scanf("%d", &populacao2);
 
       printf("Digite a área: \n");
       scanf("%f", &area2);
 
       printf("Digite o PIB: \n");
       scanf("%f", &pib2);
 
       printf("Digite o número de pontos turísticos: \n");
       scanf("%d", &pontos2);

      //Calculo da densidade e do PIB per Capta.
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    percapta1 = pib1 / (float) populacao1;
    percapta2 = pib2 / (float)populacao2;
    inverso_densidade1 = 1 / densidade1;
    inverso_densidade2 = 1 / densidade2;

    // Imprime na tela as informações cadastradas.
        printf ("\nDados da Carta 1: \n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %s\n", codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capta: %.2f reais\n", percapta1);

        printf ("\nDados da Carta 2: \n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %s\n", codigo2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capta: %.2f reais\n", percapta2);

        //Comparação entre as cartas e resultado.

        printf ("\nComparação das Cartas (Atributo: População): \n");
        printf("Carta 1 - %s, %d\n", cidade1, populacao1);
        printf("Carta 2 - %s, %d\n", cidade2, populacao2);

        if (populacao1 > populacao2)
        {
          printf("Resultado: Carta 1 - %s Venceu!\n", cidade1);
        } else {
          printf("Resultado: Carta 2 - %s Venceu!\n", cidade2);
        }

