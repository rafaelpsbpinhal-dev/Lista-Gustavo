#include <stdio.h>

void main(){
    
    float desconto;
    float valorDeCompra; 
    printf("Digite seu valorDeCompra:  ");
    scanf("%f", &valorDeCompra);
    
    
    if(valorDeCompra <= 100 && valorDeCompra >= 0){
        desconto = 0;
        printf("Seu valor De Compra:  %.2f", valorDeCompra);
    }else if(valorDeCompra >= 500 && valorDeCompra <= 750){
        desconto = (valorDeCompra*10)/100;
        printf("%.2f", valorDeCompra - desconto);
    }else if(valorDeCompra >= 1000){
        desconto = (valorDeCompra*35)/100;
        printf("%.2f", valor De Compra - desconto);
   }else{
        printf("valor De Compra invalido");
   }
}