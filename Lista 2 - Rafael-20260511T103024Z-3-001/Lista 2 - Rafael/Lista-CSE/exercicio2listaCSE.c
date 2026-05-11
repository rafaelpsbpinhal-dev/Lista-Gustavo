#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            printf("A letra '%c' e uma vogal.\n", letra);
        } else {
            printf("A letra '%c' e uma consoante.\n", letra);
        }
    } else {
        printf("Isso nao e uma letra valida.\n");
    }

    return 0;
}