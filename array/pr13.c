// Problem : To invert the element of an array and stored invert element in the same array without using another array 
// Algorithm :
// Step 1:  i<- lb j <- ub
// Step 2: Repeat step 3 and 4 while i<j
// Step 3: temp = A[i], A[i] = A[j], A[j] = temp
// Step 4: i <- i+1, j<- j-1
// Step 5: Stop

#include<stdio.h>
#define MAX 20
int invert(int *array, int n){
    int i=0,j=n-1,temp;
    while(i<j){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }
    return 0;
}
int traverse(int * array, int n){
    for(int i=0; i<n; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 1;
}
int main(){
    int array[MAX],n;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);
    printf("Enter elements of array seperated by one space : ");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("Array before inverting : ");
    traverse(array,n);
    invert(array,n);
    printf("Array after inverting : ");
    traverse(array,n);
    
    return 0;
}