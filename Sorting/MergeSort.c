#include<stdio.h>
void Merge(int a[],int low,int mid,int high);
void Divide(int a[],int low,int high);
void main(){
    int a[]={100,10,90,20,80,30,70,40,60,50};
    Divide(a,0,sizeof(a)/4-1);
    for(int i=0;i<sizeof(a)/4;i++){
        printf("%d ",a[i]);
    }printf("\n");
}
void Divide(int a[],int low,int high){
    if (low == high){
        return;
    }else{
        int mid= low+((high-low)/2);
        Divide(a,low,mid);
        Divide(a,mid+1,high);
        Merge(a,low,mid,high);
    }
}
void Merge(int a[],int low,int mid,int high){
    int c[high-low];
    int i=low,j=mid+1;
    int k=0;
    
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            c[k++]=a[i++];
        }if(a[i]>a[j]){
            c[k++]=a[j++];
        }
    }
    while(i<=mid){
        c[k++]=a[i++];
    }
    while(j<=high){
        c[k++]=a[j++];
    }
    j=0;
    for(i=low;i<low+k;i++){
        a[i]=c[j++];
    }
   
}