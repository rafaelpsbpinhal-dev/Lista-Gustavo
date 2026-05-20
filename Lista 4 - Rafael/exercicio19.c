#include <stdio.h>

void main() {
    int matriz[3][3][3];

    for (int k = 0; k < 3; k++) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%d", &matriz[k][i][j]);
            }
        }
    }

    for (int k = 0; k < 3; k++) {
        printf("Camada %d:\n", k);

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", matriz[k][i][j]);
            }
            printf("\n");
        }

        printf("\n");
    }

}