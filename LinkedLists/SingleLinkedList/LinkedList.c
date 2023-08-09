#include<stdio.h>
#include<stdlib.h>
#include"Node.c"
#include"Create.c"
#include"Display.c"
#include"Count.c"
#include"BubSort.c"

    void main(){
    int n;
    Node * Home,*p;
    printf("enter no of nodes : ");
    scanf("%d",&n);
    Home=Create(n);
    Display(Home);
    BubSort(Home);
    Display(Home);
}
 