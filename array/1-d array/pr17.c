// Problem : Write a program to interchange the odd and even position element of an array of n element
// Algorithm :
// Step 1: i <- lb 
// Step 2: Repeat step 3 and 4 while i<ub-2 
// Step 3: temp = A[i], A[i] = A[i+!], A[i+1] = temp
// Step 4: i <- i+2
// Step 5: Stop 

#include<stdio.h>
#define MAX 10 
int main(){
    int array[MAX],n,temp=0;
    printf("Enter number of elements in array(Max=10) : ");
    scanf("%d",&n);
    printf("Enter elements in array seperated by one space :  ");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("Array before interchanging :\n");
    for(int i=0; i<n; i++){
        printf("Array[%d] = %d\n",i,array[i]);
    }
    for(int j=0; j<n-2; j +=2 ){
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
    }
    printf("Array after interchanging :\n");
    for(int i=0; i<n; i++){
        printf("Array[%d] = %d\n",i,array[i]);
    }
    return 0;
}