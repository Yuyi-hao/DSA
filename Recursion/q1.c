// Calculate factorial of an integer using recursion 
#include<stdio.h>
int fact(int n){
    if(n<2) return 1;
    return n*fact(n-1);
}

int main(){
    int n;
    printf("Enter the number n : ");
    scanf("%d", &n);
    int factorial = fact(n);
    printf("Factorial of number %d is : %d", n, factorial);
    return 0;
}