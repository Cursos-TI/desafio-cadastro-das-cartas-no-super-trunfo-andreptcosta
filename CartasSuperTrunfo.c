#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    //Declaração de variaveis
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int codigoCidade1, codigoCidade2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidadeDemografica1, densidadeDemografica2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;

    printf("Cadastro de Cartas Super Trunfo - Países\n");

    //Chama a função de cadastro de carta 1
    cadastrarCarta(1, cidade1, codigoCidade1, populacao1, area1, pib1, pontosTuristicos1);
    printf("\n");

    //Chama a função de cadastro de carta 2
    cadastrarCarta(2, cidade2, codigoCidade2, populacao2, area2, pib2, pontosTuristicos2);

    // Calcular densidade demográfica e PIB per capita
    densidadeDemografica1 = populacao1 / area1;
    densidadeDemografica2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    superPoder1 = (populacao1 + area1 + pib1 + pontosTuristicos1 + densidadeDemografica1 + pibPerCapita1) / densidadeDemografica1;
    superPoder2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + densidadeDemografica2 + pibPerCapita2) / densidadeDemografica2;
    
    mostrarSeparador();
    // Exibir resultado
    printf("Resultado - Cadastro de Cartas Super Trunfo - Países\n");
    
    //Chama a função de para mostrar o resultado
    mostrarCarta(1, cidade1, codigoCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadeDemografica1, pibPerCapita1, superPoder1);
    mostrarCarta(2, cidade2, codigoCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadeDemografica2, pibPerCapita2, superPoder2);

    mostrarSeparador();

    char jogarPartida[1];
    printf("Deseja jogar uma partida? (S/N)\n");
    scanf("%s", jogarPartida);

    if (jogarPartida[0] == 'S' || jogarPartida[0] == 's') {
        printf("Jogando partida...\n");        

        // Comparar cartas
        compararCartas(cidade1,  populacao1, area1, pib1, pontosTuristicos1, densidadeDemografica1, pibPerCapita1, superPoder1,
            cidade2, populacao2, area2, pib2, pontosTuristicos2, densidadeDemografica2, pibPerCapita2, superPoder2);

    }

    return 0;
}

void cadastrarCarta(int numeroCarta, char cidade[], int codigoCidade, int populacao, float area, float pib, int pontosTuristicos) {
    printf("Carta %d\n", numeroCarta);
    printf("Nome da Cidade:");
    scanf("%s", cidade);
    printf("Código da Cidade:");
    scanf("%d", &codigoCidade);
    printf("População:");
    scanf("%d", &populacao);
    printf("Área:");
    scanf("%f", &area);
    printf("PIB:");
    scanf("%f", &pib);
    printf("Pontos Turísticos:");
    scanf("%d", &pontosTuristicos);
}

void mostrarCarta(int numeroCarta, char cidade[], int codigoCidade, int populacao, float area, float pib, int pontosTuristicos, float densidadeDemografica, float pibPerCapita, float superPoder) {
    printf("Carta %d\n", numeroCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Código da Cidade: %d\n", codigoCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Demográfica: %.2f habitantes/km²\n", densidadeDemografica);
    printf("PIB per Capita: %.2f\n", pibPerCapita);
    printf("Super poder: %.2f\n", superPoder);
}

void mostrarSeparador(){
    printf("==============================================\n");
}

void compararCartas(char cidade1[], int populacao1, float area1, float pib1, int pontosTuristicos1, float densidadeDemografica1, float pibPerCapita1, float superPoder1,
    char cidade2[], int populacao2, float area2, float pib2, int pontosTuristicos2, float densidadeDemografica2, float pibPerCapita2, float superPoder2) {
    printf("Comparação das Cartas\n");

    // Comparar população
    if (populacao1 > populacao2) {
    printf("Maior População: %s\n", cidade1);
    } else {
    printf("Maior População: %s\n", cidade2);
    }

    // Comparar área
    if (area1 > area2) {
    printf("Maior Área: %s\n", cidade1);
    } else {
    printf("Maior Área: %s\n", cidade2);
    }

    // Comparar PIB
    if (pib1 > pib2) {
    printf("Maior PIB: %s\n", cidade1);
    } else {
    printf("Maior PIB: %s\n", cidade2);
    }

    // Comparar pontos turísticos
    if (pontosTuristicos1 > pontosTuristicos2) {
    printf("Mais Pontos Turísticos: %s\n", cidade1);
    } else {
    printf("Mais Pontos Turísticos: %s\n", cidade2);
    }

    // Comparar PIB per capita
    if (pibPerCapita1 > pibPerCapita2) {
    printf("Maior PIB per Capita: %s\n", cidade1);
    } else {
    printf("Maior PIB per Capita: %s\n", cidade2);
    }

    // Comparar super poder
    if (superPoder1 > superPoder2) {
    printf("Maior Super Poder: %s\n", cidade1);
    } else {
    printf("Maior Super Poder: %s\n", cidade2);
    }

    // Comparar densidade demográfica
    if (densidadeDemografica1 < densidadeDemografica2) {
    printf("Menor Densidade Demográfica: %s\n", cidade1);
    } else {
    printf("Menor Densidade Demográfica: %s\n", cidade2);
    }
}