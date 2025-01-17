#include <stdio.h>
#include <stdlib.h>

int bissexto(int ano) {
    int r=0;
    if(ano%4==0) {
        if(ano%400==0) r=1;
        else if(ano%100==0) r=0;
        else r=1;
    } else r=0;
    return r;
}

int main() {
    int ano;
    while(1) {
        scanf("%d", &ano);
        if(ano==-1) break;
        printf("%d\n", bissexto(ano));
    }
    return 0;
}