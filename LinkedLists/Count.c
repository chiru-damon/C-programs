int Count(Node *Home){
    Node *p;
    int count=0;
    p=Home;
    while(p!=NULL){
        count+=1;
        p=p->Next;
    }
    return count;
}