DNode * DelNode(DNode *Home,int n){
    DNode *p,*q,*r;
    if(Home==NULL){
        printf("Double Linked List is Empty\n");
    }else{
        if(n>0){
            int i=0;
            p=Home;
            while(p!=NULL && i<n){
                r=q;
                q=p;
                p=p->Right;
                i++;
            }
            if(p==NULL){
                r->Right=NULL;
            }else{
                r->Right=p;
                p->Left=r;
            }
            free(q);
        }else{
            p=Home;
            Home=Home->Right;
            p->Right=NULL;
            Home->Left=NULL;
            free(p);
            n=1;
        }
    }
    printf("Node %d is Deleted \n",n);
    return Home;
}