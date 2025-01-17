#include <stdio.h>
#include <stdlib.h>

int main() {
    long int fib[46];
    int i;
    fib[0]=0;
    fib[1]=1;
    for(i=2; i<46; i++) {
        fib[i]=fib[i-1]+fib[i-2];
    }
    int n;
    while(1) {
        printf("Qual elemento da serie fibonacci voce quer saber?\nInsira um numero entre 0 e 46, use -1 para parar o programa: ");
        scanf("%d", &n);
        if(n==-1) break;
        printf("\nO numero %d da serie fibonacci e %ld\n\n", n, fib[n]);
    }
    system("pause");
    return 0;
}