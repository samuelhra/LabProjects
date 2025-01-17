#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, i;
    long int soma;
    soma = 0;
    printf("Insira um numero inteiro: ");
    scanf("%d", &x);
    for (i=1;i<=x;i++) {
        soma = soma+i;
    }
    printf("Soma de 1 ate %d: %ld\n", x, soma);
    system("pause");
    return 0;
}
