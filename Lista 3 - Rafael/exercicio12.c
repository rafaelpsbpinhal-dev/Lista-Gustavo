#include <stdio.h>


void main() {

    int numeros[5];
    int somap = 0;
    int somai = 0;
    
        for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 5; i++){
        if(numeros[i] % 2 == 0){
            somap = somap + numeros[i];
        } else {
            somai = somai + numeros[i];
        }
    }
    printf("\nA soma dos pares e: %d", somap);
    printf("\nA soma dos impares e: %d", somai);
}