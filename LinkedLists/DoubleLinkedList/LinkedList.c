#include<stdio.h>
#include<stdlib.h>
#include"DNode.c"
#include"Display.c"
#include"Create.c"
#include"DelNode.c"

void main(){
    int n;
    DNode *Home;
    printf("Enter No of Nodes :");
    scanf("%d",&n);
    Home = Create(n);
}