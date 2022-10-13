#include<stdio.h>
#define True 1
#define False 0

int isPalindromeHelper(char *s, int low, int high){
    if(high<=low){
        return True;
    }
    else if(s[low] != s[high]){
        return False;
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