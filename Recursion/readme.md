# <center>__Recursion__</center>

## What is recursion?

Definition:
    A function said to br _recursively defined,_ if a function containing either a Call statement to itself or a Call statement to a second function that may eventually result in a Call statement back to the original function.

Properties of a recursive function:
1. There must be a stopping condition or base criteria for which the function does not call itself.
2. Each time the function call itself(directly or indirectly), the arguments of the function move closer to the __base condition__.


## Principle of recursion 

Recursion is a function that call itself or a function that call original function.\
A recursion function satisfy two condition:
1. It must contain a **base case.**
2. With each call to function it must move closer to base case.

Assumption while creating a recursive solution:\
**Base case:** Base case is the terminating condition for the function does not call itself.

## How recursion works❓

1. When a recursive program is subjected for execution, the recursive function calls will not be execute immediately.
2. The initial parameter input value pushed on to the stack.
3. Each time a function is called a new set of local variable and formal parameter are again pushed on to the stack and execution starts from the beginning of the function using changed new value. The process is repeated till a base condition(stopping condition) is reached.
4. If there is no base condition it will result in overflow of stack in that case our program might throw error.
5. Once a base case is reached the recursive function calls popping elements from stack and returns a result to the previous values of the function.
6. A sequence of return ensures that the solution to the original problem is obtained.

## Advantages of recursion:
1. We can avoid initialization of variable inside the function, but iterative solutions are required to be initialized.
2. If we can solve a problem for smaller input we can use recursion to get the solution for larger input.
3. It is easy to implement and understand 

## Disadvantages of recursion:
1. It occupies lots of memory: As it store function variables separately.
2. It is slower than recursive solution: The pushing and popping operation in stack consume more time. 
3. Execution of recursive function if slower because of the overhead of calling repeatedly.

## Difference between iterative and recursive solution: 
|  | Iterative | Recursive|
|--|-----------|----------|
| Definition | It is a process of executing single or group of statements repeatedly. Until specified condition.| It is technique to define something in terms of itself. It is terminated when base condition reached.|
|Termination point| It is controlled by counter.| It controlled by a if _if_ statement which termed as _base condition_.|
|Program structure | It has four section: Initialization, decision, computation and updating of counter variable.| It has two part base condition as _if_ statement and function body with a call to itself.|
|Implementation| It uses _loop_ statements like `while`,`for` and `do while`.| Recursive solution applied using _conditional_ statements like `if`, `if-else`, `if-else if-else` or nested `if-else` and `switch`.|
|Performance| Iterative solution is __*fast*__ and requires less memory.| recursive solution in __*costly*__ in terms of time and memory.  
|Uses|It is use for reparative tasks. eg- Printing elements of a list.| It is used to do find the solution of a problem with larger input when there is solution of smaller input is already available.|


>**Implementation of recursion:**\
>recursion is applied using stack data structure one for storing parameters and other one for return address of previous calls of that function.

## Types of recursion:
There are two kinds of recursion direct or indirect recursion:\
1. **Direct recursion** : In which a function call itself termed as direct recursion.
2. **Indirect recursion** : This occurs when function
`A` invokes function `B`, which in turn invokes function `A`. There can even be several more functions involved in the recursion.

>**Indirect type of recursion** : 
>>Sometimes you can find a recursive solution by slightly changing the original problem. This new function is called a recursive helper function. The original problem can be solved by invoking the recursive helper functionThere can even be several more functions involved in the recursion. 

Example : 
```c
#include<stdio.h>

int isPalindromeHelper(char *s, int low, int high){
    if(high<=low){
        return 1;
    }
    else if(s[low] != s[high]){
        return 0;
    }
    isPalindromeHelper(s, low+1, high-1);
}

char *isPalindrome(char *s, int sSize){
    if (isPalindromeHelper(s, 0, sSize-1)) return "True";
    return "False";
}

int main(){
    char s1[] = "mom";
    char s2[] = "jane";
    printf("The string %s is palindrome : %s\n", s1, isPalindrome(s1, 3));
    printf("The string %s is palindrome : %s\n", s2, isPalindrome(s2, 3));
    return 0;
}
```

Output :

```
The string mom is palindrome : True
The string jane is palindrome : False
```









1. [Calculate factorial of an integer using recursion.](https://github.com/Yuyi-hao/DSA/blob/main/Recursion/q1.c)
2. [Program to print and array in reverse order using recursion.](https://github.com/Yuyi-hao/DSA/blob/main/Recursion/q2.c)
3. [Program to find product of elements of the given array.](https://github.com/Yuyi-hao/DSA/blob/main/Recursion/q3.c)
4. [program to multiply two natural numbers using recursion.](https://github.com/Yuyi-hao/DSA/blob/main/Recursion/q4.c)
5. [Program to find largest and smallest of n elements in ana array using recursion.](https://github.com/Yuyi-hao/DSA/blob/main/Recursion/q5.c)
6. [Program to find GCD(Greatest Common Divisor) of two positive number.](https://github.com/Yuyi-hao/DSA/blob/main/Recursion/q6.c)
7. [Write a recursive algorithm to implement the a function also write a program.](https://github.com/Yuyi-hao/DSA/blob/main/Recursion/q7.c)
8. [Find the factorial of any number with the use of tail recursion.](https://github.com/Yuyi-hao/DSA/blob/main/Recursion/q8.c)
9. [Tower of hanoi](https://github.com/Yuyi-hao/DSA/blob/main/Recursion/q9.c)
10. [Check if a given string is palindrome or not using recursion.](https://github.com/Yuyi-hao/DSA/blob/main/Recursion/q10.c)
