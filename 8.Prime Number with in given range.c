#include <stdio.h>
int main() {
    int count,x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        count=0;
        for(int j=1;j<i+1;j++)
    {
        if(i%j==0)
        count=count+1;
    }
    if(count==2)
    printf("%d is prime\n",x);
    }
}

