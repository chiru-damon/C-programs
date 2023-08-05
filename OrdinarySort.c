#include<stdio.h>
void Ordinary(int a[],int n);
void main(){
    int a[]={3,46,556,53,6,7,8,3,5,7,734,5,656,54};
    int i=0;
    Ordinary(a,sizeof(a)/4);
    for(i=0;i<sizeof(a)/4;i++){
        printf("%d ",a[i]);
    }
}
void Ordinary(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
