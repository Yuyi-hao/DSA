// Problem : Deletion from begining
// Algorithm
// Step 1: If N=0 then array is UNDERFLOW and STOP
// Step 2: K <- LB
// Step 3: Repeat step 4 till k<UB
// Step 4: A(K) = A(K+1)
// Step 5: UB = UB-1
// Step 6: Stop

#include<stdio.h>
#define MAX 50 
int delete_from_start(int array[], int * upperbound){
    if(*upperbound > 0){
        int data = array[0];
        for(int i=0; i<(*upperbound); i++){
            array[i] = array[i+1];
        }
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
    delete_from_start(array,upperbound);
    printf("\nArray after deletion : ");
    traverse(array,upperbound);
    
    return 0;

}