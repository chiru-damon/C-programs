#include<stdio.h>
void main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            printf("  ");
        }
        for(int j=1;j<=i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}