#include <stdio.h>

void main() {
    int linhas, colunas;

    scanf("%d %d", &linhas, &colunas);

    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int j = 0; j < colunas; j++) {
        int soma = 0;

        for (int i = 0; i < linhas; i++) {
            soma += matriz[i][j];
        }

        printf("%d\n", soma);
    }
}