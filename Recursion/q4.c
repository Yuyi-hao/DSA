// program to multiply two natural numbers using recursion 

#include<stdio.h>
int mul(int a, int b){
    if(a==0 || b==0) return 0;
    else if(b ==0) return a;
    return a+mul(a, b-1);
}

int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Product of a(%d) and b(%d) : %d", a, b, mul(a,b));
    return 0;
}