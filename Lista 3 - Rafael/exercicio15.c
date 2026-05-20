#include <stdio.h>
#include <string.h>

void main() {
    char frase[200], palavra[50];
    int cont = 0;

    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    frase[strcspn(frase, "\n")] = '\0';
    palavra[strcspn(palavra, "\n")] = '\0';

    int tamFrase = strlen(frase);
    int tamPalavra = strlen(palavra);

    for (int i = 0; i <= tamFrase - tamPalavra; i++) {
        int j;

        for (j = 0; j < tamPalavra; j++) {
            if (frase[i + j] != palavra[j]) {
                break;
            }
        }

        if (j == tamPalavra) {
            cont++;
        }
    }

    printf("Ocorrencias: %d\n", cont);
}