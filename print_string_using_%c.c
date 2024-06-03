#include<stdio.h>

int main()
{   char st[50];
    int n;

    printf("Enter your name:");
    scanf("%8c",st);

    char *ptr=st;

    while(*ptr!='\0') {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}