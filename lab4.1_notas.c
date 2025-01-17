#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor;
    scanf("%d", &valor);
    int cem, cinq, vinte, dez, cinco, dois, um;
    cem = valor/100;
    valor = valor%100;
    cinq = valor/50;
    valor = valor%50;
    vinte = valor/20;
    valor = valor%20;
    dez = valor/10;
    valor = valor%10;
    cinco = valor/5;
    valor = valor%5;
    dois = valor/2;
    valor = valor%2;
    um = valor;
    printf("100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d\n", cem, cinq, vinte, dez, cinco, dois, um);
    system("pause");
    return 0;
}
