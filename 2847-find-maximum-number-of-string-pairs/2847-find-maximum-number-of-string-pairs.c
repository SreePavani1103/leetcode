void reverse(char *s,char *s2)
{
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        s2[i]=s[l-i-1];
    }
    s2[l]='\0';
}
int maximumNumberOfStringPairs(char** words, int wordsSize) {
    int n=wordsSize;
    int c=0;
    for(int i=0;i<n;i++)
    {
        int ln=strlen(words[i]);
        char *s1=(char *)malloc((ln+1)*sizeof(char));
        for(int j=i+1;j<n;j++)
        {
             reverse(words[i],s1);
             if(strcmp(words[j],s1)==0)
             {
                c++;
             }
        }
    }
    return c;
}