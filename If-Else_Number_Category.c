//Problem

      /*Write a C program to classify an integer N into one of the following categories based on specific conditions:
      
      Categories:
      
      Category A: N is divisible by 2 and 3 but not divisible by 5.
      Category B: N is greater than 20 and is the product of two distinct prime numbers within the range of [2,11].
      Valid numbers: 6, 10, 14, 15, 21, 22, 33, ...
      Category C: N is divisible by either 3 or 7 but not both, and N is a two-digit number.
      Category D: N is a perfect square less than 200.
      Valid squares: 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, ...
      Category E: If none of the above conditions are satisfied.
      Note: Output the category that comes first in lexicographic order.
      
      Input Format
      
      A single integer N
      
      Constraints
      
      -10^3 ≤ N ≤ 10^3
      
      Output Format
      
      A single character representing the category of N ('A', 'B', 'C', 'D', or 'E').
      
      Sample Input 0
      
      18
      Sample Output 0
      
      A
      Sample Input 1
      
      15
      Sample Output 1
      
      C
      Sample Input 2
      
      30
      Sample Output 2
      
      C
      Sample Input 3
      
      21
      Sample Output 3
      
      B
      Sample Input 4
      
      9
      Sample Output 4
      
      D
      Sample Input 5
      
      33
      Sample Output 5
      
      B
      */

//Solution

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n%2==0 && n%3==0 && n%5!=0){
        printf("A");
    }
    else if(n>20 && (n==2*3 || n==2*5|| n==2*7 || n==2*11 || n==3*5 || n==3*7 || n==3*11 || n==5*7 || n==5*11 || n==7*11)){
        printf("B");
    }
    else if((n>9 && n<=99) && (n%3==0 || n%7==0)){
        printf("C");
    }
    
    else if(n>0 && n<200 && (n==1 || n==4 || n==9 || n==16 || n==25 || n==36 || n==49 || n==64 || n==81 || n==100 || n==121 || n==144  || n==169 || n==196)){
            printf("D");
    }
    
    else{
        printf("E");
    }
  
    return 0;
}
