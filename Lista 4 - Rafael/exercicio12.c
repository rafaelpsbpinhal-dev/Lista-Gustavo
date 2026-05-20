#include <stdio.h>
#include <string.h>

void main() {
    char nomes[5][50];
    int contador = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s", nomes[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (nomes[i][0] == 'A' || nomes[i][0] == 'a') {
            contador++;
        }
    }

    printf("%d\n", contador);


}