#include <stdio.h>

void main() {
    int matriz[2][3];
    int i, j;
    int soma = 0;
    float media;

    
    printf("Digite os valores da matriz 2x3:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j];
        }
    }

    
    media = soma / 6.0;

    
    printf("\nMatriz 2x3:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    // Resultados
    printf("\nSoma dos elementos = %d\n", soma);
    printf("Media dos valores = %.2f\n", media);

    
}