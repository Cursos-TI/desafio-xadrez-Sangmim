#include <stdio.h>

// Constantes para movimentação das peças
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// Funções para movimentação das peças
void mover_bispo(int mov) {
    for (int i = 0; i < mov; i++) {
        printf("Diagonal Superior Direita\n");
    }
}

void mover_torre(int mov) {
    for (int i = 0; i < mov; i++) {
        printf("Direita\n");
    }
}

void mover_rainha(int mov) {
    for (int i = 0; i < mov; i++) {
        printf("Esquerda\n");
    }
}

int main() {
    // Movimentação das peças
    printf("Movimentação do Bispo:\n");
    mover_bispo(BISPO_MOV);

    printf("Movimentação da Torre:\n");
    mover_torre(TORRE_MOV);

    printf("Movimentação da Rainha:\n");
    mover_rainha(RAINHA_MOV);

    return 0;
}
