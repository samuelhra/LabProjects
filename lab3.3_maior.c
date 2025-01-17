#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf("Digite 3 numeros: ");
    scanf("%d\n%d\n%d", &a, &b, &c);
    if (a>=b&&a>=c) printf("O maior deles e %d\n", a);
    else if (b>=c) printf("O maior deles e %d\n", b);
    else printf("O maior deles e %d\n", c);
    system("pause");
    return 0;
}