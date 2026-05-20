#include <stdio.h>

void main(){
    int numero1, numero2, numero3;
    printf ("digite tres numeros inteiros: ");
    scanf("%d %d %d,", &numero1, &numero2, &numero3);

    if(numero1 > numero2 && numero1 > numero3)
{
    printf("o numero %d e maior que %d e maior que %d.\n",numero1, numero2 , numero3 );
}
else if (numero2 > numero1 && numero2 > numero3)
{
    printf("o numero %d e maior que %d e maior que %d.\n",numero2, numero1 , numero3 );
}
else
{ 
    printf("o numero %d e maior que %d e maior que %d.\n",numero3, numero1 , numero2 );
}
}