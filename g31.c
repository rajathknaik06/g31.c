/*Sharon loves playing with numbers and exploring their unique properties. One day, she learned about palindromic numbers and decided to write a program to check if a given number is a palindrome or not. 



Can you help her accomplish this task?



Note: Palindrome is a number that is the same when reversed. For example, 121, 1331, and 45654 are palindromic numbers.

Input format :
The input consists of a single integer, n, where n is the number that Sharon wants to check for palindromic properties.

Output format :
The output displays one of the following messages:

"n is a Palindrome" if n is a palindrome.
"n is Not a Palindrome" if n is not a palindrome.*/

#include <stdio.h>

int main() {
    int n;
    int rev=0,r,no;
    scanf("%d", &n);
    no = n;
    while (n>0) {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    if (no == rev)
        printf("%d is a Palindrome",no);
    else
        printf("%d is Not a Palindrome",no);
        return 0;
}
