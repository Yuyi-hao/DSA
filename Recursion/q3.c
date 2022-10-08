// Program to find product of elements of the given array 

#include<stdio.h>
int product(int *arr, int n){
    if(n<0) return 1;
    return arr[n]*product(arr, n-1);
}

int main(){
    int arr[20], n;
    printf("Enter the number of elements(<20) : ");
    scanf("%d", &n);
    printf("Enter all elemets separated by a space : ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int result = product(arr, n-1);
    printf("The product of elements in array : %d", result);
    return 0;
} 