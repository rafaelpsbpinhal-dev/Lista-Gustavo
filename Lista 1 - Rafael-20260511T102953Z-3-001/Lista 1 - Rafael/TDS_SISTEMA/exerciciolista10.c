#include <stdio.h>

int main(){

    int ano;
    printf("digite um ano ");
    scanf("%d", &ano);
    if(ano >= 0 && ano <= 2026){
        if( ano % 4 == 0 ){
            printf("o ano %d e bissexto", ano);
        } 
        else{
            printf("o ano %d nao e bissexto");
        }
    }
}