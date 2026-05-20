#include <stdio.h>

void main() {
    int gabarito[30];
    int prova[30];
    int aluno, i, acertos;
    float porcentagem;

    printf("Digite o gabarito (valores de 1 a 5):\n");
    for (i = 0; i < 30; i++) {
        scanf("%d", &gabarito[i]);
    }

    while (1) {
        printf("\nNumero do aluno (0 para encerrar): ");
        scanf("%d", &aluno);

        if (aluno == 0) {
            break;
        }

        acertos = 0;

        printf("Digite as respostas do aluno (1 a 5):\n");
        for (i = 0; i < 30; i++) {
            scanf("%d", &prova[i]);

            if (prova[i] == gabarito[i]) {
                acertos++;
            }
        }

        porcentagem = (acertos * 100.0) / 30;

        printf("\nAluno: %d\n", aluno);
        printf("Acertos: %d\n", acertos);
        printf("Percentual: %.2f%%\n", porcentagem);
    }

}