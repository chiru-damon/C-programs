Node * AddAtBegin(Node * Home,int data){
    Node * Temp= (Node *)malloc(sizeof(Node));
    Node *p;
    p=Home;
    Temp->Data=data;
    Temp->Next=NULL;
    Home=Temp;
    Temp->Next=p;
    return Home;
}