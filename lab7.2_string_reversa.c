#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[51];   //string padrão
    setbuf(stdin, NULL);
    printf("Insira a string que quer reverter:\n");
    fgets(str, 50, stdin);

    char strRev[51];   //string reversa
    int tam = strlen(str)-1;   //número de caracteres da string padrão
    strRev[tam+1]='\0';   //marca o último caractere da string reversa
    for(int i=tam; i>=0; i--) {
        strRev[tam-i]=str[i];
    }   //copia inversamente a string

    printf("\n%s\n", strRev);
    system("pause");
    return 0;
}