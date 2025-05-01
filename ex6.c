#include <stdio.h>
#include <string.h>

int main(void) {
    char completo [50];
    char sobrenome[20];

    printf("Digite seu primeiro nome: ");
    scanf("%s", completo);

    strcat(completo, " ");

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    strcat(completo, sobrenome);

    printf("Nome completo: %s\n", completo);

    return 0;
}