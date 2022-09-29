// Problem : Deletion of an element from End 
// Algorithm 
// Step 1: If N=0 then array is UNDERFLOW and STOP
// Step 2: A(UB) <- NULL
// Step 3: UB = UB-1
// Step 3: Stop 

#include<stdio.h>
#define MAX 50
int delete_from_end(int array[], int * upperbound){
    if(*upperbound > 0){
        int data = array[(*upperbound)-1];
        *upperbound = *upperbound -1;
        return data;
    }
    else{
        printf("UNDERFLOW \n");
    }
    return 0;
}
int traverse(int array[],int *upperbound){
    for(int i=0; i<(*upperbound); i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 1;
}

int main(){
    int array[MAX],*upperbound, n;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);
    upperbound = &n;
    printf("\nEnter the value of elements seperated by one space : ");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("\nArray before deletion : ");
    traverse(array,upperbound);
    delete_from_end(array,upperbound);
    printf("\nArray after deletion : ");
    traverse(array,upperbound);
    
    return 0;

}