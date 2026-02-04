#include <stdio.h>

int main() {

    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3]   = {3, 3, 3};

    int batalhaNaval[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,3,3,3,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,3,0,0,0,3,3,3,0},
        {0,0,3,0,0,0,0,0,0,0},
        {0,0,3,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    printf("\n===== TABULEIRO NAVAL =====\n");
    printf("\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("| %d ", batalhaNaval[i][j]);
    
        }
        
        printf("\n");
        
    }

    return 0;
}
