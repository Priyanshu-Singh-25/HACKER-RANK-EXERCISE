//Problem

      /*Given an array of integers, determine whether the array is sorted.
      
      Print "Ascending" if the array is sorted in non-decreasing (ascending) order
      Print "Descending" if the array is sorted in non-increasing (descending) order
      Print "Not Sorted" otherwise
      NOTE: An array with equal adjacent elements is considered sorted - "Ascending"
      
      Input Format
      
      First line: An integer N, representing the size of the array
      Second line: N space-separated integers
      Constraints
      
      1 ≤ N ≤ 10⁵
      −10⁹ ≤ A[i] ≤ 10⁹
      Output Format
      
      Print one of the following:
      
      Ascending
      Descending
      Not Sorted
      Sample Input 0
       
      5
      1 2 2 3 5
      Sample Output 0
      
      Ascending
      Sample Input 1
      
      5
      9 7 7 4 1
      Sample Output 1
      
      Descending
      Sample Input 2
      
      1
      10
      Sample Output 2
      
      Ascending
      Sample Input 3
      
      4
      5 5 5 5
      Sample Output 3
      
      Ascending
      Sample Input 4
      
      5
      1 3 2 4 5
      Sample Output 4
      
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
    for(int i=0; i<=n-1; ++i){
        scanf("%d", &a[i]);
    }
    int isascending=1;
    int isdescending=1;
    for(int i=0; i<=n-2; ++i){
        if(a[i]>a[i+1]){
             isascending=0;
        }
        else if(a[i]<a[i+1]){
            isdescending=0;
        }
    }
    if(isascending){
        printf("Ascending");
    }
    else if(isdescending){
        printf("Descending");
    }
    else{
        printf("Not Sorted");
    }
    
    return 0;
}
