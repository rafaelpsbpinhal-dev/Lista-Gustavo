#include <stdio.h>

void main (){
    int numero;

    printf("Escolha um numero, pode ser positivo, negativo ou zero: ");
    scanf("%d", &numero);

    if(numero == 0){
        printf("O numero %d e igual  0.", numero);
    }else if(numero < 0){
        printf("O numero %d e negativo", numero);
    }else{
        printf("O numero %d e positivo", numero);
    }
}