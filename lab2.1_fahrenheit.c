#include <stdio.h>
#include <stdlib.h>

int main() {
    float C;    //valor da temperatura em celsius
    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &C);
    float F = 1.8*C+32;
    printf("%.1f em Fahrenheit: %.1f\n", C, F);
    system("pause");
    return 0;
}
