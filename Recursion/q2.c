// Program to print and array in reverse order using recursion 
#include<stdio.h>
void reversePrint(int *arr, int n){
    if(n<0) return;
    printf("%d ", arr[n]);
    reversePrint(arr, n-1);
}

int main(){
    int arr[20], n;
    printf("Enter the number of elements(<20) : ");
    scanf("%d", &n);
    printf("Enter all elemets separated by a space : ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    reversePrint(arr, n-1);
    return 0;
} 