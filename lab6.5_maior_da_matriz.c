#include <stdio.h>
#include <stdlib.h>

int main() {
    short int i, j;
    int k, m;
    printf("Insira o numero de linhas e colunas da matriz, respectivamente:\n");
    scanf("%hd\n%hd", &i, &j);
    int matriz[i][j];
    printf("Digite os elementos da matriz, linha por linha:\n");
    for(k=0; k<j; k++) {
        for(m=0; m<i; m++) {
            scanf("%d", &matriz[m][k]);
        }
        printf("\n");
    }
    int maior=matriz[0][0];
    for(k=0; k<j; k++) {
        for(m=0; m<i; m++) {
            if(matriz[m][k]>maior) maior=matriz[m][k];
        }
    }
    printf("O maior elemento da matriz: %d\n", maior);
    system("pause");
    return 0;
}