#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3
#define NAVIO 3
#define AGUA 0


int main() {

    // TABULEIRO 10X10
    int tabuleiro[TAM][TAM];
    
        // AGUA
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                tabuleiro[i][j] = AGUA;
            }
        }

        // NAVIO HORIZONTAL
        int linha = 1, coluna = 4;
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linha][coluna + i] = NAVIO;
        }

        // NAVIO VERTICAL
        linha = 6, coluna = 6;
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linha + i][coluna] = NAVIO;
        }

        // NAVIO DIAGONAL 1
        linha = 0, coluna = 0;
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linha + i][coluna + i] = NAVIO;
        }

        // NAVIO DIAGONAL 2
        linha = 2, coluna = 8;
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linha + i][coluna - i] = NAVIO;
        }

        // IMPRIMIR O TABULEIRO
        printf("\n===== TABULEIRO NAVAL =====\n");
        printf("\n");
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                printf("| %d ", tabuleiro[i][j]);
    
        }
        
        printf("\n");
        
    }

    return 0;
}
