#include <stdio.h>

int ehPar(int numero){
    int treco;
    if (numero % 2 == 0){
        treco = 0;
    }
    else{
        treco = 1;
    }
    return (treco);
    }

int main(){
    int numero;
    int parOuImpar = ehPar(numero);
    printf("====== 0 - Par ======\n");
    printf("====== 1 - Impar ======\n");
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    printf("O numero e classificado como: %d", parOuImpar);

    return 0;
}
