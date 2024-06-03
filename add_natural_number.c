#include<stdio.h>
int sum(int n);

int main() {
    int n;

    printf("Enter the nth number:",n);
    scanf("%d",&n);

    printf("Sum of natural number is %d\n",sum(n));

    return 0;
}
int sum(int n) {

    if(n>0) {
        return n+sum(n-1);
    }
}