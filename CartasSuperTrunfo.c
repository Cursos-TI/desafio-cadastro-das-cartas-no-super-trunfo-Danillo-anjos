#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Desenvolvendo a Lógica do Jogo
// Este código serve como base para o desenvolvimento do sistema de interação e lógica mais complexa.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Dados das Cartas Pré-Cadastradas

    // Carta 1
    char estado1[] = "São Paulo";           //char = variável que armazena caracteres. Usada aqui para armazenar as letras do Estado.
    int populacao1 = 12300000;              //suporta números inteiros.         
    float area1 = 1521.11;                   //float = variável que armazena pontos flutuantes, ou seja, casas decimais. Usada aqui para armazenar a área da cidade em Km²
    float pib1 = 699.28;                    //Armazenar o PIB da cidade em bilhões de reais.
    int pontosTuristicos1 = 50;               //Armazenar o número de pontos turísticos.
    float densidade1 = populacao1 / area1;   
    

    // Carta 2
    char estado2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;                    //em bilhões
    int pontosTuristicos2 = 30;
    float densidade2 = populacao2 / area2;

    int opcao;

    // MENU INTERATIVO

    printf("=====SUPER TRUNFO - COMPARAÇÃO DE ESTADOS=====\n");              //printf = Sintaxe padrão de leitura.
    printf("Escolha o tributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite a opção desejada (1 a 5):");
    scanf("%d", &opcao);                                                //scanf = Sintaxe padrão para capturar os dados digitados pelo usuário.

    printf("\nComparando:\n");
    printf("Carta 1 - %s\n", estado1);
    printf("Carta 2 - %s\n\n", estado2);

    // COMPARAÇÃO BASEADA NA ESCOLHA

    switch (opcao) {
        case 1:
        printf("Atributo: População\n");
        printf("%s: %d habitantes\n", estado1, populacao1);                 // %s lê uma string. %d lê um número inteiro representando a população.
        printf("%s: %d habitantes\n", estado2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: %s venceu!\n", estado1);
        } else if ("populacao2 > populacao1") {
            printf("Resultado: %s venceu!\n", estado2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

        case 2:
        printf("Atributo: Área\n");
        printf("%s: %.2f Km²\n", estado1, area1);                           // %.2f Exibe duas casas decimais     
        printf("%s: %.2f Km²\n", estado2, area2);
        if (area1 > area2) {
            printf("Resultado: %s venceu!\n", estado1);
        } else if ("area2 > area1") {
            printf("Resultado: %s venceu!\n", estado2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

        case 3:
        printf("Atributo: PIB\n");
        printf("%s: %.2f bilhões\n", estado1, pib1);                 
        printf("%s: %.2f bilhões\n", estado2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: %s venceu!\n", estado1);
        } else if ("pib2 > pib1") {
            printf("Resultado: %s venceu!\n", estado2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

        case 4:
        printf("Atributo: Pontos Turísticos\n");
        printf("%s: %d habitantes\n", estado1, pontosTuristicos1);                 
        printf("%s: %d habitantes\n", estado2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("Resultado: %s venceu!\n", estado1);
        } else if ("pontosTuristicos2 > pontosTuristicos1") {
            printf("Resultado: %s venceu!\n", estado2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

        case 5:
        printf("Atributo: Densidade Demografica\n");
        printf("%s: %.2f hab/Km²\n", estado1, densidade1);                 
        printf("%s: %.2f hab/Km²\n", estado2, densidade2);

        // Para Densidade, o menor valor vence
        if (densidade1 < densidade2) {
            printf("Resultado: %s venceu! (menor densidade)\n", estado1);
        } else if ("densidade2 > densidade1") {
            printf("Resultado: %s venceu! (menor densidade)\n", estado2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    default:
        printf("Opção inválida! Por favor, escolha um número de 1 a 5.\n");

    }

    return 0;

}
