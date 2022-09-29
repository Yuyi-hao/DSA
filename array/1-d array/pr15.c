// Problem : update an element in array 
// Algorithm :
// Step 1: READ(loc) 
// Step 2: if loc<0 or loc>ub then "index out of range" and stop else step 3
// Step 3: READ(new_data)
// Step 4: A[loc] = new_data
// Step 5: stop 

#include<stdio.h>
#define MAX 50 
int main(){
    int array[MAX],n,loc,data;
    printf("Enter number of elements in array(Max=10) : ");
    scanf("%d",&n);
    printf("Enter elements in array seperated by one space :  ");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("Enter position : ");
    scanf("%d",&loc);
    if(loc<0 || loc>=n){
        printf("Invalid Position \n");
        return -1;
    }
    else{
        printf("Enter new value : ");
        scanf("%d",&data);
        array[loc-1] = data;
    }
    printf("Updated Array : ");
    for(int i=0; i<n; i++){
        printf("%d ",array[i]);
    }
    return 0;
}
