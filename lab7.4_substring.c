#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[51];   //string dada
    setbuf(stdin, NULL);
    printf("Insira a string: ");
    fgets(str, 51, stdin);

    char substr[51];   //possível substring dada
    printf("Insira a possivel substring: ");
    gets(substr);

    int i, k, m, n=0;   //contadores i, k, m; operador n (n=1 -> comando de parada)
    short int sub = 0;   //valor de substring positivo(1)/negativo(0)

    for(i=0; str[i]!='\0'; i++) {   //passa por cada caractere da string
        n = 0; //reseta o valor de n
        if(str[i]==substr[0]) {   //checa se o caractere é igual ao primeiro dígito da substring
            for(k=1, m=i+1; n<1; k++) {   //passa por toda a substring comparando com a string
                if(substr[k]=='\0') {   //se o programa passou por toda a substring, sub=1 e o laço for fecha
                    sub = 1;
                    break;
                }
                if(substr[k]!=str[m]) n = 1;   //se o caractere não bateu com o da string, o indicador n de parada é ativado.
                else m++;   //para continuar a checagem
            }
        }
    }   //checagem de substring
    
    if(sub==1) printf("É substring\n");
    else printf("Não é substring\n");
    system("pause");
    return 0;
}