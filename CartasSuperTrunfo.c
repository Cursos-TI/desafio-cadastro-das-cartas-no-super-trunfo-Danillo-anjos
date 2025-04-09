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

    int atributo1, atributo2;

    // Função para mostrar o menu de atributos (oculta a opção já escolhida)
    void mostrarMenuAtributos(int excluido) {
    printf("Escolha um atributo:\n");
    if (excluido != 1) printf("1. População\n");
    if (excluido != 2) printf("2. Área\n");
    if (excluido != 3) printf("3. PIB\n");
    if (excluido != 4) printf("4. Pontos Turísticos\n");
    if (excluido != 5) printf("5. Densidade Demográfica\n");
    printf("Digite o número correspondente: ");
}

    // Função para obter o valor do atributo
    float obterValorAtributo(int opcao, int populacao, float area, float pib, int pontos, float densidade) {
    switch (opcao) {
        case 1: return (float)populacao;
        case 2: return area;
        case 3: return pib;
        case 4: return (float)pontos;
        case 5: return densidade;
        default: return 0;
    }
}

// Função para exibir o nome do atributo com base no número
const char* nomeAtributo(int opcao) {
    switch (opcao) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Desconhecido";
    }
}

// ---------------- MENU DINÂMICO - SELEÇÃO DO PRIMEIRO ATRIBUTO ----------------
printf("===== SUPER TRUNFO DOS ESTADOS =====\n");
mostrarMenuAtributos(0);
scanf("%d", &atributo1);

// Validação da escolha
if (atributo1 < 1 || atributo1 > 5) {
    printf("\nOpção inválida para o primeiro atributo. Encerrando programa.\n");
    return 1;
}

// ---------------- MENU DINÂMICO - SEGUNDO ATRIBUTO (sem repetir o primeiro) ----------------
printf("\nAgora escolha um segundo atributo (diferente do primeiro):\n");
mostrarMenuAtributos(atributo1);
scanf("%d", &atributo2);

// Validação da escolha
if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
    printf("\nOpção inválida para o segundo atributo. Encerrando programa.\n");
    return 1;
}

// ---------------- OBTENDO VALORES DOS ATRIBUTOS ----------------
float valor1_attr1 = obterValorAtributo(atributo1, populacao1, area1, pib1, pontosTuristicos1, densidade1);
float valor2_attr1 = obterValorAtributo(atributo1, populacao2, area2, pib2, pontosTuristicos2, densidade2);
   
float valor1_attr2 = obterValorAtributo(atributo2, populacao1, area1, pib1, pontosTuristicos1, densidade1);
float valor2_attr2 = obterValorAtributo(atributo2, populacao2, area2, pib2, pontosTuristicos2, densidade2);
   
float soma1 = valor1_attr1 + valor1_attr2;
float soma2 = valor2_attr1 + valor2_attr2;

// ---------------- EXIBIÇÃO DAS INFORMAÇÕES ----------------
printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
printf("Estados comparados: %s x %s\n\n", estado1, estado2);

printf("Atributo 1: %s\n", nomeAtributo(atributo1));
printf(" - %s: %.2f\n", estado1, valor1_attr1);
printf(" - %s: %.2f\n\n", estado2, valor2_attr1);

printf("Atributo 2: %s\n", nomeAtributo(atributo2));
printf(" - %s: %.2f\n", estado1, valor1_attr2);
printf(" - %s: %.2f\n\n", estado2, valor2_attr2);

printf("Soma dos Atributos:\n");
printf(" - %s: %.2f\n", estado1, soma1);
printf(" - %s: %.2f\n", estado2, soma2);

// ---------------- LÓGICA DE VITÓRIA ----------------
int invertido1 = (atributo1 == 5); // densidade
int invertido2 = (atributo2 == 5);

int pontos1 = 0, pontos2 = 0;

// Atributo 1
if (valor1_attr1 == valor2_attr1) {
    // empate
} else if ((valor1_attr1 > valor2_attr1 && !invertido1) || (valor1_attr1 < valor2_attr1 && invertido1)) {
    pontos1++;
} else {
    pontos2++;
}

// Atributo 2
if (valor1_attr2 == valor2_attr2) {
    // empate
} else if ((valor1_attr2 > valor2_attr2 && !invertido2) || (valor1_attr2 < valor2_attr2 && invertido2)) {
    pontos1++;
} else {
    pontos2++;
}

// ---------------- RESULTADO FINAL ----------------
printf("\nResultado final: ");
(soma1 == soma2) ? printf("Empate!\n") :
(soma1 > soma2) ? printf("%s venceu a rodada!\n", estado1) :
                  printf("%s venceu a rodada!\n", estado2);

return 0;

}
