#include<stdio.h>
void main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            printf("$ ");
        for(int j=0;j<(n-i-1)*2;j++)
            printf("  ");
        for(int j=0;j<=i;j++)
            printf(" $");
        printf("\n");
    }
    n=n-1;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--)
            printf("$ ");
        for(int  j=0;j<(i+1)*2;j++)
            printf("  ");
        for(int j=n-i;j>0;j--)
            printf(" $");
        printf("\n");
    }
}