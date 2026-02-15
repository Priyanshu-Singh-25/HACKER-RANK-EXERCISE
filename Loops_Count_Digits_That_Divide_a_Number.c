//Problem

      /*Given a positive integer num, count how many of its digits divide num evenly.
      
      A digit d divides num if:
      
      num % d == 0
      You must print the count, not return it.
      
      Input Format
      
      A single integer: num
      
      Constraints
      
      1 ≤ 𝑛𝑢𝑚 ≤ 10^9
      Input does NOT contain the digit 0
      Output Format
      
      Print a single integer — the count of digits that divide num
      
      Sample Input 0
      
      7
      Sample Output 0
      
      1
      Explanation 0
      
      7 divides itself, hence the answer is 1.
      
      Sample Input 1
      
      121
      Sample Output 1
      
      2
      Explanation 1
      
      121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.
      
      Sample Input 2
      
      1248
      Sample Output 2
      
      4
      Explanation 2
      
      1248 is divisible by all of its digits, hence the answer is 4.
        */

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num,digits;
    scanf("%d", &num);
    int n=num;
    int count =0;
    
    for(int i=1; n!=0; ++i){
        digits=n%10;
        if(num%digits==0){
            ++count;
        }
        n/=10;
    }
    printf("%d", count);
  
    return 0;
}
