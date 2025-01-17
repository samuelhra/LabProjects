#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if(n==0||n==1) return n;
    else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main() {
    int x;
    while(1) {
        scanf("%d", &x);
        if(x<0) break;
        printf("%d\n", fibonacci(x));
    }
    system("pause");
    return 0;
}