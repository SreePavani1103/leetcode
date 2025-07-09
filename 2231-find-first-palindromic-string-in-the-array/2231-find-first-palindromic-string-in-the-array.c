int ispal(char *s)
{
    int l=0;
    int r=strlen(s)-1;
    while(l<r)
    {
        if(s[l]!=s[r])
        return 0;
        else
        {
            l++;
            r--;
        }
    }
    return 1;
}
char* firstPalindrome(char** words, int wordsSize) {
    int n=wordsSize;
    for(int i=0;i<n;i++)
     {
    if(ispal(words[i])==1)
    return words[i];
    }
return "";
}