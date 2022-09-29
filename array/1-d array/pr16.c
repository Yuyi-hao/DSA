// Problem : Write a program to find out the maximum and second maximum element of an array of n elements
// Algorithm :
// Step 1: maximum = 0, second_max = 0
// Step 2: for i<-lb to ub repeat step 3
// Step 3: if A[i] > maximum then second_max <- maximum and maximum <- A[i] 
// Step 4: Stop 

#include<stdio.h>
#define MAX 10 
int main(){
    int array[MAX],n,smax=0,max=0;
    printf("Enter number of elements in array(Max=10) : ");
    scanf("%d",&n);
    printf("Enter elements in array seperated by one space :  ");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    for(int i=0; i<n; i++){
        if(max < array[i]){
            smax = max;
            max = array[i];
        }
    }
    printf("MAximum element is %d and second maximum element is %d \n",max,smax);
    return 0;
}