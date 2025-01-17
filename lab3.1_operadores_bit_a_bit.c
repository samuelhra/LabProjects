#include <stdio.h>
#include <stdlib.h>

int main() {
    short int a;
    short int b;
    scanf("%hd", &a);
    scanf("%hd", &b);
    printf("AND: %d OR: %d XOR: %d", a%b, a|b, a^b);
    system("pause");
    return 0;
}