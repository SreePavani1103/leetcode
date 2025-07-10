int numOfStrings(char** patterns, int patternsSize, char* word) {
    int n=patternsSize;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(strstr(word,patterns[i])!=NULL)
        {
            c++;
        }
    }
    return c;
}