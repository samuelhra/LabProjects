#include <stdio.h>
#include <stdlib.h>

int main() {
    short int i, j;
    int k, m;
    printf("Esse programa imprime a matriz oposta de uma matriz dada. Isto e, imprime a matriz que, somada a original, resulta em uma matriz nula.\nInsira o numero de linhas e colunas da matriz, respectivamente:\n");
    scanf("%hd\n%hd", &i, &j);
    int matriz[i][j];
    printf("Digite os elementos da matriz, linha a linha:\n");
    for(k=0; k<j; k++) {
        for(m=0; m<i; m++) {
            scanf("%d", &matriz[m][k]);
        }
        printf("\n");
    }
    int matrizop[i][j];
    printf("\nA matriz oposta é:\n");
    for(k=0; k<j; k++) {
        for(m=0; m<i; m++) {
            matrizop[m][k]=matriz[m][k]*(-1);
        }
    }
    for(k=0; k<j; k++) {
        for(m=0; m<i; m++) {
            printf("%d ", matrizop[m][k]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
