// Problem : Deletion of a given element 
// Algorithm :
// Step 1: If N=0 then array is UNDERFLOW and Stop
// Step 2: Read DATA to be deleted
// step 3: K <- LB
// Step 4: Repeat step 5 till array[K] != data and K<UB
// Step 5: K <- K+1 
// Step 6: Repeat step 7 till K<UB
// Step 7: array[K] = array[K+1], K <- K+1
// Step 8: UB <- UB +1
// Step 9: Stop

#include<stdio.h>
#define MAX 50 
int delete_from_start(int array[], int * upperbound, int data){
    if(*upperbound > 0){
        int k=0;
        while(array[k] != data && k<(*upperbound)){
            k++;
        }
        if(k<=(*upperbound) && array[k]!=data){
            printf("Data not found");
            return 0;
        }
        else{
            for(int i=k; i<(*upperbound); i++){
                array[i] = array[i+1];
            }
            *upperbound = *upperbound -1;
            return data;
        }
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
    int array[MAX],*upperbound, n,data;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);
    upperbound = &n;
    printf("\nEnter the value of elements seperated by one space : ");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("ENter data to be deleted : ");
    scanf("%d",&data);
    printf("\nArray before deletion : ");
    traverse(array,upperbound);
    delete_from_start(array,upperbound,data);
    printf("\nArray after deletion : ");
    traverse(array,upperbound);
    return 0;
}