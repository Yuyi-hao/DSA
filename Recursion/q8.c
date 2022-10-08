// Find the factorial of any number with the use of tail recursion 

#include<stdio.h>
int fact(int n){
    if(n==0) return 1;
    else return n*fact(n-1);
}

int main(){
    int n;
    printf("Enter the number n : ");
    scanf("%d", &n);
    if(n<0) printf("Factorial of a negative number is not possible\n");
    else printf("Factorial of number %d is : %d", n, fact(n));
    return 0;
}