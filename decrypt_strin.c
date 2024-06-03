#include<stdio.h>
void encrypt(char st2[]);
void addascii(char st[]) {
    int i;

    for( i=0; i<strlen(st); i++) {

        printf("%c",st[i]+1);
    }
    printf("\n");
    encrypt(st);
}
void encrypt(char st[]) {

    for(int i=0; i<strlen(st); i++) {
        printf("%c",st[i]);
    }
}

int main()
{   char st[]="Nishant";
    addascii(st);

    return 0;
}