#include <stdio.h>
#include <stdlib.h>

int somaVetor(int vetor[], int n) {
    int soma;
    if(n>1) soma = vetor[n-1] + somaVetor(vetor, n-1);
    else if(n==1) soma = vetor[n-1];
    return soma;
}

int main() {
    int vetor[1000];
    int x;
    while(1) {
        scanf("%d", &x);
        if(x<=0) break;
        for(int i=0; i<x; i++) {
        scanf("%d", &vetor[i]);
        }
        printf("%d\n", somaVetor(vetor, x));
    }
    system("pause");
    return 0;
}