#include<stdio.h>
#include<stdlib.h>

Node *Create(int n){
    Node * Home,*p,*Temp;
    int i=0,x;
    while(i<n){
        printf("Enter the Data for Node %d : ",i+1);
        scanf("%d",&x);
        Temp=(Node *)malloc(sizeof(Node));
        Temp->Data=x;
        Temp->Next=NULL;
        if(i==0){
            Home=Temp;
            p=Home;
        }else{
        p->Next=Temp;
        p=p->Next;}
        i++;
    }
    return Home;
}
