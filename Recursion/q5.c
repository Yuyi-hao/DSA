// Program to find largest and smallest of n elements in ana array using recursion 
#include<stdio.h>
int maximum(int *arr, int n){

    if(n==0) return arr[n];
    int largest = maximum(arr, n-1);
    if(arr[n] > largest) return arr[n];
    return largest;

}

int minimum(int *arr, int n){

    if(n==0) return arr[n];
    int smallest = minimum(arr, n-1);
    if(arr[n] < smallest) return arr[n];
    return smallest;

}

int main(){
    int arr[20], n;
    printf("Enter the number of elements(<20) : ");
    scanf("%d", &n);
    printf("Enter all elemets separated by a space : ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Largest element : %d\n", maximum(arr, n-1));
    printf("Smallest element : %d\n", minimum(arr, n-1));
    return 0;
}