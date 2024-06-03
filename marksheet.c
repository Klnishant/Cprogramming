#include<stdio.h>
int main()
{
    float a;
    float b;
    float c;

    printf("Enter the percentage of marks of subject 1\n",a);
    scanf("%f",&a);

    printf("Enter the percentage of marks of subject 2\n",b);
    scanf("%f",&b);

    printf("Enter the percentage of marks of subject 3\n",c);
    scanf("%f",&c);

    if(a+b+c<120||a<33||b<33||c<33)
    {
        printf("fail");
    }

    else
    {
        printf("passed\n");

    }
    return 0;

}