DNode *DelLast(DNode *Home){
    DNode *p,*q;
    p=Home;
    while(p->Right!=NULL){
        q=p;
        p=p->Right;
    }
    q->Right=NULL;
    p->Left=NULL;
    free(p);
    printf("Last Node Deleted");
    return Home;
}