#include <stdio.h>
#include <string.h>

int main(void) {
    char senha[8];

    printf("Digite a senha: ");
    scanf("%s", senha);

    char tamanho = strlen(senha);

    if(tamanho >= 8) {
        printf("Senha conforme\n");
    } else {
        printf("Erro na senha\n");
    }
}