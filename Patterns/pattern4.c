#include<stdio.h>
void main(){
    int n=20;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            printf("  ");
        }
        for(int j=1;j<=i+1;j++){
            printf("%4d",i+1);
        }
        printf("\n");
    }
}