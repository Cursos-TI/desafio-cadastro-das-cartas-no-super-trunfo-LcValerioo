#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int opcao;
    int numSecreto, palpite;

    printf("--- Seja Bem-Vindo ao Menu Principal ! ---\n");
    printf("Opção 1. Iniciar Jogo.\n");
    printf("Opção 2. Ver Regras.\n");
    printf("Opção 3. Sair.\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Iniciando o jogo...\n");
        srand(time(0)); //função geradora de numeros aleatórios
        numSecreto = rand() % 10;
        printf("Digite um numero de 0 à 9: ");
        scanf("%d", &palpite);
        if(numSecreto == palpite){
            printf("Você Acertou !\n");
            printf("O Numero secreto é = %d ", numSecreto);
        } else {
            printf("Você errou !\n");
            printf("O Numero secreto é = %d ", numSecreto);
        }
        break;
    case 2: 
        printf("As regras são...\n");
        break;
    case 3: 
        printf("Saindo do jogo...\n");
        break;
    default:
        printf("Opção Inválida\n");
        break;
    }
}