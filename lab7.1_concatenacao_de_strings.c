#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string1[50];   //primeira string
    char string2[50];   //segunda string
    int i=0;
    setbuf(stdin, NULL);   //reset do buffer
    printf("Insira as duas strings:\n");
    gets(string1);
    gets(string2);

    char stringToda[100];
    for(i=0; string1[i]!='\0'; i++) {  //copia a primeira string pra total
        stringToda[i] = string1[i];
    }
    for(int k=0; string2[k]!='\0'; k++) {   //copia a segunda string pra total
        stringToda[i] = string2[k];
        i++;
    }
    printf("\n%s\n", stringToda);   //imprime a string completa
    system("pause");
    return 0;
}