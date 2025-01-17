#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    short int x;
    scanf("%d\n%d\n%d\n%hd", &a, &b, &c, &x);
    float media;
    media = (float)(a+b+c)/3;
    switch(x) {
        case 1:
        if (a>=b&&a>=c) printf("%d", a);
        else if (b>=a&&b>=c) printf("%d", b);
        else printf("%d", c);
        break;
        case 2:
        if (a<=b&&a<=c) printf("%d", a);
        else if (b<=a&&b<=c) printf("%d", b);
        else printf("%d", c);
        break;
        case 3:
        printf("%.2f", media);
        break;
        default:
        printf("Erro");
    }
    system("pause");
    return 0;
}
