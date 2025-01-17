#include <stdio.h>
#include <stdlib.h>

int Primo(int p) {
    int primo = 1;
    if(p>1) {
        for(int i=2; i<p; i++) {
            if(p%i==0) {
                primo = 0;
                break;
            }
        }
    } else primo = 0;
    return primo;
}

int Soma_Primos(int n) {
    int soma = 0;
    int counter = 0;
    for(int i=2; ;i++) {
        if(counter==n) break;
        if(Primo(i)==1) {
            soma+=i;
            counter++;
        }
    }
    return soma;
}

int main() {
    int a;
    while(1) {
        scanf("%d", &a);
        if(a==-1) break;
        printf("%d\n", Soma_Primos(a));
    }
    return 0;
}