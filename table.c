#include<stdio.h>
int main()
{
    int n,i;

    printf("Table of\t",n);
    scanf("%d",&n);

    while(i<=9) {
        printf("%d\n",n*(i+1));
        i++;
    }
    return 0;
}