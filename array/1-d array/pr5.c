// Problem : Insert an element in begining 
// Algorithm
// Step 1: If upper bound is equal to max index of array 
//         print overflow and stop else step 2
// Step 2: read data
// Step 3: n = upperbound repeat step 4 while n != 0 
// Step 4: array[n+1] = array[n], n=n-1
// Step 5: array[0] = data, upperbound = upperbound +1
// Step 6: Stop
#include<stdio.h>
#define MAX 50
int insert_beg(int array[], int * n, int data){
    if((*n)<MAX){
        for(int i= (*n) -1; i>=0; i--){
            array[i+1] = array[i];
        }
        array[0] = data;
        *n = *n +1;
    }
    else{
        printf("Overflow\n");
    }
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
    printf("Enter data to be inserted in the begining  : ");
    scanf("%d",&data);
    insert_beg(array,upperbound,data);
    printf("Array after insertion : ");
    traverse(array,(*upperbound));
    return 0;
}