#include <stdio.h>

void main() {
    int matriz[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal:\n");

    for (int i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }

    printf("\nDiagonal secundaria:\n");

    for (int i = 0; i < 4; i++) {
        printf("%d ", matriz[i][3 - i]);
    }

}