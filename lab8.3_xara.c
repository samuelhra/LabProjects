#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    char nome[51], sobrenome[51];
    unsigned int matricula;
    float nota1, nota2, nota3;
    float media;
};

int main() {
    struct aluno turma[10];   //os 10 alunos da turma
    short unsigned int melhorAluno=0, piorAluno=0;   //um núemro de 0 a 9, indicando qual aluno da turma é
    short int xara=0;   //indica se existe um xará do melhor aluno da turma (1), ou não (0)

    printf("Registre cada um dos 10 alunos, inserindo nome, sobrenome, matricula e as notas nas 3 disciplinas.\n");

    for(int i=0; i<10; i++) {   //faz o registro de cada aluno
        gets(turma[i].nome);
        gets(turma[i].sobrenome);
        scanf("%u", &turma[i].matricula);
        scanf("%f\n%f\n%f", &turma[i].nota1, &turma[i].nota2, &turma[i].nota3);
        setbuf(stdin, NULL);
    }

    for(int i=0; i<10; i++) {   //calcula a média de cada aluno
        turma[i].media = (turma[i].nota1 + turma[i].nota2 + turma[i].nota3) / 3;
    }

    for(int i=1; i<10; i++) {   //calcula o melhor aluno
        if(turma[i].media > turma[melhorAluno].media) {
            melhorAluno = i;
        } else if(turma[i].media == turma[melhorAluno].media) {
            if(turma[i].nota1 > turma[melhorAluno].nota1) {
                melhorAluno = i;
            } else if(turma[i].nota1 == turma[melhorAluno].nota1) {
                if(turma[i].nota2 > turma[melhorAluno].nota2) {
                    melhorAluno = i;
                } else if(turma[i].nota2 == turma[melhorAluno].nota2) {
                    if(turma[i].nota3 > turma[melhorAluno].nota3) {
                        melhorAluno = i;
                    } else if(turma[i].nota3 == turma[melhorAluno].nota3) {
                        if(turma[i].matricula > turma[melhorAluno].matricula) {
                            melhorAluno = i;
                        }
                    }
                }
            }
        }
    }

    for(int i=1; i<10; i++) {   //calcula o pior aluno
        if(turma[i].media < turma[piorAluno].media) {
            piorAluno = i;
        } else if(turma[i].media == turma[piorAluno].media) {
            if(turma[i].nota1 < turma[piorAluno].nota1) {
                piorAluno = i;
            } else if(turma[i].nota1 == turma[piorAluno].nota1) {
                if(turma[i].nota2 < turma[piorAluno].nota2) {
                    piorAluno = i;
                } else if(turma[i].nota2 == turma[piorAluno].nota2) {
                    if(turma[i].nota3 < turma[piorAluno].nota3) {
                        piorAluno = i;
                    } else if(turma[i].nota3 == turma[piorAluno].nota3) {
                        if(turma[i].matricula < turma[piorAluno].matricula) {
                            piorAluno = i;
                        }
                    }
                }
            }
        }
    }

    printf("Melhor aluno: %s %s\n", turma[melhorAluno].nome, turma[melhorAluno].sobrenome);
    printf("Matrícula: %u\n", turma[melhorAluno].matricula);
    printf("Média: %.2f\n", turma[melhorAluno].media);

    for(int i=0; i<10; i++) {   //análise da situação
        if(i!=melhorAluno) {
            if(strcmp(turma[i].nome, turma[melhorAluno].nome)==0) {
                xara = 1;
                if(piorAluno == i) {   //o xará é o pior aluno
                    printf("Situação: o melhor aluno quer mudar de nome\n");
                }
                else if(turma[i].nota1 >= 60 && turma[i].nota2 >= 60 && turma[i].nota3 >= 60) {   //o xará passou em todas as matérias
                    printf("Situação: o melhor aluno é amigo do seu xará\n");
                }
                else if(turma[i].nota1 < 60 || turma[i].nota2 < 60 || turma[i].nota3 < 60) {   //o xará não passou em alguma matéria
                    printf("Situação: o melhor aluno evita seu xará\n");
                }
            }
        }
    }

    if(xara == 0) printf("Situação: o melhor aluno não tem xará");

    return 0;
};