#include <stdio.h>
#include <string.h>

// Função para contar caracteres
void contarCaracteres(char palavra[]) {
    int contador = 0;

    for (contador = 0; palavra[contador] != '\0'; contador++);

    printf("Quantidade de letras: %d\n", contador);
}

// Função para contar vogais
void contarVogais(char palavra[]) {
    int vogais = 0;
    int i;

    for (i = 0; palavra[i] != '\0'; i++) {
        char c = palavra[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vogais++;
        }
    }

    printf("Quantidade de vogais: %d\n", vogais);
}

// Função para inverter palavra
void inverterPalavra(char palavra[]) {
    int i, tamanho;

    tamanho = strlen(palavra);

    printf("Palavra invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");
}

int main() {
    int opcao;
    char palavra[100];

    do {
        printf("\n======== MENU ========\n");
        printf("1 - Contar Caracteres\n");
        printf("2 - Contar Vogais\n");
        printf("3 - Inverter Palavra\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            printf("Digite uma palavra: ");
            scanf("%s", palavra);
        }

        switch (opcao) {
            case 1:
                contarCaracteres(palavra);
                break;
            case 2:
                contarVogais(palavra);
                break;
            case 3:
                inverterPalavra(palavra);
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    return 0;
}
