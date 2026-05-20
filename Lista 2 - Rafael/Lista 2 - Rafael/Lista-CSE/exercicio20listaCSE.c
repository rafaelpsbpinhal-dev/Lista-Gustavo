#include <string.h>
#include <stdio.h>
void main() {
    char user[50];
    char pass[50];
    do {
        printf("Usuario: ");
        scanf("%s", user);
        printf("Senha: ");
        scanf("%s", pass);
    } while (strcmp(user, "admin") != 0 || strcmp(pass, "1234") != 0);
    printf("Login bem-sucedido!\n");
}
    