#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dadosTime {
    char nome[20];
    short unsigned int jogos, vit, der, emp;
    short unsigned int gp, gc;
    short int saldo;
    short unsigned int pts;
} time;

void leitura(time tabela[], short unsigned int n) { //lê os jogos e armazena os dados de cada time
    setbuf(stdin, NULL);
    char time1[20], time2[20], st[3];
    short unsigned int g1, g2;
    while(1) {
        //scan completo da entrada
        if(fgets(time1, 2, stdin)==0) break;
        scanf("%s", time2);
        strcat(time1, time2);
        scanf("%s", st);
        scanf("%s", time2);
        scanf("%hu", &g1);
        scanf("%s", st);
        scanf("%hu", &g2);
        setbuf(stdin, NULL);
        time2[strlen(time2)-1]='\0'; //correção do ":"

        //debug:
        //printf("leitura %s %s %hu %hu feita\n\n", time1, time2, g1, g2);
        
        //leitura do jogo 
        for(int i=0; i<n; i++) {
            //printf("Teste posicao %d do array\n", i); //debug
            //Para o time 1
            //printf("1: %d\n", strcmp(time1, tabela[i].nome)); //debug
            if(strcmp(time1, tabela[i].nome)==0) {
                tabela[i].jogos++;
                tabela[i].saldo += g1-g2;
                tabela[i].gp += g1;
                tabela[i].gc += g2;
                if(g1>g2) {
                    tabela[i].pts += 3;
                    tabela[i].vit++;
                } else if(g1==g2) {
                    tabela[i].pts++;
                    tabela[i].emp++;
                } else {
                    tabela[i].der++;
                }
                //debug:
                //printf("%s %hu %hu %hu %hu %hu %hd %hu %hu\n", tabela[i].nome, tabela[i].pts, tabela[i].jogos, tabela[i].vit, tabela[i].emp, tabela[i].der, tabela[i].saldo, tabela[i].gp, tabela[i].gc);
                continue;
            }
            //Para o time 2
            //printf("2: %d\n", strcmp(time2, tabela[i].nome)); //debug
            if(strcmp(time2, tabela[i].nome)==0) {
                tabela[i].jogos++;
                tabela[i].saldo += g2-g1;
                tabela[i].gp += g2;
                tabela[i].gc += g1;
                if(g2>g1) {
                    tabela[i].pts += 3;
                    tabela[i].vit++;
                } else if(g1==g2) {
                    tabela[i].pts++;
                    tabela[i].emp++;
                } else {
                    tabela[i].der++;
                }
                //debug:
                //printf("%s %hu %hu %hu %hu %hu %hd %hu %hu\n", tabela[i].nome, tabela[i].pts, tabela[i].jogos, tabela[i].vit, tabela[i].emp, tabela[i].der, tabela[i].saldo, tabela[i].gp, tabela[i].gc);
                continue;
            }
        }
    }
}

int main() {
    setbuf(stdin, NULL);
    
    //Scan do número de times no campeonato
    short unsigned int n;
    scanf("%hu", &n);
    time campeonato[n];
    
    //Scan dos nomes de cada time
    for(int i=0; i<n; i++) {
        scanf("%s", campeonato[i].nome);
        printf("inserido \"%s\"\n", campeonato[i].nome);
    }
    
    
    //Seta valor inicial 0 em todas as categorias dos times
    for(int i=0; i<n; i++) {
        campeonato[i].jogos=0;
        campeonato[i].vit=0;
        campeonato[i].der=0;
        campeonato[i].emp=0;
        campeonato[i].gp=0;
        campeonato[i].gc=0;
        campeonato[i].saldo=0;
        campeonato[i].pts=0;
    }
    
    //Função de leitura dos jogos
    leitura(campeonato, n);
    
    //Organização do array
    for(int i=0; i<n; i++) {
        time buffer; //armazenamento temporário do time para trocar de lugar
        int pos = i; //posição (inicialmente assumida) do melhor time
        
        for(int k=i+1; k<n; k++) {
            if(campeonato[k].pts > campeonato[pos].pts) pos = k;
            else if(campeonato[k].pts == campeonato[pos].pts) {
                if(campeonato[k].vit > campeonato[pos].vit) pos = k;
                else if(campeonato[k].vit == campeonato[pos].vit) {
                    if(campeonato[k].saldo > campeonato[pos].saldo) pos = k;
                    else if(campeonato[k].saldo == campeonato[pos].saldo) {
                        if(campeonato[k].gp > campeonato[pos].gp) pos = k;
                        else if(campeonato[k].gp == campeonato[pos].gp) {
                            if(campeonato[k].gc < campeonato[pos].gc) pos = k;
                        }
                    }
                }
            }
        }
        
        //troca de lugar
        if(pos!=i) {
            buffer = campeonato[i];
            campeonato[i] = campeonato[pos];
            campeonato[pos] = buffer;
        }
    }
    
    //imprimindo os resultados
    printf("Time Pontos Jogos Vitorias Empates Derrotas Saldo Gols Pro Gols Contra\n");
    for(int i=0; i<n; i++) {
        printf("%s %hu %hu %hu %hu %hu %hd %hu %hu\n", campeonato[i].nome, campeonato[i].pts, campeonato[i].jogos, campeonato[i].vit, campeonato[i].emp, campeonato[i].der, campeonato[i].saldo, campeonato[i].gp, campeonato[i].gc);
    }
    
    return 0;
}