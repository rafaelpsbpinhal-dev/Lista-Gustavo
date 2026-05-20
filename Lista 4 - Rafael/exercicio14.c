#include <stdio.h>

void main() {
    int matriz[3][3];
    int maior, linha, coluna;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    linha = 0;
    coluna = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Posicao: [%d][%d]\n", linha, coluna);

}