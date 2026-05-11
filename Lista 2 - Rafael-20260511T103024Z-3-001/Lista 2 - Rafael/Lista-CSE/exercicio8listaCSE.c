#include <stdio.h>
#include <string.h>

void main() {
    char palavra[100]; 
    int i;
    char letra;

    printf("Digite uma palavra: ");
    if (scanf("%s", palavra) != 1) { 
        printf("Erro na leitura da palavra.\n");
    }

    for( i = 0; i < strlen(palavra); i++){
        printf("%c\n", palavra[i]);
    }

}
