Node* Reverse(Node * Home){
    Node *p,*q,*r;
    p=Home;
    q=NULL;
    r=NULL;
    while (p!=NULL){
        q=p;
        p=p->Next;
        q->Next=r;
        r=q;
    }
    return q;
}  