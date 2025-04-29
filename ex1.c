#include <stdio.h>

int main(void) {
    char nome[6] = "Pedro";
    char letra[5] = {'P', 'e', 'd', 'r', 'o'};

    printf("nome: %s\n", nome);
    for(int i = 0; i < 5; i++) {
        printf("* %c ", letra[i]);
    
    }

    return 0;

}