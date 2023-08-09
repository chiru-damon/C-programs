

void BubSort(Node *Home){
    Node *q;
    int count=Count(Home);\
    for(int i=1;i<count;i++){
        q=Home;
        for(int j=0;j<count-i;j++){
            if(q->Next->Data<q->Data){
                int temp=q->Next->Data;
                q->Next->Data=q->Data;
                q->Data=temp;
            }
            q=q->Next;
        }
    }
}