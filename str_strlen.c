#include<stdio.h>
#include<string.h>

int main()
{   char st[50];

    printf("Enter your name:");
    scanf("%s",st);

    printf("Your name is %d character",strlen(st));

    return 0;
}