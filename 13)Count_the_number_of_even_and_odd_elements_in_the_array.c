#include <stdio.h>
int main()
{
    int arr[100];
    int i,n,even,odd;
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    even=0;
    odd=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even elements in the array:%d\n",even);
    printf("Odd elements in the array:%d",odd);
    return 0;
}
