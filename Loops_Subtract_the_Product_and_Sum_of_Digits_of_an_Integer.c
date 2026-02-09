//Problem

      /*Given an integer n, calculate the product of its digits and the sum of its digits, then print the difference between the product and the sum.
      
      Difference = (Product of digits) − (Sum of digits)
      Input Format
      
      A single integer: n
      
      Constraints
      
      1 ≤ 𝑛 ≤ 10^5
      1 ≤ n ≤ 10^5
      Output Format
      
      Print a single integer representing: (product of digits of n) − (sum of digits of n)
      
      Sample Input 0
      
      234
      Sample Output 0
      
      15
      Sample Input 1
      
      4421
      Sample Output 1
      
      21
      Sample Input 2
      
      5
      Sample Output 2
      
      0
      */

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,digit;
    scanf("%d", &n);
    int num =n;
    int sum=0;
    int mul=1; 
    
  for(int i=1 ; num!=0 ; ++i){
     digit=num%10;
     sum+=digit;
     mul*=digit;
     num/=10; 
  }
    printf("%d",mul-sum);
   
    return 0;
}
