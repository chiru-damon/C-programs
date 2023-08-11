#include<stdio.h>
void main(){
    int n=9;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++)
        printf("%d ",j+1);
        for(int j=0;j<i*2;j++)
        printf("  ");
        for(int j=n-i;j>0;j--)
        printf("%d ",j);
        printf("\n");
    }
    n=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i+2;j++)
        printf("%d ",j);
        for(int j=(n-i)*2;j>0;j--)
        printf("  ");
        for(int j=i+1;j>0;j--)
        printf("%d ",j);
        printf("\n");
    }
}