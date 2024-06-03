#include<stdio.h>
int fib(int n);

int main() {
    int n;
    int a;
    printf("Enter the nth number:",n);
    scanf("%d",&n);

    printf("Fibonacci series of %d is\n",n);

    for(a=0; a<n; a++) {

        printf(" %d",fib(a));
    }
    return 0;
}

int fib(int n) {

    if(n==0 || n==1) {
        return n;
    }
    else {
        return fib(n-1)+fib(n-2);
    }
}