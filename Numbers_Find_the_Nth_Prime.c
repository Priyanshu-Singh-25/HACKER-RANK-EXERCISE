      //Problem
      
      /*Given an integer n, write a program to calculate the n-th prime number, starting from 1.
      
      Input Format
      
      A single integer 𝑛.
      Constraints
      
      1 <= n <=104
      Output Format
      
      Print the n-th prime number.
      Sample Input 0
      
      6
      Sample Output 0
      
      13
      Explanation 0
      
      13 is the 6th prime number.
      
      Sample Input 1
      
      12
      Sample Output 1
      
      37
        */

//Solution

#include <stdio.h>

int main() {
    int n,i;
    scanf("%d", &n);
    int count=0;
    
    for(i=2 ; count!=n ; ++i){
        int prime =1;
       for(int j=2 ; j*j<=i; ++j){
           if(i%j==0){
               prime=0;
               break;
           }
       }
      if(prime){
        ++count;
    }
    }
    printf("%d",i-1);
 
    return 0;
}
