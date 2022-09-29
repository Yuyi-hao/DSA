// Problem : Traverse array in reverse order 
// Algorithm:
// Step 1: i <- ub-1
// Step 2: Repeat step 3 while i >= 0
// step 3: Process A[i], i <- i-1
// Step 4: Stop

#include<stdio.h>
#define MAX 10 
int main(){
    int array[MAX],n;
    printf("Enter number of elements in array(Max=10) : ");
    scanf("%d",&n);
    printf("Enter elements in array seperated by one space :  ");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("Array in reverse oreder : ");
    for(int i=n-1; i>=0; i--){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}