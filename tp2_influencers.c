#include <stdio.h>
#include <stdlib.h>

int fatorInfluencia(int inf[], int n) {
    int fator=0;
    for(int i=1; i<=n; i++) {
        // printf("i: %d\n", i);
        short int count = 0;
        for(int k=0; k<n; k++) {
            // printf("k: %d\n", k);
            if(inf[k]>=i) 
                count++;
            // printf("count: %d\n", count);
            if(count==i) {
                fator=i;
                // printf("fator: %d\nesperado fim do laco\n", fator);
                k=n;
            }

        }
        if(fator!=i) {
            // printf("a sequencia quebrou\n");
            break;
        }
    }
    return fator;
}

int main() {
    int n;
    while(1) {
        scanf("%d", &n);
        if(n<0) 
            break;
        int postagens[n];
        for(int i=0; i<n; i++) {
            scanf("%d", &postagens[i]);
        }
        printf("%d\n", fatorInfluencia(postagens, n));
        // printf("%d\n", fatorInfluencia(postagens, n));
    }
    system("pause");
    return 0;
}