void OrdSort(Node * Home){
    Node *p,*q;
    for(p=Home;p->Next!=NULL;p=p->Next){
        for(q=p->Next;q!=NULL;q=q->Next){
            if(p->Data>q->Data){
                int temp=p->Data;
                p->Data=q->Data;
                q->Data=temp;
            }
        }
    }
}