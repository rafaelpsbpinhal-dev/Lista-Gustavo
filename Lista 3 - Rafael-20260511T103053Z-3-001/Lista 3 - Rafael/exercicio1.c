#include <stdio.h>

int main() {
    int numeros[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Os numeros digitados sao: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
