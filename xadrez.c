#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


void movertorre(int casas){ // Cria uma função recursiva com a váriavel casas
    if (casas > 0){ // Enquanto casas for maior do que 0, imprime cima e decrementa em 1, quando chegar a 0 o loop encerra
        printf("Cima \n");
        movertorre(casas - 1);
    }

}

void moverbispo(int casas2){ // Cria uma função recursiva com a váriavel casas2
    for(casas2; casas2 > 0; casas2--){ // Se casas2 for maior do que zero o loop roda (nesse caso cinco vezes)
        for (int e = 1; e > 0; e--)// Cria a váriavel e, se e for maior do que 0, e é decrementado
        {
            printf("Direita "); // Loop interno imprime direita
        }printf( "Cima \n"); // Imprime cima

    }
    
}


void moverrainha(int casas3){
    if (casas3 > 0){
        printf("Esquerda \n");
        moverrainha(casas3 - 1);
    }

}

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
    movertorre(5);
        break;
        case 2:
        moverbispo(5); // Chama a recursiva e passa o número 5 para ela

        break;
        case 3:
        moverrainha(5); 
        break;
        case 4:
            for (int i = 2; i > 0; i--){ //Enquanto i for maior que 0, i é decrementado
                if(i == 0) break; // Se i for igual a 0 Cima não é mais impresso
                printf("Cima \n");


            }printf("Direita \n"); // No fim do loop Direita é impresso
                   
        break;         
    default:
        printf("Opção inválida");

        break;
    }

    return 0;
}

