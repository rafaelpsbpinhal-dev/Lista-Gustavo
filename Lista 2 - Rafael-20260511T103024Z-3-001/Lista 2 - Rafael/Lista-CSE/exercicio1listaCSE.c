#include <stdio.h>

int main() {
    char letra;
    
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    for(int i = 0; i < 10; i++) {
        printf("%c\n", letra);
    }

    return 0;
}