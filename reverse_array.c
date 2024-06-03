#include<stdio.h>
int reverse(int arr[], int n);

int main() {
    int n=10;
    int arr[]= {1,2,3,4,5,6,7,8,9,10};

    printf("Before reverse of array\n");

    for(int i=0; i<n; i++) {
        printf("%d\n",arr[i]);
    }
    printf("After reverse of array\n");

    reverse(arr,n);

    return 0;
}

int reverse(int arr[], int n) {
    n=10;
    for(int j=n-1; j>=0; j--) {
        printf("%d\n",arr[j]);
    }
}