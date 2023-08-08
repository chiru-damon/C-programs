#include<stdio.h>
#include<stdlib.h>
#include"Node.c"
#include"Create.c"


typedef struct Tag Node;

    void main(){
    int n;
    Node * Home,*p;
    printf("enter no of nodes : ");
    scanf("%d",&n);
    Home=Create(n);
    p=Home;
    while (p!=NULL){
        printf("%d ",p->Data);
        p=p->Next;
    }
}
 
