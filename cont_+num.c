#include<stdio.h>
#include<conio.h>

int count(int arr[], int n) {
    int c=0;

    for(int i=0; i<n; i++) {
        if(arr[i]>0) {
            c++;
        }
        return c +=c++;
    }
}

int main() {
    int arr[]= {10,-5,-15,14,20,30};
    int n=6;

    printf("The +ve numbers in array = %d\n",count(arr,n));


    return 0;
}