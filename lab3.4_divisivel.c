#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf("Insira um número: ");
    scanf("%d", &a);
    printf("Insira dois números para verificar divisibilidade: ");
    scanf("%d %d", &b, &c);
    if (a%b==0&&a%c==0) {
        printf("O número é divisível");
    } else {
        printf("O número não é divisível");
    }
    system("pause");
    return 0;
}