//Problem

      /*You are given an integer N. Your task is to find the nearest prime number to N.
      
      If N itself is prime, return N.
      If there are two prime numbers at the same minimum distance from N, return the smaller one.
      Input Format
      
      A single integer N
      Constraints
      
      1 ≤ N ≤ 10^6
      Output Format
      
      Print the nearest prime number to N.
      Sample Input 0
      
      13
      Sample Output 0
      
      13
      Sample Input 1
      
      8
      Sample Output 1
      
      7
      */

//Solution

#include <stdio.h>

int main() {

    int n,num1,num2;
    scanf("%d",&n);
    if(n==1){
        printf("2");
        return 0;
    }
    for(int i=n;i>=2;--i){
        int f=1;
        for(int j=2;j*j<=i;++j){
            if(i%j==0){
                f=0;
            }
        }
        if(f){
          num1=i;
           break;
       }
    }
    for(int i=n; ;++i){
        int f=1;
        for(int j=2;j*j<=i;++j){
            if(i%j==0){
                f=0;
            }
        }
        if(f){
          num2=i;
           break;
       }
    }   
    if( (num2-n) < (n-num1) ) printf("%d",num2);
    else printf("%d",num1);
    
       
    return 0;
}
