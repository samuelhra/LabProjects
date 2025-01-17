#include <stdio.h>
#include <stdlib.h>

int main() {
    int anos;
    printf("Insira a quantidade de anos: ");
    scanf("%d", &anos);
    long int horas = (anos*365)*24;
    printf("%d anos em horas sao %ld horas", anos, horas);
    system("pause");
    return 0;
}
