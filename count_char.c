#include<stdio.h>
#include<string.h>

int main()
{   char st[1000];
    char c;
    int count=0;

    printf("Enter the sentence:");
    gets(st);

    printf("Enter the character those you want to count:");
    c=getchar();

    for(int i=0; st[i]; i++) {

        if(st[i]==c) {
            count++;
        }
    }
    printf("%c is %d times in your sentence",c,count);

    return 0;
}