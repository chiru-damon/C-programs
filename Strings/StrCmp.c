
int StrCmp(char *str1,char *str2){
    int i=0;
    do{
        if(str1[i]-str2[i]!=0){
            return str1[i]-str2[i];
        }
    }while(str1[i++]!='\0');
    return 0;
}
