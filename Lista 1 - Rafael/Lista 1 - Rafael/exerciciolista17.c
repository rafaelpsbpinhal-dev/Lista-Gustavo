#include <stdio.h>

int main() {
    float nota;
    float presenca;

    printf("Digite a nota do aluno (0 a 10): ");
    scanf("%f", &nota);

    printf("Digite o percentual de presenca (0 a 100): ");
    scanf("%f", &presenca);

    if (nota >= 7.0 && presenca >= 75.0) {
        printf("Aluno aprovado!\n");
    } else if (nota < 7.0 && presenca >= 75.0) {
        printf("Aluno reprovado por nota.\n");
    } else if (nota >= 7.0 && presenca < 75.0) {
        printf("Aluno reprovado por falta.\n");
    } else {
        printf("Aluno reprovado por nota e falta.\n");
    }

    return 0;
}

