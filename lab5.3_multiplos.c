#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Insira um numero: ");
    scanf("%d", &x);
    int i = 1;
    int mult2 = 0;
    int mult3 = 0;
    int mult5 = 0;
    int multTodos = 0;
    while(i<=x) {
        if(i%2==0) mult2++;
        if(i%3==0) mult3++;
        if(i%5==0) mult5++;
        if(i%2+i%3+i%5==0) multTodos++;
        i++;
    }
    printf("Entre um e %d existem:\nMultiplos de 2: %d\nMultiplos de 3: %d\nMultiplos de 5: %d\nMultiplos de todos: %d\n", x, mult2, mult3, mult5, multTodos);
    system("pause");
    return 0;
}
