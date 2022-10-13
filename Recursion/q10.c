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
    printf("The string %s is palindrome : %s\n", s2, isPalindrome(s2, 4));
    return 0;
}
