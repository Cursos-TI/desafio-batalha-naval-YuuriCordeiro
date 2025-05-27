#include <stdio.h>

#define TAMANHO 10
#define NAVIO_TAMANHO 4

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Posição inicial do navio horizontal
    int linha_horizontal = 2;
    int coluna_horizontal = 3;

    // Posição inicial do navio vertical
    int linha_vertical = 5;
    int coluna_vertical = 7;

    // Posiciona o navio horizontal
    for (int i = 0; i < NAVIO_TAMANHO; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = 1;
    }

    // Posiciona o navio vertical
    for (int i = 0; i < NAVIO_TAMANHO; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = 2;
    }

    // Exibe as coordenadas dos navios
    printf("Coordenadas do Navio Horizontal:\n");
    for (int i = 0; i < NAVIO_TAMANHO; i++) {
        printf("(%d, %d)\n", linha_horizontal, coluna_horizontal + i);
    }

    printf("\nCoordenadas do Navio Vertical:\n");
    for (int i = 0; i < NAVIO_TAMANHO; i++) {
        printf("(%d, %d)\n", linha_vertical + i, coluna_vertical);
    }

    return 0;
}
