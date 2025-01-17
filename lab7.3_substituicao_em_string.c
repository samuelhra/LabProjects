#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[26];
    setbuf(stdin, NULL);
    printf("Insira o string, o caractere a ser substituido e o que vai substituir:\n");
    fgets(str, 26, stdin);
    char car1, car2;
    scanf("%c\n%c", &car1, &car2);

    for(int i=0; i<=25; i++) {
        if(str[i]==car1) {
            str[i]=car2;
            break;
        }
    }

    printf("\n%s\n", str);
    system("pause");
    return 0;
}