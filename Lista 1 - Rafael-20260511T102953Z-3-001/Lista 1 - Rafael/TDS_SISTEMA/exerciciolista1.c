#include <stdio.h>

void main(){
    int numero;
    printf("digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero % 2 == 0)
    {
        printf("O numero %d e par. \n" , numero);
    }
    else
    {
        printf("o numero %d e impar.\n" , numero);
    }
}
