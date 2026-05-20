#include <stdio.h>

void main() {
    int N, valor;
    int cont[6] = {0, 0, 0, 0, 0, 0};

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &valor);

        if (valor >= 1 && valor <= 6) {
            cont[valor - 1]++;
        }
    }

    for (int i = 0; i < 6; i++) {
        printf("Face %d: %d\n", i + 1, cont[i]);
    }


}