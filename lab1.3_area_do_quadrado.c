#include <stdio.h>
#include <stdlib.h>

int main() {
    float lado;
    printf("Qual o tamanho do lado do quadrado? ");
    scanf("%f", &lado);
    printf("A área do quadrado é: %f", lado*lado);
    system("pause");
    return 0;
}