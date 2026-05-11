#include <stdio.h>
#include <string.h>

void main(){
    char palavra[100];
    char letra = 'a';
    char substituto = '@';
 
    printf("digite uma palavra:");
    scanf( "%s",&palavra);
 
    for(int i = 0; palavra[i] != '\0'; i++ ){
    if (palavra[i] == letra){
        palavra[i] = substituto;
    }
    }
    printf("A palavra substituida e:  %s ", palavra );

}