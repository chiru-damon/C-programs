DNode* Create(int n){
    int i=0,x;
    DNode *Home=NULL,*Temp,*p=NULL;
    while(i<n){
        Temp=(DNode *)malloc(sizeof(DNode));
        Temp->Left=NULL;
        Temp->Right=NULL;
        printf("Enter the value for Node %d : ",i+1);
        scanf("%d",&x);
        Temp->Data=x;
        if (Home==NULL){
            Home=Temp;
            p=Home;
        }else{
            p->Right=Temp;
            Temp->Left=p;
            p=Temp;
        }
        i++;
    }
    return Home;
}