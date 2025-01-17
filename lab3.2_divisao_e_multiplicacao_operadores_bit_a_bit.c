#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d\n%d", n<<1, n>>1);
    system("pause");
    return 0;
}