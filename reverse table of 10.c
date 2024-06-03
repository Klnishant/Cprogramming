#include<stdio.h>
int main()
{
    int i=10;
    int n=10;
    printf("Reverse table of 10 is\n");

    while(n>=1&&n<=10) {
        printf("%d\n",i*n);
        n--;
    }

    return 0;
}