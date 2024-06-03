#include<stdio.h>

int main() {
    int *a;
    int b=4;
    a=&b;
    printf("Adress of b is %u\n",a);
    printf("Value of b is %d\n",*a);

    return 0;
}