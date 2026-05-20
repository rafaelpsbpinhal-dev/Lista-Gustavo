#include <stdio.h>

void main() {
    int matriz[3][3];
    int i, j;

    // Leitura da matriz
    printf("Digite os valores da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibição apenas dos valores pares
    printf("\nValores pares da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(matriz[i][j] % 2 == 0) {
                printf("%4d", matriz[i][j]);
            } else {
                printf("    "); // espaço para manter a formatação
            }
        }
        printf("\n");
    }

}