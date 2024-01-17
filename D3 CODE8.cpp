#include <stdio.h>
int arraySortedCheck(int arr[], int n){
   for (int i = 0; i < n; ++i){
      if(arr[n-1] < arr[n-2])
         return 0;
   }
   return 1;
}
int main(int argc, char const *argv[]){
   int arr[] = {1,8,3,4,7};
   int n = sizeof(arr)/sizeof(arr[0]);
   if(arraySortedCheck(arr, n)){
      printf("Array is in sorted order");
   }
   else
      printf("Array is not in sorted order");
   return 0;
}
