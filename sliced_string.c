#include<stdio.h>
void slice(char st[]) {
    char *ptr;
    ptr=st;

    while(*ptr!='\0') {
        printf("%c\t",*ptr++);
    }
}

int main()
{   char st[50];

    printf("Enter your name:");
    scanf("%s",st);

    printf("Name before sliced:%s\n",st);

    printf("Name after sliced:");
    slice(st);

    return 0;
}