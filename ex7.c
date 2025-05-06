#include <stdio.h>
#include <string.h>

int main(void) {
    char senha[6];
    char correta[6] = "azimo";

    for(int tentativas = 2; tentativas >= 0; tentativas--) {
        printf("Digite a senha: ");
        scanf("%5s", senha);
        int comparacao = strcmp(senha, correta);
        if(comparacao == 0) {
            printf("Seja bem vindo!\n");
            break;
        } else{
            printf("Senha errada. Tentativas restantes: %d\n", tentativas);
            if(tentativas == 0) {
                printf("Tente novamente mais tarde!\n");
                break;
            }
        }
    }

    return 0;
}