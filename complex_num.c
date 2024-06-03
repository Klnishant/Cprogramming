#include<stdio.h>
#include<string.h>

typedef struct complex {
    float real;
    float imaginary;
} complex;

void display(complex c) {

    printf("coplex no.:%.2f+%.2fi",c.real,c.imaginary);
}

int main()
{
    complex c[5];
    for(int i=0; i<5; i++) {
        printf("##FOR %dth COMPLEX NUMBER##\n",i+1);
        printf("Enter the real part of complex no.:");
        scanf("%f",&c[i].real);

        printf("Enter the imaginary part of complex no.:");
        scanf("%f",&c[i].imaginary);

        display(c[i]);
        printf("\n");
    }
    return 0;
}