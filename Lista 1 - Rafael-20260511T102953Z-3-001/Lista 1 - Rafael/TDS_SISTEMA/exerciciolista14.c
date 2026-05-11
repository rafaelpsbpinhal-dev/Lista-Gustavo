#include <stdio.h>

int main() {
    int valor;
    int n100, n50, n20, n10;

    scanf("%d", &valor);

    n100 = valor / 100;
    valor = valor % 100;

    n50 = valor / 50;
    valor = valor % 50;

    n20 = valor / 20;
    valor = valor % 20;

    n10 = valor / 10;

    printf("%d\n", n100);
    printf("%d\n", n50);
    printf("%d\n", n20);
    printf("%d\n", n10);

    return 0;
}
