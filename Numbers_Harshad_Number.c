//Problem

/*A Harshad Number is a number that is divisible by the sum of its digits.

Compute the sum of the digits of the number.
If the number is divisible by this sum, it is a Harshad Number.
Otherwise, it is not a Harshad Number.
Input Format

A single integer 𝑁.

Constraints

1 <= N <= 106

Output Format

Print,"[N] is a harshad number" if N is a Harshad number.
Print, "[N] is not a harshad number" otherwise.
Sample Input 0

4077
Sample Output 0

4077 is not a harshad number
Sample Input 1

5833
Sample Output 1

5833 is a harshad number
Explanation 1

5 + 8 + 3 + 3 = 19
5833 is divisible by 19.
  */

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int a4=n/1000;
    int a3=(n%1000)/100;
    int a2=((n%1000)%100)/10;
    int a1=((n%1000)%100)%10;
    int sum=a1+a2+a3+a4;
    if(n%sum==0){
        printf("%d is a harshad number", n);
    }
    else{
        printf("%d is not a harshad number", n);
    }
    return 0;
}
