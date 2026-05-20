#include <stdio.h>

void main() {
    char nomes[5][50];
    short i;

    for(i = 0; i < 5; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf(" %[^\n]s", nomes[i]);
    }

    printf("\nNomes digitados:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", nomes[i]);
    }
}
