#include <stdio.h>
#include <stdlib.h>

int main() {
    int contagem = 233;
    do {
        printf("%d\n", contagem);
        contagem=contagem+5;
    } while(contagem<300);
    do {
        printf("%d\n", contagem);
        contagem=contagem+3;
    } while(contagem>=300&&contagem<=400);
    do {
        printf("%d\n", contagem);
        contagem=contagem+5;
    } while(contagem<=457);
    system("pause");
    return 0;
} 
