#include <stdio.h>
#include <string.h>

void main() {
    char nomes[5][50], maior[50];

    for (int i = 0; i < 5; i++) {
        scanf("%s", nomes[i]);
    }

    strcpy(maior, nomes[0]);

    for (int i = 1; i < 5; i++) {
        if (strlen(nomes[i]) > strlen(maior)) {
            strcpy(maior, nomes[i]);
        }
    }

    printf("%s\n", maior);
}