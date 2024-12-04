#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigo, pontos;
    char nome[30];
    float populacao;
    double area, PIB;



    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o codigo da cidade:\n");
    scanf("%d", &codigo);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos);

    printf("Agora digite o nome da cidade:\n");
    scanf("%s", nome);

    printf("Agora digite a população: \n");
    scanf("%f", &populacao);

    printf("Agora digite a área:\n");
    scanf("%lf", &area);

    printf("Agora digite o PIB:\n");
    scanf("%lf", &PIB);   


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Cidade: %s\n Codigo: %d\n Pontos: %d\n População: %.3f\n Área: %.3lf\n PIB: %.3lf\n", nome, codigo, pontos, populacao, area, PIB);

    return 0;
}
