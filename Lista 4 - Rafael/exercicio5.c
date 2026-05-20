#include <stdio.h>

void main() {
    int matriz[3][3];
    int i, j;
    int cont = 0; 

    
    printf("Digite os valores da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j] > 10) {
                cont++;
            }
        }
    }

   
    printf("\nMatriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nQuantidade de valores maiores que 10: %d\n", cont);


}