#include <stdio.h>
#include <math.h>

int main() {
    double valor, taxaJuros, parcela;
    int numParcelas;

    printf("=== Simulador de Financiamento ===\n");
    printf("Digite o valor do financiamento: R$ ");
    scanf("%lf", &valor);

    printf("Digite a taxa de juros mensal (em %%): ");
    scanf("%lf", &taxaJuros);

    printf("Digite o numero de parcelas: ");
    scanf("%d", &numParcelas);

    taxaJuros = taxaJuros / 100.0;

    parcela = valor * (taxaJuros * pow(1 + taxaJuros, numParcelas)) / (pow(1 + taxaJuros, numParcelas) - 1);

    printf("\n=== Resultado da Simulação ===\n");
    printf("Valor financiado: R$ %.2f\n", valor);
    printf("Taxa de juros: %.2f%% ao mês\n", taxaJuros * 100);
    printf("Numero de parcelas: %d\n", numParcelas);
    printf("Valor da parcela: R$ %.2f\n", parcela);
    printf("Valor total pago: R$ %.2f\n", parcela * numParcelas);
    printf("Total de juros: R$ %.2f\n", (parcela * numParcelas) - valor);

    return 0;
}