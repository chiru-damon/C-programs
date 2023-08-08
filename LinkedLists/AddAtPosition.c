Node * AddAtPosition(Node *Home,int data,int position){
    int i=0;
    Node *Temp,*p,*q;
    p=Home;
    Temp=(Node *)malloc(sizeof(Node));
    Temp->Data=data;
    Temp->Next=NULL;
    q=p;
    if(position>0){
        while(p!=NULL && i<position){
            q=p;
            p=p->Next;
            i++;
        }
        q->Next=Temp;
        Temp->Next=p;
    }else{
        Home=Temp;
        Temp->Next=p;
    }
    return Home;
}