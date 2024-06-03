#include<stdio.h>
int main()
{
    float a;//a=income
    float tax;
    printf("enter your income\n",a);
    scanf("%f",&a);

    if(a<=250000) {
        tax=0;
    }
    if(a>=250000&&a<=500000) {
        tax=0+(a-250000)*0.05;
    }
    if(a>=500000&&a<=1000000) {
        tax=12500+(a-500000)*0.2;
    }
    if(a>=1000000) {
        tax=12500+100000+(a-1000000)*0.3;
    }
    printf("your net tax is paid to %f\n",tax);
    return 0;
}