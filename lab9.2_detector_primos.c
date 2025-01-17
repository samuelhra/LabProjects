#include <stdio.h>
#include <stdlib.h>

int prime(int p) {
    int primo = 1;
    if(p>1) {
        for(int i=2; i<p; i++) {
            if(p%i==0) {
                primo = 0;
                break;
            }
        }
    } else primo = -1;
    return primo;
}

int main() {
    int a;
    while(1) {
        scanf("%d", &a);
        if(a==-1) break;
        printf("%d\n", prime(a));
    }
    return 0;
}