#include<stdio.h>
void Insertion(int a[],int n);
void main(){
    int i;
    int a[]={5,4,6,3,7,2,8,1,9};
    Insertion(a,sizeof(a)/4);
    for(i=0;i<sizeof(a)/4;i++){
        printf("%d ",a[i]);
    }
}

void Insertion(int a[],int n){
    int i,j,k,key;
    for(i=0;i<n;i++){
        key=a[i];
        for(j=0;j<i;j++){
            if(a[j]>key){
                for(k=i;k>j;k--)
                a[k]=a[k-1];
                a[j]=key;
                break;
            }
        }
        for(j=0;j<n;j++){
            printf("%d ",a[j]);
        }printf("\n");
    }
}