#include <stdio.h>
#include <stdlib.h>

int main() {
    int ent[10];
    for(int i=0; i<10; i++) {
        scanf("%d", &ent[i]);
    }
    int s[10];
    for(int j=0; j<10; j++) {
        s[j]=ent[9-j];
        printf("%d ", s[j]);
    }
    system("pause");
    return 0;
}