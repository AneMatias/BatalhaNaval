#include <stdio.h>

#define TAM 10
#define AGUA 0
#define NAVIO 3
#define TAM_HABILIDADE 5

int main() {

    // TABULEIRO 10X10
    int tabuleiro[TAM][TAM];
     
    // MATRIZES
    int cone[TAM_HABILIDADE][TAM_HABILIDADE];
    int cruz[TAM_HABILIDADE][TAM_HABILIDADE];
    int octaedro[TAM_HABILIDADE][TAM_HABILIDADE];

    int centro = TAM_HABILIDADE / 2; // sera o centro da matriz

    // CONE
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (i <= centro && j >= centro - i && j <= centro + i)
                cone[i][j] = NAVIO;
            else
                cone[i][j] = AGUA;
        }
        
    }

    // CRUZ
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (i == centro || j == centro)
                cruz[i][j] = NAVIO;
            else 
                cruz[i][j] = AGUA;
        }
    }

    // OCTAEDRO
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {

            int dist_linha;
            int dist_coluna;

            dist_linha = (i - centro);
            dist_coluna = (j - centro);

            if (i> centro)
                dist_linha = i - centro;
            else
                    dist_linha = centro - i;

            if (j > centro)
                dist_coluna = j - centro;
            else
                dist_coluna = centro - j;

            if (dist_linha + dist_coluna <= centro)
                octaedro[i][j] = NAVIO;
            else 
                    octaedro[i][j] = AGUA;
                
        }
    }
    
    // EXIBIR MATRIZES
    printf("\n=== CONE ===\n");
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\n=== CRUZ ===\n");
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    printf("\n=== OCTAEDRO ===\n");
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
        
    }
printf("\n");   



    return 0;
}
