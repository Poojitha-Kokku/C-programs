#include <stdio.h>
void main() {
    int count,x;
    scanf("%d",&x);
    count=0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0)    
        count=count+i;
    }
    if(count>2)
    printf("%d is not a prime",x);
    else
    printf("%d is prime",x);
}
