#include <stdio.h>

void main (){
    int numero1;
    int numero2;
    int sinal;
    int resultado;
    printf ("digite um numero:");
    scanf ("%d", &numero1);
    printf ("digite um numero:");
    scanf ("%d", &numero2);
    printf("============= 1 - adicao ===========\n");   
    printf("============= 2 - subtracao ===========\n");   
    printf("============= 3 - divisao ===========\n");   
    printf("============= 4 - multiplicacao ===========\n");   
    printf ("digite um operador:");
    scanf ("%d" , &sinal);
    if(sinal == 1){
        resultado = numero1 + numero2;
    }
    else if(sinal == 2){
        resultado = numero1 - numero2;
    }
    else if (sinal == 3){
        resultado = numero1 / numero2;
    }
    else{
        resultado = numero1 * numero2;
    }
    printf ("resultado e %d", resultado);
 }