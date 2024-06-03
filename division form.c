#include<stdio.h>
int main()
{
    int number;
    int b=97;

    printf("Enter the number divisible by 97\n",number);
    scanf("%d",&number);

    if(number%b==0)
    {
        printf("It is divisible by 97 and answer is %d",number/b);
    }
    else
    {
        printf("It is not divisible by 97");

        return 0;
    }

}