#include <stdio.h>

void main() {
    char palavra[100]; 
    int contador = 0;

    printf("Digite uma palavra: ");
    if (scanf("%s", palavra) != 1) { 
        printf("Erro na leitura da palavra.\n");
    }

    while (palavra[contador]) {
        contador++;
    }

    printf("A palavra %s tem %d caracteres.\n", palavra, contador);

}

    