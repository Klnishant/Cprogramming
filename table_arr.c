#include<stdio.h>

int main() {
int n;
int arr[10]={1,2,3,4,5,6,7,8,9,10};

printf("Enter the value of n:\n",n);
scanf("%d",&n);

printf("Multiplication table of '%d':\n",n);
for(int i=0;i<=9;i++) {
printf("%d\n",n*arr[i]);
}
    
    return 0;
    }