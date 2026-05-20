#include <stdio.h>
#include <string.h>

void main(){
    char frase[100];
    int maiusculas = 0;
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    for (int i = 0; frase[i] != '\0'; i++){
        if (frase[i] >= 'A' && frase[i] <= 'Z'){
            maiusculas++;

        }
    }
    printf("A quantidade de maiusculas e: %d", maiusculas);
}