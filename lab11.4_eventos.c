#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data {
    int dia;
    enum meses {jan=1, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez} mes;
    int ano;
} Data;

typedef struct evento {
    char nome[101];
    char local[101];
    Data data;
} Evento;

void cadastrar_eventos(Evento agenda[], int n) {
    for(int i=0; i<n; i++) {
        setbuf(stdin, NULL);
        scanf("%s", agenda[i].nome);
        scanf("%s", agenda[i].local);
        scanf("%d", &agenda[i].data.dia);
        scanf("%d", &agenda[i].data.mes);
        scanf("%d", &agenda[i].data.ano);
    }
}

void imprimir_eventos (Evento agenda[], Data d, int n) {
    int v=0;
    for(int i=0; i<n; i++) {
        if(d.dia==agenda[i].data.dia && d.mes==agenda[i].data.mes && d.ano==agenda[i].data.ano) {
            printf("%s %s\n", agenda[i].nome, agenda[i].local);
            v++;
        }
    }
    if(v==0) printf("Nenhum evento encontrado!");
}

int main() {
    int n;
    setbuf(stdin, NULL);
    // printf("Quantos eventos voce quer registrar?\n");
    scanf("%d", &n);
    // printf("Faça o cadastro dos eventos (nome, local e data DD MM AAAA)\n");
    Evento agenda[n];
    cadastrar_eventos(agenda, n);
    setbuf(stdin, NULL);
    Data check;
    // printf("Qual data voce quer checar se ha eventos?\n");
    scanf("%d%d%d", &check.dia, &check.mes, &check.ano);
    imprimir_eventos(agenda, check, n);
    system("pause");
    return 0;
}