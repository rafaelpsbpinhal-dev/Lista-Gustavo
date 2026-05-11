#include <stdio.h>
int ehPar(int numero1)
{
    if (numero1 % 2 == 0)
        return 1;
    else
        return 0;
}
int main(){
    int opcao;
    float n1, n2;
    float media;
    float peso;
    float altura;
    float imc;
    int numero1;
    

    printf("Digite as duas notas:  ");
        scanf("%f %f", &n1, &n2);
    printf("Digite seu peso:   ");
        scanf("%f", &peso);
    printf("Digite sua altura:   ");
        scanf("%f", &altura);
    printf("Digite qualquer numero:   ");
        scanf("%d", &numero1);
    
    printf("___________________\n");
    printf("1.Mostrar nota1\n");
    printf("2.Mostrar nota2\n");
    printf("3.Mostrar media\n");
    printf("___________________\n");
    printf("4.Mostrar peso\n");
    printf("5.Mostrar altura\n");
    printf("6.Mostrar imc\n");
    printf("___________________\n");
    printf("7.Mostrar Par/Impar\n");
    printf("___________________\n");


    printf("escolha uma opcao:  ");
    scanf("%d", &opcao);

    media =  (n1 + n2)/2;
    imc = peso/(altura*altura);

    switch (opcao){
        case 1:
            printf("Nota1:  %.1f", n1);
            return n1;
            break;
        case 2:
            printf("Nota2:  %.1f", n2);
            return n2;
            break;
        case 3:
            printf("Media: %.1f", media);
            return media;
            break;
        case 4:
            printf("Seu peso:  %.2f", peso);
            return peso;
            break;
        case 5:
            printf("Sua altura:  %.2f", altura);
            return altura;
            break;
        case 6:
            printf("Seu IMD e:  %.2f\n", imc);
        if(imc <= 18.5){
            printf("voce esta abaixo do peso\n");
        }else if(imc > 18.5 && imc <= 24.9){
            printf("voce esta peso ideal\n");
        }else if(imc >= 25 && imc < 29.9){
            printf("voce esta acima do peso\n");
        }else if(imc >= 30){
            printf("voce esta obeso\n");
        }else{
            printf("informacoes incorreta\n");
    }
            return imc;
            break;
        case 7:
            if(numero1 % 2 == 0){
                printf("Seu numero e par");
            }else{
                printf("Seu numero e impar");
            }
            break;
        default:
            printf("opcao invalida");
    }
}