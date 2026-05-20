#include <stdio.h>

void main() {
    int matriz[3][3], temp;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = j + 1; k < 3; k++) {
                if (matriz[i][j] > matriz[i][k]) {
                    temp = matriz[i][j];
                    matriz[i][j] = matriz[i][k];
                    matriz[i][k] = temp;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


}