#include<stdio.h>
#define gst 0.03

int main() {
    int price;
    float wt,before_tax,net_amount;

    printf("Enter the price of gold:\n",price);
    scanf("%d",&price);

    printf("Enter the weight of gold:\n",wt);
    scanf("%f",&wt);

    before_tax=price*wt;
    net_amount=before_tax+(before_tax*gst);

    printf("Net payable amount=%.2f\n",net_amount);

    return 0;
}