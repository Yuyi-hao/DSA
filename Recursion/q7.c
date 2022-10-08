// Write a recursive algorithm to implement the following function also write a program 

/*
Given Function : 

            = n+1               | if m = 0
    f(m,n)  = f(m-1, 1)         | if n = 0
            = f(m-1, f(m, n-1)) | else

Algorithm :

    int f(m, n)
    Step 0: START
    Step 1: if m == 0
            return n+1
    Step 2: if n == 0
            return Call f(m-1, 1)
    Step 3: Call f(m-1, f(m, n-1))
    Step 4: STOP

*/

#include<stdio.h>

int f(int m, int n){
    if(m==0) return n+1;
    else if(n==0) return f(m-1, 1);
    return f(m-1, f(m-1, n-1));
}

int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("f(%d,%d) : %d", a, b, f(a,b));
    return 0;
}