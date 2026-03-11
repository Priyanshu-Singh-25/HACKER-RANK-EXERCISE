//Problem

      /*Complete the function findSecondLargest() which takes an array of integers and its size as input and returns the second largest element in the array. If there is no second largest element, return -1.
      
      Function Signature
      
      int findSecondLargest(int arr[], int n);
      Input Format
      
      The function will receive:
      An integer n, the number of elements in the array.
      An integer array arr[] of size n, where arr[i] represents the i-th element.
      Constraints
      
      1 ≤ n ≤ 10^5
      −10^9 ≤ arr[i] ≤ 10^9
      The function should run in O(N) time complexity and use O(1) extra space.
      Output Format
      
      Return the second largest element in the array.
      If there is no valid second largest element, return -1.
      Sample Input 0
      
      5  
      1 3 4 5 2  
      Sample Output 0
      
      4  
      Sample Input 1
      
      4  
      7 7 7 7  
      Sample Output 1
      
      -1
      */

//Solution

#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    int max=arr[0];
    for(int i=0; i<=n-1; ++i){
        if(arr[i]>max){
             max=arr[i];
        }
    }
    
    //Same check
    int count=0;
    for(int i=0; i<=n-1; ++i){
        if(arr[0]==arr[i]){
            count+=1;
        }
    }
    if(count==n){
        return -1;
    }
    
    //Initializing max2
    int max2=0;
    for(int i=0;i<n; ++i){
        if(arr[i]!=max){
            max2=arr[i];
            break;
        }
        
    }
    
    for(int i=0; i<=n-1; ++i){
        if(arr[i]>max2 && arr[i]<max){
            max2=arr[i];
        }
    }

        

    return max2;

    }

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result=findSecondLargest(arr, n);
    printf("%d\n", result);
    return 0;
}
