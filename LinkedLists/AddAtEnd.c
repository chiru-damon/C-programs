void AddAtEnd(Node * Home,int data){
    Node *p,*Temp;
    p=Home;
    while(p->Next!=NULL){
        p=p->Next;
    }
    Temp=(Node*)malloc(sizeof(Node));
    Temp->Data=data;
    Temp->Next=NULL;
    p->Next=Temp;
    return;
}