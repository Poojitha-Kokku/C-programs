#include<stdio.h>
int main()
{
    int arr1=5,arr2=5,arr_merge,i,j;
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,10};
    arr_merge=arr1+arr2;
    int c[arr_merge];
    for(i=0;i<arr1;i++)
    {
        c[i]=a[i];
    }
    for(i=0,j=arr1;
    j<arr_merge && i<arr2;i++,j++)
    {
        c[j]=b[i];
    }
    for(i=0;i<arr_merge;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}
    
