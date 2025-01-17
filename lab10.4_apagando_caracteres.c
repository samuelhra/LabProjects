#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* deleteChar(char str[], char c) {
    int i=0;
    while(str[i]!='\0') {
        while(str[i]==c) {
            for(int k=i; str[k]!='\0'; k++) {
                str[k]=str[k+1];
            }
        }
        i++;
    }
    return str;
}

int main() {
    char pal[101];
    char let;
    fgets(pal, 100, stdin);
    scanf("%c", &let);
    printf("%s\n", deleteChar(pal, let));
    system("pause");
    return 0;
}