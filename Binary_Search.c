#include <stdio.h>
int binary_search(int arr[], int, int);

int main() {
   int arr1[10] = {1, 5, 7, 10, 12, 13, 16, 19, 20, 30};
   int arr2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
   printf("%d\n", binary_search(arr2, 10, 3)) ;
   system("pause") ;
   return 0 ;
}

int binary_search(int arr[], int n, int key) {
   int min = 0 ;
   int max = n-1 ;
   int mid ;
   while(max >= min) {
       mid = (min + max) / 2 ;
       printf("%d\n", mid);
       if(arr[mid] == key)
           return  mid ;
       else if(key < arr[mid])
           min = mid + 1 ;
       else
           max = mid - 1 ;
   }
   return -1 ;
}

