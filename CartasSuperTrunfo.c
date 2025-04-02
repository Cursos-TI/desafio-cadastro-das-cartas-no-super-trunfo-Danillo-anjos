#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Declaração de variáveis para a primeira carta
    char estado1;           //char = variável que armazena caracteres. Usada aqui para armazenar a letra do estado (A-H).
    char codigo1[4];        //Armazena o código da carta (ex: "A01").
    char nomeCidade1[50];   //Armazena o nome da cidade (Até 49 caracteres + '\0' no final).
    int populacao1;         //int = variável que armazena números inteiros. Usada aqui para armazenar o número de habitantes da cidade.
    float area1;            //float = variável que armazena pontos flutuantes, ou seja, casas decimais. Usada aqui para armazenar a área da cidade em Km²
    float pib1;             //Armazenar o PIB da cidade em bilhões de reais.
    int pontosTuristicos1;  //Armazenar o número de pontos turísticos.
    float densidadePopulacional1;
    float pibPerCapita1;

    //Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\nDigite os dados da Carta 1:\n");          //printf = Sintaxe padrão de leitura.

    printf("Estado (A-H): ");
    scanf("%c", &estado1);                              //scanf = Sintaxe padrão para capturar os dados digitados pelo usuário. %c lê um caractere representando o Estado.

    printf("Código da carta (ex: A01, B03): ");
    scanf("%s", codigo1);                               //%s lê uma string contendo o código da carta.

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);                      //%[^\n] lê uma string com espaços até a quebra de linha.

    printf("População: ");
    scanf("%d", &populacao1);                           //%d lê um número inteiro representando a população.

    printf("Área (em km²): ");
    scanf("%f", &area1);                                //%f lê um número decimal representando a área.

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);                                 //%f lê um número decimal representando o PIB.

    printf("Números de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);                    //%d lê número inteiro representando os pontos turísticos.

    //Cálculo das propriedades densidadePopulacional1 e pibPerCapita1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; //Convertendo PIB para Reais

    //Leitura de dados da segunda carta

    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Números de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Cálculo das propriedades densidadePopulacional2 e pibPerCapita2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; //Convertendo PIB para Reais

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %2.f km²\n", area1);                              //%.2f Exibe a área com duas casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib1);                   //%.2f Exibe o PIB com duas casas decimais.
    printf("Número de pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional (hab/km²): %.2f\n", densidadePopulacional1);
    printf("Pib per Capita (reais): %.2f\n", pibPerCapita1);

    //Exibição de dados da segunda carta

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional (hab/km²): %.2f\n", densidadePopulacional2);
    printf("Pib per Capita (reais): %.2f\n", pibPerCapita2);

    return 0;
}
