#include <stdio.h>
#include <string.h>

int main() {
    char estado1[3];   
    char codigo1[10];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int numero1;
    
    char estado2[3];
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int numero2;

    printf("A Letra do estado da primeira carta é: \n");   //Inicio dos dados da carta 1
    scanf("%2s", estado1);  // até 2 caracteres + '\0'

    printf("O codigo da primeira carta é: \n");
    scanf("%9s", codigo1);  // até 9 caracteres + '\0'

    getchar(); // limpa o ENTER deixado pelo scanf anterior

    printf("O nome da cidade da primeira carta é: \n");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';  // remove o \n no final

    printf("A população da primeira carta é: \n");
    scanf("%d", &populacao1);

    printf("A Área da primeira carta é: \n");
    scanf("%f", &area1);

    printf("O PIB da primeira carta é: \n");
    scanf("%f", &pib1);

    printf("A Quantidade de pontos turisticos da primeira carta é: \n");
    scanf("%d", &numero1);

    

    printf("A Letra do estado da Segunda carta é: \n");    //Inicio dos dados da carta 2.
    scanf("%2s", estado2);  // até 2 caracteres + '\0'

    printf("O codigo da Segunda carta é: \n");
    scanf("%9s", codigo2);  // até 9 caracteres + '\0'

    getchar(); // limpa o ENTER deixado pelo scanf anterior

    printf("O nome da cidade da Segunda carta é: \n");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';  // remove o \n no final

    printf("A população da Segunda carta é: \n");
    scanf("%d", &populacao2);

    printf("A Área da Segunda carta é: \n");
    scanf("%f", &area2);

    printf("O PIB da Segunda carta é: \n");
    scanf("%f", &pib2);

    printf("A Quantidade de pontos turisticos da Segunda carta é: \n");
    scanf("%d", &numero2);


    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero2);



    return 0;
}