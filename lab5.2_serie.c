#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, x0, x1;
    printf("Insira o numero de termos da serie, x0 e x1: ");
    scanf("%d\n%d\n%d", &n, &x0, &x1);
    long int termo0 = x0;
    long int termo1 = x1;
    long int termo2 = 0;
    printf("X0: %d\nX1: %d\n", x0, x1);
    for (i=2;i<=n;i++) {
        termo2 = 4*termo1 - 2*termo0;
        printf("X%d: %ld\n", i, termo2);
        termo0 = termo1;
        termo1 = termo2;
    }
    system("pause");
    return 0;
}
