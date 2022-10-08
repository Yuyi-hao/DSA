// Program to find GCD(Greatest Common Divisor) of two positive number

/*
Euclid's Method :
Recursive definition for finding GCD of two numbers:
          = GCD(n,m)         | if n > m
GCD(m, n) = m                | if n = 0
          = GCD(n, m mod n)  | if m > n 
*/

#include<stdio.h>
int gcd(int m, int n){
    if(n==0) return m;
    else if(n > m) return gcd(n, m);
    else return gcd(n, m%n);
}

int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("GCD(Greatest Common Divisor) of a(%d) and b(%d) : %d", a, b, gcd(a,b));
    return 0;
}

