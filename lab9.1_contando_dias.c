#include <stdio.h>
#include <stdlib.h>

typedef struct dia {
    int d, m, a;
} data;

int bissexto(int ano) {
    int r=0;
    if(ano%4==0) {
        if(ano%400==0) r=1;
        else if(ano%100==0) r=0;
        else r=1;
    } else r=0;
    return r;
}

int diasPassados(data und) {
    int dias;
    data dataPadrao;
    dataPadrao.d = 17;
    dataPadrao.m = 9;
    dataPadrao.a = 2020;
    for(dias = 0; dataPadrao.d!=und.d || dataPadrao.m!=und.m || dataPadrao.a!=und.a; dias++) {
        dataPadrao.d--;
        if(dataPadrao.d==0) {
            dataPadrao.m--;
            switch(dataPadrao.m) {
                case 0:
                dataPadrao.d=31;
                break;
                case 1:
                dataPadrao.d=31;
                break;
                case 2:
                switch(bissexto(dataPadrao.a)) {
                    case 1:
                    dataPadrao.d=29;
                    break;
                    case 0:
                    dataPadrao.d=28;
                    break;
                }
                break;
                case 3:
                dataPadrao.d=31;
                break;
                case 4:
                dataPadrao.d=30;
                break;
                case 5:
                dataPadrao.d=31;
                break;
                case 6:
                dataPadrao.d=30;
                break;
                case 7:
                dataPadrao.d=31;
                break;
                case 8:
                dataPadrao.d=31;
                break;
                case 9:
                dataPadrao.d=30;
                break;
                case 10:
                dataPadrao.d=31;
                break;
                case 11:
                dataPadrao.d=30;
                break;
            }
            if(dataPadrao.m==0) {
                dataPadrao.a--;
                dataPadrao.m = 12;
            }
        }
    }
    return dias+1;
}

int main() {
    data ins;
    printf("Insira a data no formato dd mm aaaa\n");
    while(1) {
        scanf("%d%d%d", &ins.d, &ins.m, &ins.a);
        if(ins.d==-1) break;
        printf("Se passaram %d dias desde essa data ate 19/7/2020\n", diasPassados(ins));
    }
    return 0;
}