#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int avaliarMensagem(char str[]) {
    int emojiPos = 0;
    int emojiNeg = 0;
    int i=0;
    while(str[i]!='\0') {
        switch(str[i]) {
            case ':':
            switch(str[i+1]) {
                case ')':
                emojiPos++;
                i++;
                break;

                case '(':
                emojiNeg++;
                i++;
                break;

                case '-':
                if(str[i+2]=='(') {
                    emojiNeg++;
                    i+=2;
                }
                else if(str[i+2]==')') {
                    emojiPos++;
                    i+=2;
                }
                break;

                case 'D':
                emojiPos++;
                break;

                case 'P':
                emojiNeg++;
                i++;
                break;

                case'\'':
                if(str[i+2]=='(') emojiNeg++;
                break;

                case '*':
                if(str[i+2]=='(') emojiNeg++;
                else emojiPos++;
                break;

                case '3':
                emojiPos++;
                i++;
                break;

                case 'S':
                emojiNeg++;
                i++;
                break;

                case '\\':
                emojiNeg++;
                i++;
                break;
            }
            break;

            case ';':
            if(str[i+1]==')') emojiPos++;
            break;

            case 'X':
            if(str[i+1]=='D') emojiPos++;

            case '<':
            if(str[i+1]=='3') emojiPos++;
            else if(str[i+1]==':'&&str[i+2]=='-') {
                emojiNeg++;
                i+=2;
            }
            break;

            case '^':
            if(str[i+1]=='-'&&str[i+2]=='^') {
                emojiPos++;
                i+=2;
            }
            break;

            case '>':
            if(str[i+1]==':') {
                if(str[i+2]=='('||str[i+2]==')') {
                    emojiNeg++;
                    i+=2;
                }
            }
            break;

            case 'O':
            if(str[i+1]=='_'&&str[i+2]=='o') emojiNeg++;
            break;

            case '\\':
            if(str[i+1]=='o'&&str[i+2]=='/') emojiPos++;
            break;
        }
        i++;
    }

    return emojiPos - emojiNeg;
}

int main() {
    char frase[201];
    printf("Insira a frase para avaliacao: ");
    setbuf(stdin, NULL);
    fgets(frase, 200, stdin);
    int indice = avaliarMensagem(frase);
    // printf("%d", indice);   //debug

    if(indice>0) printf("Positiva\n");
    else if(indice==0) printf("Neutra\n");
    else if(indice<0) printf("Negativa\n");

    return 0;
}