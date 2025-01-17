#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("Digite os numeros inicial e final: ");
    scanf("%d\n%d", &a, &b);
    if (a>10000||b>10000) 
        return 0;
    int i, j, primo;
    printf("\nPrimos entre %d e %d:\n", a, b);
    for(i=a; i<=b; i++) {
        primo=1;
        if(i==1) primo=0;
        for(j=2; j<i; j++) {
            if(i%j==0) primo=0;
        }
        if(primo==1) printf("%d\n", i);
    }
    system("pause");
    return 0;
}