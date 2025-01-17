#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415

int main() {
    short int diametro;
    short int fatias;
    printf("Qual o diâmetro da pizza (em cm)? ");
    scanf("%hd", &diametro);    //coleta o número inserido e armazena em diâmetro
    printf("Em quantas fatias você quer dividi-la? ");
    scanf("%hd", &fatias);
    float area = pi*pow((diametro/2),2);    //calcula a área da pizza
    printf("Sua pizza tem uma área de %.2f cm quadrados\n", area);
    printf("Cada fatia tem %.2f cm quadrados\n", area/fatias);
    system("pause");
    return 0;
}
