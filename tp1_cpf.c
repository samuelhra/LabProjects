#include <stdio.h>
#include <stdlib.h>

int main() {
    long int cpf;
    short int d1, d2, d3, d4, d5, d6, d7, d8, d9;
    short int dvd, dvu;
    printf("Insira o cpf sem dígito verificador: ");
    scanf("%ld", &cpf);
    d1=cpf/100000000;
    cpf = cpf-d1*100000000;
    d2= cpf/10000000;
    cpf = cpf-d2*10000000;
    d3= cpf/1000000;
    cpf = cpf-d3*1000000;
    d4= cpf/100000;
    cpf = cpf-d4*100000;
    d5= cpf/10000;
    cpf = cpf-d5*10000;
    d6=cpf/1000; 
    cpf = cpf-d6*1000;
    d7= cpf/100;
    cpf = cpf-d7*100;
    d8= cpf/10;
    cpf = cpf-d8*10;
    d9= cpf;
    // printf("%hd\n%hd\n%hd\n%hd\n%hd\n%hd\n%hd\n%hd\n%hd\n", d1, d2, d3, d4, d5, d6, d7, d8, d9);
    int somaProdutos = d9*2+d8*3+d7*4+d6*5+d5*6+d4*7+d3*8+d2*9+d1*10;
    // printf("%d", somaProdutos);
    if (somaProdutos%11==1||somaProdutos%11==0) dvd = 0;
    else dvd = 11-(somaProdutos%11);
    // printf("%d", vd);
    int somaProdutos2 = dvd*2+d9*3+d8*4+d7*5+d6*6+d5*7+d4*8+d3*9+d2*10+d1*11;
    if (somaProdutos2%11==1||somaProdutos2%11==0) dvu = 0;
    else dvu = 11-(somaProdutos2%11);
    printf("Os dígitos verificadores são %hd%hd", dvd, dvu);
    system("pause");
    return 0;
}
