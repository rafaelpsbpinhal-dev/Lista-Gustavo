#include <stdio.h>

int main() {
    int num1;
    int num2;
    
    scanf("%d %d", &num1, &num2);
    
    if (num1 >= num2) {
        if (num1 % num2 == 0) {
            printf("num2 é multiplo de num1\n");
        } else {
            printf("nao e multiplo\n");
        }
    } else {
        if (num2 % num1 == 0) {
            printf("num1 é multiplo de num2\n");
        }
    }
    
    return 0;
}