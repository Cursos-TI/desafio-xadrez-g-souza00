#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    //Armazena a escolha
    int escolha;

    // Instrui a fazer uma escolha
    printf("Escolha uma peça \n");
    printf("1. Torre \n");
    printf("2. Bispo \n");
    printf("3. Rainha \n");
    scanf("%d", &escolha);

    // Entende qual escolha foi feita e roda o código apropriado
    switch (escolha)
    {
    case 1:
    for ( int i = 0; i < 5 ; i++) // Código para mover a torre para cima enquanto i for menor do que 5
    {
        printf("Cima \n");
    }
        break;
        case 2:
        for ( int i = 0; i < 5; i++) // Move para cima e para direita
        {
            printf("Cima e direita \n");
        }
        break;
        case 3:
        for (int i = 0; i < 5; i++) // Move para a esquerda
        {
            printf("Esquerda \n");
        }
        
            
    default:
        printf("Opção inválida");

        break;
    }

    return 0;
}
