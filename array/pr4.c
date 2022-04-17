//  Generate n numbers of term of Fibonacci series 

#include<stdio.h>
int main(){
    int n,terms[100];
    terms[0] = 0;
    terms[1] = 1;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(int i=2; i<n ;i++){
        terms[i] = terms[i-1]+terms[i-2];
    }
    printf("The terms are : ");
    for(int i=0; i<n; i++){
        printf("%d ",terms[i]);
    }
    printf("\n");
    return 0;
}