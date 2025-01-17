#include <stdio.h>
#include <stdlib.h>

void lerVetor (int *p, int n) {
    for(int i=0; i<n; i++) {
        scanf("%d", (p+i));
    }
}

int main() {
    int n, *p;
    scanf("%d", &n);
    p = (int *) calloc(n, sizeof(int));
    if(p == NULL) {
        printf("Erro: memória insuficiente\n");
        exit(1);
    }
    lerVetor(p, n);
    for(int i=0; i<n; i++) {
        printf("%d\n", *(p+i));
    }
    free(p);
    return 0;
}