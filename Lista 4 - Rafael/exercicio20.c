#include <stdio.h>

void main() {
    char nomes[3][50];
    float notas[3][3];
    float media[3];

    for (int i = 0; i < 3; i++) {
        scanf("%s", nomes[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        float soma = 0;
        for (int j = 0; j < 3; j++) {
            soma += notas[i][j];
        }
        media[i] = soma / 3;
    }

    int indiceMaior = 0;

    for (int i = 1; i < 3; i++) {
        if (media[i] > media[indiceMaior]) {
            indiceMaior = i;
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%s %.2f\n", nomes[i], media[i]);
    }

    printf("Maior media: %s\n", nomes[indiceMaior]);

}
