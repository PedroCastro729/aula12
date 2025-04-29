#include <stdio.h>

int main(void) {
    int numero = 0;
    int total = 0;

    printf("Digite um numero inteiro acima de 5: ");
    scanf("%d", &numero);

    for(int i = 1; i < numero; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            printf("%d\n", i);
            total += i;
        }
    }

    printf("A soma é: %d\n", total);

    return 0;
}