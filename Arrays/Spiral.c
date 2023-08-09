#include<stdio.h>

void main(){
    int a[][4]={ {1,2,3,4}, 
                 {2,3,4,5},
                 {1,6,5,6}};
    int i,j,n=4,m=3,k=0,l=0;
    int ii=0,jj=0;
    i=n,j=m;
    while(i>0 && j>0){
        for(ii=0;ii<i-1;ii++){
            printf("%d ",a[k][l++]);
        }
        for(jj=0;jj<j-1;jj++){
            printf("%d ",a[k++][l]);
        }
        for(ii=0;ii<i-1;ii++){
            printf("%d ",a[k][l--]);
        }
        for(jj=0;jj<j-1;jj++){
            printf("%d ",a[k--][l]);
        }i=i-2;
        j=j-2;
        k++;
        l++;
    }
    
}