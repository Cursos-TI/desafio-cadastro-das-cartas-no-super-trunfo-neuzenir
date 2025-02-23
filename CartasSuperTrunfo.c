#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    //Declaração das variáveis do jogo.
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    // Cadastro das Cartas:
    
    //Cadastro da carta 1.
    printf ("\nCadastre a Carta 1: \n");
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
     printf ("\nCadastre a Carta 2: \n");
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
 


    // Imprime na tela as informações cadastradas.

    printf ("\nDados da Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf ("\nDados da Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
