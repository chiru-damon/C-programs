#include<stdio.h>

void Quick(int a[],int low,int high);
int Partition(int a[],int low, int high);

void main(){
    int a[]={3,52,7,1,8,10};
    int n= sizeof(a)/4,i;
    Quick(a,0,n-1);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }printf("\n");
}

int Partition(int a[],int low,int high){
    int pivot=a[low],temp;
    int i=low+1;
    int j=high;
    while(i<=j){
        while(a[i]<=pivot){
        i++;}
        while(a[j]>pivot){
        j--;}
        printf("%d %d \n",i,j);
        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[j];
    a[j]=pivot;
    pivot=temp;
    return j;
}

void Quick(int a[],int low,int high){
    if(low>high){
        return;
    }else{
        int pivot = Partition(a,low,high);
        Quick(a,low,pivot-1);
        Quick(a,pivot+1,high);
    }
}