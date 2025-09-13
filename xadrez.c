#include <stdio.h>  // biblioteca (entrada/saída)

int main() {
    // Constantes: define a movimentação de cada peça
    const int BISPO = 5;
    const int TORRE = 5;
    const int RAINHA = 8;

    int i; // controle de loops

    // Bispo: movimenta-se para a diagonal superior direita
    printf("Movimento do Bispo:\n");
    for (i = 0; i < BISPO; i++) { // repete 5 vezes
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre: movimenta-se 5 casas para a direita
    printf("\nMovimento da Torre:\n");
    int j = 0;
    while (j < TORRE) { // enquanto j < 5
        printf("Direita\n");
        j++;
    }

    // Rainha: movimenta-se 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA);

    return 0; // encerrar
}

