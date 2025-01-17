#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    short int aeds1n;
    printf("Numero de matriculas em AEDS 1: ");
    scanf("%hd", &aeds1n);
    int aeds1[aeds1n-1];
    printf("Insira as matriculas uma a uma:\n");
    for(i=0; i<aeds1n; i++) {
        scanf("%d", &aeds1[i]);
    }
    short int calc1n;
    printf("Numero de matriculas em Calculo 1: ");
    scanf("%hd", &calc1n);
    int calc1[calc1n-1];
    printf("Insira as matriculas uma a uma:\n");
    for(i=0; i<calc1n; i++) {
        scanf("%d", &calc1[i]);
    }
    printf("\nMatriculas em comum:\n");
    for(i=0; i<aeds1n; i++) {
        for(int j=0; j<calc1n; j++) {
            if(aeds1[i]==calc1[j]) printf("%d\n", calc1[j]);
        }
    }
    system("pause");
    return 0;
}