// Problem : Insert an element at the end 
// Algorithm
// Step 1: If upper bound is equal to max index of array 
//         print overflow and stop else step 2
// Step 2: read data
// Step 3: array[upperbound] = data
// Step 5: upperbound = upperbound +1
// Step 6: Stop

#include<stdio.h>
#define MAX 50
int insert_end(int array[], int * n, int data){
    array[(*n)] = data;
    *n = *n +1;
    return data;
}
void traverse(int array[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",array[i]);
    }
    return ;
}

int main(){
    int array[MAX],n=0,data=0, * upperbound ;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);
    upperbound = &n;
    printf("Enter the values of elements seperated by one space : ");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("Array before insertion : ");
    traverse(array,n);
    printf("\n");
    printf("Enter data to be inserted at begining  : ");
    scanf("%d",&data);
    insert_end(array,upperbound,data);
    printf("Array after insertion : ");
    traverse(array,(*upperbound));
    return 0;
}