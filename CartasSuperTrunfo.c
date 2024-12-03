#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //Inicializando as variaveis
    char nome[50];
    int pTuristico = 0;
    float area, pib, pop = 0;

    //Cadastrando as cartas (input de dados)
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%f", &pop);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pTuristico);

    //Exibindo as informações (output de dados)

    printf("Nome da carta: %s\n", nome);
    printf("Atributos\n");
    printf("População: %f\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turisticos: %d\n", pop, area, pib, pTuristico);

    //Fim do programa

    return 0;
}
