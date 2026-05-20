#include <stdio.h>

void main() {
    int matriz[3][3];
    int somaAcima = 0, somaAbaixo = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j > i) {
                somaAcima += matriz[i][j];
            } else if (i > j) {
                somaAbaixo += matriz[i][j];
            }
        }
    }

    printf("Soma acima da diagonal principal: %d\n", somaAcima);
    printf("Soma abaixo da diagonal principal: %d\n", somaAbaixo);


}