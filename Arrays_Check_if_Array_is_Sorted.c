//Problem

      /*You are given an array of integers. Your task is to determine whether the array is sorted in non-decreasing order.
      
      Input Format
      
      The first line contains an integer n, the number of elements in the array.
      The second line contains n space-separated integers.
      Constraints
      
      1 ≤ n ≤ 10⁶
      -10⁶ ≤ arr[i] ≤ 10⁶
      Output Format
      
      Print "Sorted" if the array is sorted in non-decreasing order.
      Otherwise, print "Not Sorted".
      Sample Input 0
      
      5
      1 2 3 4 5
      Sample Output 0
      
      Sorted
      Sample Input 1
      
      5
      1 3 2 4 5
      Sample Output 1
      
      Not Sorted
      */

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; ++i){
        scanf("%d", &a[i]);
    }
    int flag=0;
    for(int i=0; i<=n-2; ++i){
        if(a[i]>a[i+1]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
  
    return 0;
}
