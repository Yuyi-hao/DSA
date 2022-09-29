// Question : convert decimal to binary 
#include<stdio.h>
int main(){
    int decimal,d,binary[100],n=0;
    printf("Enter the decimal value : ");
    scanf("%d",&decimal);
    d = decimal;
    while (d>0){
        binary[n] = d%2;
        d = d/2;
        n++;
    }
    printf("Binary equivalent of %d : ",decimal);
    if(decimal==0){
        printf("0\n");
    }
    else{
        for(int i=n-1; i>=0 ; i--){
            printf("%d",binary[i]);
        }
    }
    printf("\n");
}