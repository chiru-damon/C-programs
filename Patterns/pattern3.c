#include<stdio.h>
void main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=n;j>i+1;j--){
            printf("  ");
        }
        for(int j=1;j<=i+1;j++){
            printf("%d ",i+1);
        }
        printf("\n");
    }
    for(int i=4;i>0;i--){
        for(int j=0;j<n-i;j++){
            printf("  ");
        }
        for(int j=0;j<i;j++){
            printf("%d ",i);
        }
    printf("\n"); 
    }
}