#include <stdio.h>

int main(){

    char estado1;
    char codigo1[10];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int turistico1;
    
    char estado2;
    char codigo2[10];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    

    printf("Jogo do Super Trunfo! ");
    printf("Insira as informações da primeira carta !\n");

    printf("Digite a sigla do estado: ");
    scanf(" %c", &estado1);

    printf("O codigo é a letra do estado acrescentado de um número ex: (A02, B05)\n");
    printf("Digite o codigo: ");
    scanf("%s", &codigo1);

    printf("Digite a cidade: ");
    scanf("%s", &cidade1);

    printf("Digite o total da população: ");
    scanf("%d", &populacao1);

    printf("Digite a área do local: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turistico: ");
    scanf("%d", &turistico1);

    printf("Insira as informações da segunda carta !\n");

    printf("Digite a sigla do estado: ");
    scanf(" %c", &estado2);

    printf("O codigo é a letra do estado acrescentado de um número ex: (A02, B05)\n");
    printf("Digite o codigo: ");
    scanf("%s", &codigo2);

    printf("Digite a cidade: ");
    scanf("%s", &cidade2);

    printf("Digite o total da população: ");
    scanf("%d", &populacao2);

    printf("Digite a área do local: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turistico: ");
    scanf("%d", &turistico2);

    float densidade1 = populacao1 / area1;
    float pib_per_Capita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pib_per_Capita2 = pib2 / populacao2;

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", turistico1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB per Capita: %f\n", pib_per_Capita1);
    printf(" \n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", turistico2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per Capita: %f\n", pib_per_Capita2);


}

}
