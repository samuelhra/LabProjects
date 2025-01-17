#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int amountChar(char str[], char c) {
    int count = 0;
    int i = 0;
    while(str[i]!='\0') {
        if(str[i]==c) count++;
        i++;
    }
    return count;
}

int main() {
    char string[100];
    fgets(string, 100, stdin);
    char letra;
    scanf("%c", &letra);
    printf("%d\n", amountChar(string, letra));
    system("pause");
    return 0;
}