#include<stdio.h>
int main()
{
float p;//principle amount
float r;//rate of interest
int t;//period of time

printf("Enter the value of principle amount\n",p);
scanf("%f",&p);

printf("Enter the value of time period\n",t);
scanf("%d",&t);

printf("Enter the value of rate of iterest\n",r);
scanf("%f",&r);

//calculate simple interest

printf("Simple interest = %f",0.01*p*t*r);

return 0;
}

