#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra minuscula: ");
    scanf(" %c", &letra);

    if (letra >= 'a' && letra <= 'z') {
        char maiuscula = letra - 32;
        printf("Letra maiuscula: %c\n", maiuscula);
    } else {
        printf("Entrada invalida. Digite apenas letra minuscula.\n");
    }

    return 0;
}
