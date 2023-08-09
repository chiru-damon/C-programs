void Display(DNode * Home){
    DNode *p;
    int i=0;
    p=Home;
    while(p!=NULL){
        printf("Data in Node  %d is %d  \n",i+1,p->Data);
        p=p->Right;
        i++;
    }
    printf("\n");
}