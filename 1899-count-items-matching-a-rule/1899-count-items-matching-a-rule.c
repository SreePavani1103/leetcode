int countMatches(char*** items, int itemsSize, int* itemsColSize, char* ruleKey, char* ruleValue) {
    int n=itemsSize;
    int k=0;
    int c;
    if(strcmp(ruleKey,"type")==0)
    c=0;
    else if(strcmp(ruleKey,"color")==0)
    c=1;
    else
    c=2;
    for(int i=0;i<n;i++)
    {
        if(strcmp(items[i][c],ruleValue)==0)
        k++;
    }
    return k;
}