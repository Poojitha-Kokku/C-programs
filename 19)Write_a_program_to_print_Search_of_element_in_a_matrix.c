#include <stdio.h>
int main(){
    int a[3][3]={{0,1,2}, {3,4,5}, {6,7,8}};
    int search=3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]==search){
                printf("Element is found at (%d, %d) position",i,j);
            }
        }
    }
}
