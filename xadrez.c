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
    printf("4. Cavalo \n");
    scanf("%d", &escolha);

    // Entende qual escolha foi feita e roda o código apropriado
    switch (escolha)
    {
    case 1:
    for ( int i = 1; i < 5 ; i++) // Código para mover a torre para cima enquanto i for menor do que 5
    {
        printf("%d \n", i);
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
        case 4:
            for ( int i = 1; i <= 2; i++){ // Enquanto i for menor ou igual a 2 o loop roda e incrementa i
        for (int j = 1; j < 2; j++) // Enquanto j for menor do que 2 baixo é impresso e j é incrementado
        {
            printf("Baixo \n");
        }
        
    }

        for (int k = 1; k <= 1; k++){ // mesma lógica do outro loop
            for (int e = 1; e < 2; e++)
        {
            printf("Esquerda \n");
        }
        
    }   
        break;         
    default:
        printf("Opção inválida");

        break;
    }

    return 0;
}
