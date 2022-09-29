// program to count the number of negative and positive numbers in a array 
// 0 is assumed as positive number 
#include<stdio.h>
int main(){
    int array[100],negative_num=0,positive_num=0,total=0;
    printf("Enter the number of element in array : ");
    scanf("%d",&total);
    printf("Enter elements seperated by one space : ");
    for(int i=0; i<total; i++){
        scanf("%d",&array[i]);
    }
    for(int i=0; i<total; i++){
        if(array[i]<0){
            negative_num++;
        }
        else{
            positive_num++;
        }
    }
    printf("Elemets in array : ");
    for(int i=0; i<total; i++){
        printf("%d ",array[i]);
    }
    printf("\nNumer of negative elements : %d \nNumber of positive elements : %d",negative_num,positive_num);

    return 0;
}