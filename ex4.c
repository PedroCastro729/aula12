#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[5];
    char *posicao;
    char letra;
    int i = 0;

    printf("Digite uma palavra de 5 letras: ");
    scanf(" %s", palavra);

    while(i < 3) {
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        posicao = strchr(palavra, letra);

        if(posicao != NULL) {
            printf("Encontrada");
        } else{
            printf("Não encontrada");
            i++;
        }
    }
}