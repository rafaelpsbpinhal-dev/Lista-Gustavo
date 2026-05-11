#include <stdio.h>

void main(){
    int numero1, numero2;
    printf ("digite dois numeros inteiros: ");
    scanf("%d %d", &numero1, &numero2);

    if(numero1 > numero2)
{
    printf("o numero %d e maior que %d.\n",numero1, numero2 );
}
else if (numero1 == numero2)
{
    printf("os numeros %d e %d sao iguais.\n", numero1, numero2);
}
else
{ 
    printf("o numero %d e maior que %d.\n", numero2, numero1);
}
}