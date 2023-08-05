#include<stdio.h>
void Bubble(int a[],int n);
void main(){
    int a[]={3,46,556,53,6,7,8,3,5,7,734,5,656,54};
    int i=0;
    Bubble(a,sizeof(a)/4);
    for(i=0;i<sizeof(a)/4;i++){
        printf("%d ",a[i]);
    }
}
void Bubble(int a[],int n){
    int i,j;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
