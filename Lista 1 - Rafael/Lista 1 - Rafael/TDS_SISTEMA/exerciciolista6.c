#include <stdio.h>

void main(){

    float nota1;
    float nota2;
    float media = 7.0;
    printf("digite nota1: ");
    scanf("%f", &nota1);
    printf("digite nota2: ");
    scanf("%f", &nota2);

    if((nota1 + nota2) / 2 > media)
    {
        printf("aprovado");
    }
    else if ((nota1 + nota2) / 2 < media)
    {
        printf("reprovado");
    }
    else if((nota1 + nota2) / 2 == media)
    {
        printf("aprovado");
    }
}