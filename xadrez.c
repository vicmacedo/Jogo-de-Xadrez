#include <stdio.h>

// Tema 4 - Movimentação de Peças de Xadrez
// Movimentando as Peças do xadrez

int main() {
    int torre, bispo, Rainha;

    printf("Movimento das Peças de Xadrez\n");

    printf("\n");

    // movimentar a torre 5 casas para a direita
    printf("Movimento da torre (5 casas para a direita):\n");
    torre = 0;
    for (torre = 0; torre <5; torre++){    
        printf("Direita\n");
    }

    printf("\n");

    // movimentar o bispo cinco casas na diagonal para cima e à direita
    printf("Movimento do bispo (5 casas na diagonal para cima e à direita):\n");
    bispo = 0;
    while (bispo <5){
        printf("Cima Direita\n");
        bispo++;
    }

    printf("\n");

    // movimentar a rainha oito casas para a esquerda
    printf("Movimento da rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        Rainha++;
    } while (Rainha <8);
    
    return 0;
}