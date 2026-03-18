//Problem

      /*You are given an array of integers and a target_sum. Your task is to find the first pair of integers in the array whose sum is equal to the target sum. The pair should be printed in the order they appear in the array.
      
      Input Format
      
      The first line contains an integer n, the number of elements in the array.
      The second line contains n space-separated integers representing the array elements.
      The third line contains an integer target_sum, the target sum.
      Constraints
      
      1 ≤ n ≤ 10⁶
      -10⁶ ≤ arr[i] ≤ 10⁶
      0 ≤ target_sum ≤ 10⁶
      Output Format
      
      Print the first pair of integers in the array whose sum is equal to the target sum. Print the pair as space-separated integers on a single line. If no such pair exists, print -1.
      Sample Input 0
      
      5
      1 2 3 4 5
      5
      Sample Output 0
      
      1 4
      Sample Input 1
      
      6
      -10 -20 -30 -40 -50 -60
      -70
      Sample Output 1
      
      -10 -60
        */

//Solution

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<=n-1; ++i){
        scanf("%d", &a[i]);
    }
    int target_sum;
    scanf("%d", &target_sum);
    int flag=0;
    for(int i=0; i<=n-1; ++i)
    {
        for(int j=i+1; j<=n-1; ++j)
        {
            
        if(target_sum==a[i]+a[j]) 
          {
            printf("%d %d", a[i],a[j]);
            flag=1;
            return 0 ;
          }
         }
      }
    if(flag==0){
            printf("-1");
    }
  
    return 0;
}
