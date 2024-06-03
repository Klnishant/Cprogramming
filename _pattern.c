#include<stdio.h>
void pattern(int n);

int main() {
    int n;

    printf("Enter the value of n:",n);
    scanf("%d",&n);

    pattern(n);
    return 0;
}

void pattern(int n) {
    int a;

    if(n==1) {
        printf("*\n");
        return;
    }
    pattern(n-1);

    for(a=0; a<=(2*n-1); a++) {
        printf("*");
    }
    printf("\n");
}