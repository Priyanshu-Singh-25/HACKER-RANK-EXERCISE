//Problem

      /*Given an array of integers that may contain duplicate elements and an integer K, your task is to find the Kth smallest element in the array without using a sorting algorithm. Instead of sorting the entire array, solve the problem using an efficient algorithm.
      
      Function Signature
      
      int kthSmallest(int arr[], int n, int k);
      Note: Each unique number should be considered only once. For example, given the array [1, 1, 2], the 2nd smallest element is 2, not 1.
      
      Input Format
      
      Line 1: An integer n representing the number of elements in the array.
      Line 2: n space-separated integers representing the elements of the array.
      Line 3: An integer k, representing the order of the smallest element to find.
      Constraints
      
      1 ≤ n ≤ 10^5
      -10^9 ≤ arr[i] ≤ 10^9
      1 ≤ k ≤ n
      Output Format
      
      A single integer representing the Kth smallest element in the array.
      Sample Input 0
      
      6
      7 10 4 3 20 15
      3
      Sample Output 0
      
      7
      Sample Input 1
      
      5
      7 10 4 20 15
      4
      Sample Output 1
      
      15
      */

//Solution

#include <stdio.h>
/**
 * Finds the kth smallest element in the array by iteratively finding the next
 * minimum.
 * @param arr: The input array.
 * @param n: The number of elements in the array.
 * @param k: The order of the smallest element to find (1-indexed).
 * @return: The kth smallest element in the array.
 */
int kthSmallest(int arr[],int n,int k){
     int min1=arr[0],min2;
    for(int i=0;i<n;i++){
        if(arr[i]<min1)min1=arr[i];
          }
       for(int j=2;j<=k;j++){
           for(int i=0;i<n;i++){
              if(arr[i]>min1){
                min2=arr[i];
                  break;
              }
           }
       for(int i=0;i<n;i++){
         if(arr[i]>min1 && arr[i]<min2)min2=arr[i];
          }
        min1=min2;
      }
   return min1;
}

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}
