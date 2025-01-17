#include <stdio.h>
#include <stdlib.h>

double absol (double n) {
    if(n>=0) return n;
    else if(n<0) return -n;
}

void media (double v[], int n, int *i) {
    double med = 0;
    for (int i=0; i<n; i++) {
        med+=v[i];
    }
    med=med/n;
    int elemPos = 0;
    for (int i=1; i<n; i++) {
        if(absol(v[elemPos]-med)>absol(v[i]-med)) {
            elemPos = i;
        }
    }
    *i = elemPos;
}

int main() {
    int n, pos;
    printf("Insira o numero de elementos do vetor\n");
    scanf("%d", &n);
    double vet[n];
    printf("Insira os elementos do vetor, um a um\n");
    for(int i=0; i<n; i++) {
        scanf("%le", &vet[i]);
    }
    media(vet, n, &pos);
    printf("Posicao do elemento mais proximo da media: %d\n", pos);
    system("pause");
    return 0;
}