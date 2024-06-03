#include<stdio.h>
int main()
{
    int a;//year

    printf("Enter the year\n",a);
    scanf("%d",&a);

    if(a%4==0)
    {
        printf("%d is a leap year\n",a);
    }
    else
    {
        printf("%d is not a leap year\n",a);
    }
}