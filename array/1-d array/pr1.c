// Question : Program to input elements into array and print all its elements 
#include<stdio.h>
int main(){
    int array[100];
    int n;
    printf("Enter the number of elements in array (maximum 100) : ");
    scanf("%d",&n);
    printf("Enter the elements seprated by a space : ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    printf("Elemets in array : ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}