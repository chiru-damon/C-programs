#include<stdio.h>
#include<stdlib.h>
struct Tag {
    int Data;
    struct Tag *Next;
};

typedef struct Tag Node;

void main(){
    Node *Home;
    int n=5;
    Node *p;
    for(int i=0;i<n;i++){
        Node* Temp=(Node *)malloc(sizeof(Node));
        Temp->Data=i*i;
        Temp->Next=NULL;
        if(i==0){
            p=Temp;
            Home=p;
        }else{
            p->Next=Temp;
            p=p->Next;
        }
    }
    p=Home;
    while(p!=NULL){
        printf("%d ",p->Data);
        p=p->Next;
    }
}