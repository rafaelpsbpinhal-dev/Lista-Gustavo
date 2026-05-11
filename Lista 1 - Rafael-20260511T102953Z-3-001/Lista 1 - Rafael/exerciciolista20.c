#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o valor do lado A: ");
    scanf("%f", &a);

    printf("Digite o valor do lado B: ");
    scanf("%f", &b);

    printf("Digite o valor do lado C: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        
        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        }
        else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        }
        else {
            printf("Triangulo Escaleno\n");
        }

    } else {
        printf("Os valores nao formam um triangulo\n");
    }

    return 0;
}

