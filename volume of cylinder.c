#include<stdio.h>
int main()
{
float a=3.14;//value of pi
float r;//radius of cylinder
float h;//height of cylinder

printf("enter the value of radius\n");
scanf("%f",&r);

printf("enter the value of height\n");
scanf("%f",&h);

printf("volume of cylinder is %f",a*r*r*h);

return 0;
}
