void Display(Node * Home){
    int i=1;
    while(Home!=NULL){
        printf("Data of Node %d is %d  \n",i++,Home->Data);
        Home=Home->Next;
    }
    printf("\n");
}