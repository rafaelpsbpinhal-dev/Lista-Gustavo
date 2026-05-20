#include <stdio.h>

void main() {
    int matriz[3][3];
    int i, j;
    int identidade = 1;

    printf("Digite os valores da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i == j && matriz[i][j] != 1) {
                identidade = 0;
            } else if(i != j && matriz[i][j] != 0) {
                identidade = 0;
            }
        }
    }

    if(identidade) {
        printf("\nA matriz é identidade.\n");
    } else {
        printf("\nA matriz não é identidade.\n");
    }


}