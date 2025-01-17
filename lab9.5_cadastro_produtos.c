#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro {
    char nome[51];
    char marca[51];
    float preco;
} produto;

int marcaRepetida(produto p[], int m) {
    int ex = 0;
    for(int i=0; i<m; i++) {
        if(strcmp(p[m].marca, p[i].marca)==0) ex = 1;
    }
    return ex;
}

int info(produto p[], int n) {
    int count;
    float mediaMarca;
    float media = 0.0;

    for(int i=0; i<n; i++) {
        count=0;
        if(marcaRepetida(p, i)==0) {
            for(int x=0; x<n; x++) {
                if(strcmp(p[i].marca, p[x].marca)==0) count++;
            }
            printf("Produtos da marca %s: %d\n", p[i].marca, count);
        }
    }

    for(int i=0; i<n; i++) {
        media = media+p[i].preco;
    }
    printf("Media total de preco: %.2f\n", (float)media/n);

    for(int i=0; i<n; i++) {
        count = 0;
        mediaMarca = 0;
        if(marcaRepetida(p, i)==0) {
            for(int x=0; x<n; x++) {
                if(strcmp(p[i].marca, p[x].marca)==0) {
                    mediaMarca+=p[x].preco;
                    count++;
                }
            }
            printf("Media de preco dos produtos %s: %.2f\n", p[i].marca, mediaMarca/count);
        }
    }
}

int main() {
    produto produtos[10];
    setbuf(stdin, NULL);
    int i=0;
    printf("Entre com o cadastro dos 10 produtos (nome, marca e preco):\n");
    while(i<10) {   //pegando os cadastros
        scanf("%s", produtos[i].nome);
        scanf("%s", produtos[i].marca);
        scanf("%f", &produtos[i].preco);
        setbuf(stdin, NULL);
        i++;
    }
    info(produtos, i);
    system("pause");
    return 0;
}