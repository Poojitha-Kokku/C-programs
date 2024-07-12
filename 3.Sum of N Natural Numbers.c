#include <stdio.h>
void main() {
    int i,n,sum;
    printf("n:");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum is %d",sum);
}
