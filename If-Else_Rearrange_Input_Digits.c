//Problem

      /*You are given a 4-digit integer N.
      
      Your task is to rearrange its digits in descending order, using only if-else statements.
      
      Note:
      
      You must not use arrays, loops, sorting functions, built-in sort utilities, or library functions.
      
      Instead, manually compare the digits using nested if-else conditions and determine their order from largest to smallest.
      
      Finally, print the rearranged digits without spaces.
      
      Input Format
      
      A single integer: {N}
      
      Constraints
      
      1000 ≤ N ≤ 9999
      N is always a 4-digit integer.
      Only if-else statements may be used for comparisons.
      No loops, no arrays, no sorting algorithms, no built-in functions like sort/max/min.
      Output Format
      
      Print the four digits of N, rearranged in descending order, without spaces.
      
      Sample Input 0
      
      2583
      Sample Output 0
      
      8532
      Sample Input 1
      
      2222
      Sample Output 1
      
      2222
      Sample Input 2
      
      9012
      Sample Output 2
      
      9210
      */

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,p,q,r,s,one,two,three,four;
    scanf("%d",&n);

    s = n % 10;
    r = (n / 10) % 10;
    q = (n / 100) % 10;
    p = (n / 1000);

    if(p >= q && p >= r && p >= s) {
        four = p;

        if(q >= r && q >= s){
            three = q;
            if(r >= s){
                two = r;
                one = s;
            }
            else{
                two = s;
                one = r;    
            }
        }
        else if (r >= q && r >= s) {
            three = r;
            if (q >= s) {
                two = q;
                one = s;
            } else {
                two = s;
                one = q;
            }
        } else {
            three = s;
            if (q >= r) {
                two = q;
                one = r;
            } else {
                two = r;
                one = q;
            }
        }

    } else if (q >= p && q >= r && q >= s) {
        four = q;

        if (p >= r && p >= s) {
            three = p;
            if (r >= s) {
                two = r;
                one = s;
            } else {
                two = s;
                one = r;
            }
        } else if (r >= p && r >= s) {
            three = r;
            if (p >= s) {
                two = p;
                one = s;
            } else {
                two = s;
                one = p;
            }
        } else {
            three = s;
            if (p >= r) {
                two = p;
                one = r;
            } else {
                two = r;
                one = p;
            }
        }

    } else if (r >= p && r >= q && r >= s) {
        four = r;

        if (p >= q && p >= s) {
            three = p;
            if (q >= s) {
                two = q;
                one = s;
            } else {
                two = s;
                one = q;
            }
        } else if (q >= p && q >= s) {
            three = q;
            if (p >= s) {
                two = p;
                one = s;
            } else {
                two = s;
                one = p;
            }
        } else {
            three = s;
            if (p >= q) {
                two = p;
                one = q;
            } else {
                two = q;
                one = p;
            }
        }

    } else {
        four = s;

        if (p >= q && p >= r) {
            three = p;
            if (q >= r) {
                two = q;
                one = r;
            } else {
                two = r;
                one = q;
            }
        } else if (q >= p && q >= r) {
            three = q;
            if (p >= r) {
                two = p;
                one = r;
            } else {
                two = r;
                one = p;
            }
        } else {
            three = r;
            if (p >= q) {
                two = p;
                one = q;
            } else {
                two = q;
                one = p;
            }
        }
    }

    printf("%d%d%d%d", four, three, two, one);

    return 0;
}
