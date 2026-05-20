#include <stdio.h>

int main() {
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, nulo = 0;
    int totalVotos = 0;
    char continuar;

    do {
        printf("\nSistema de Votacao\n");
        printf("1 - Candidato A\n");
        printf("2 - Candidato B\n");
        printf("3 - Candidato C\n");
        printf("4 - Nulo\n");
        printf("Digite seu voto: ");
        scanf("%d", &voto);

        switch(voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                nulo++;
                break;
            default:
                printf("Opcao invalida!\n");
        }

        totalVotos++;

        printf("Deseja continuar votando? (s/n): ");
        scanf(" %c", &continuar);

    } while(continuar == 's' || continuar == 'S');

    printf("\nResultado da votacao:\n");
    printf("Candidato A: %d votos\n", candidato1);
    printf("Candidato B: %d votos\n", candidato2);
    printf("Candidato C: %d votos\n", candidato3);
    printf("Nulos: %d votos\n", nulo);
    printf("Total de votos: %d\n", totalVotos);

    return 0;
}



