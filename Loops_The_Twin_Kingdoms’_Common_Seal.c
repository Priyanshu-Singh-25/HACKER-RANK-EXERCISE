//Problem

      /*In the land of Arithmia, there are two neighboring kingdoms ruled by King Shivam and Queen Belia. Each kingdom owns a magical seal engraved with a positive integer.
      
      To form an alliance, both seals must be stamped with the largest possible common magical power that can divide both numbers exactly.
      
      The royal mathematician must determine the Greatest Common Divisor (GCD) of the two numbers to create the alliance seal.
      
      Your mission is to help the mathematician find the GCD of two natural numbers.
      
      Input Format
      
      A single line containing two space-separated natural numbers A and B
      
      Constraints
      
      1 ≤ 𝐴, 𝐵 ≤ 10^9
      Output Format
      
      Print a single integer i.e. the GCD of A and B
      
      Sample Input 0
      
      12 18
      Sample Output 0
      
      6
      Sample Input 1
      
      7 13
      Sample Output 1
      
      1
      Sample Input 2
      
      20 0
      Sample Output 2
      
      20
        */

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int num=0;
    for(int i=1; i<=a || i<=b; i++){
        if(a%i==0 && b%i==0){
            num=i;
        }
    }
    printf("%d", num);

    return 0;
}
