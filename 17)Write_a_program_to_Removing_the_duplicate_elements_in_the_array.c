#include<stdio.h>
int main(){
   int arr[25], i, j, k, size;
   scanf("%d",&size);
   printf("Enter Elements of the array:\n");
   for(i=0;i<size;i++){
      scanf("%d",&arr[i]);
   }
   for(i=0;i<size;i++){
      for(j = i+1; j < size; j++){
         if(arr[i] == arr[j]){
            for(k = j; k < size; k++){
               arr[k] = arr[k+1];
            }
            j--;
            size--;
         }
      }
   }
   printf("After removing the duplicate elements:\n");
   for(i=0;i<size;i++){
      printf("%d ",arr[i]);
   }
}
