#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco {
    char rua[51];
    int num;
    char estado[51];
};

struct dados {
    char nome[51];
    int idade;
    float salario;
    struct endereco end;
};

int main() {
    char fun[21];   //entrada da função que o programa vai executar
    struct dados registro[5];
    int i = 0;   //espaço a ser ocupado no registro
    char n[51];   //o nome que o programa vai pegar na memória
    
    while(fgets(fun, 20, stdin)) {
        printf("\nVoce quer registrar uma pessoa ou mostrar o registro de uma pessoa?\nDigite \"inserir\" para registrar, \"mostrar\" para mostrar ou \"alterar\" para editar um registro.\n");
        
        if(strcmp(fun, "inserir\n")==0) {
            if(i<5) {
                printf("\nInsira os dados da pessoa (nome, idade e salario)\n");
                scanf("%s", registro[i].nome);
                scanf("%d", &registro[i].idade);
                scanf("%f", &registro[i].salario);
                scanf("%s", registro[i].end.rua);
                scanf("%d", &registro[i].end.num);
                scanf("%s", registro[i].end.estado);
                printf("Registro %s %d %.2f %s %d %s inserido\n", registro[i].nome, registro[i].idade, registro[i].salario, registro[i].end.rua, registro[i].end.num, registro[i].end.estado);
                i++;
                setbuf(stdin, NULL);
            } else {
                printf("Espaco insuficiente\n");
                setbuf(stdin, NULL);
            }
        } else if(strcmp(fun, "mostrar\n")==0) {
            printf("\nDe qual pessoa você quer mostrar os dados?\n");
            gets(n);
            for(int j=0; j<5; j++) {
                if(strcmp(registro[j].nome, n)==0) {
                    printf("Registro %s %d %.2f %s %d %s\n", registro[j].nome, registro[j].idade, registro[j].salario, registro[j].end.rua, registro[j].end.num, registro[j].end.estado);
                    j = 5;
                    setbuf(stdin, NULL);
                }
                else if(j==4) {
                    printf("Registro ausente\n");
                    setbuf(stdin, NULL);
                }
            }
        } else if(strcmp(fun, "alterar\n")==0) {
            printf("\nDe qual pessoa você quer editar os dados?\n");
            scanf("%s", n);
            for(int j=0; j<5; j++) {
                if(strcmp(registro[j].nome, n)==0) {
                    scanf("%d", &registro[j].idade);
                    scanf("%f", &registro[j].salario);
                    scanf("%s", registro[j].end.rua);
                    scanf("%d", &registro[j].end.num);
                    scanf("%s", registro[j].end.estado);
                    printf("Registro %s %d %.2f %s %d %s alterado\n", registro[j].nome, registro[j].idade, registro[j].salario, registro[j].end.rua, registro[j].end.num, registro[j].end.estado);
                    j = 5;
                    setbuf(stdin, NULL);
                }
                else if(j==4) {
                    printf("Registro ausente para alteracao\n");
                    setbuf(stdin, NULL);
                }
            }
        } else {
            printf("Operação não encontrada\n");
        }
    }
    return 0;
};