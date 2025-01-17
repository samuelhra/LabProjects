#include <stdio.h>
#include <stdlib.h>

void imprime (int v[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", v[i]);
    }
}

void multiplica (int v[], int n, double m) {
    for(int i=0; i<n; i++) {
        v[i] = v[i]*m;
    }
}

int main() {
    setbuf(stdin, NULL);
    int n;
    double m;
    printf("Insira o tamanho do vetor\n");
    scanf("%d", &n);
    int vet[n];
    printf("Insira os valores do vetor um a um\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &vet[i]);
    }
    printf("Insira o valor a multiplicar o vetor");
    scanf("%le", &m);
    imprime(vet, n);
    multiplica(vet, n, m);
    imprime(vet, n);
    multiplica(vet, n, 1/m);
    imprime(vet, n);
    system("pause");
    return 0;
}