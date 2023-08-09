
char *StrCpy(char *s1,char *s2){
    for(int i=0;s1[i]!='\0';i++){
        s2[i]=s1[i];
    }
    return s2;
}
