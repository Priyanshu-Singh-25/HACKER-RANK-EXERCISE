//Problem

    /*Write a program to print the first n odd numbers, starting from 1, in reverse order. The odd numbers should be printed starting from the largest odd number in the sequence, moving backwards to the smallest odd number.
    
    Input Format
    
    A single integer n
    Constraints
    
    0 ≤ n ≤ 1000
    Output Format
    
    The single line containing the first n odd numbers, printed in reverse order, separated by spaces and ending with a full-stop(.)
    Sample Input 0
    
    5
    Sample Output 0
    
    9 7 5 3 1.
    Sample Input 1
    
    3
    Sample Output 1
    
    5 3 1.
    */

//Solution

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n==0){
        return 0;
    }
    for(int i=n+n-1; i>=1; --i){
        printf("%d", i);
        --i;
        if(i>1){
            printf(" ");
        }
    }
    printf(".");
  
    return 0;
}
