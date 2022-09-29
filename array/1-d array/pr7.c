// Problem : Insert an element after a given element 
// Algorithm 
// Step 1: If upper bound is equal to max index of array 
//         print overflow and stop else step 2
// step 2: read data,loc 
// Step 3: k = upperbound 
// Step 4: repeat step 5 while k!=loc
// Step 5: array[k] = array[k-1], k=k-1
// Step 6: array[loc] = data
// Step 7: upperbound = upperbound +1
// Step 8: Stop

#include<stdio.h>
#define MAX 50
int insert_at_loc(int array[],int * upperbound, int data, int loc){
    if((*upperbound)<MAX){
        for(int k=(*upperbound); k>loc-1 ; k--){
            printf("%d\n",k);
            array[k] = array[k-1];
        }
        array[loc-1] = data;
        (*upperbound)++;
    }
    else{
        printf("Overflow\n");
    }
    return data;
}
int traverse(int array[], int *upperbound){
    for(int i=0; i<(*upperbound); i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
int main(){
    int array[MAX],loc,*upperbound,data,n;
    printf("Enter number of elemets in array : ");
    scanf("%d",&n);
    upperbound = &n;
    printf("Enter the elements in array seperated by one space : ");
    for(int i=0; i<n; i++){ 
        scanf("%d",&array[i]);
    }
    printf("Elements of array before insertion : ");
    traverse(array,upperbound);
    printf("Enter the data to be inserted : ");
    scanf("%d",&data);
    printf("Enter the location after which elements to be inserted : ");
    scanf("%d",&loc);
    insert_at_loc(array,upperbound,data,loc);
    printf("Elements of array after insertion : ");
    traverse(array,upperbound);
    return 0;
}