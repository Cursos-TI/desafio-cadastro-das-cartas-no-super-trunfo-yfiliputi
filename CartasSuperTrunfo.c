#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char nome[20];
    float populacao, area, PIB;
    int pontost;
    
    printf("Insira o nome da cidade:\n");
    scanf("%s", &nome);

    printf("Insira a população da cidade\n");
    scanf("%f", &populacao);

    printf("Insira a área da cidade:\n");
    scanf("%f", &area);

    printf("Insira o PIB da cidade:\n");
    scanf("%f", &PIB);

    printf("Insira a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontost);

    printf("Cidade cadastrada!");

    return 0;
}
