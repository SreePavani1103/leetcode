bool isPalindrome(char* s) {
   int n=strlen(s);
   char temp[n+1];
   int j=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]>='A' && s[i]<='Z')
       {
        temp[j++]=s[i]+32;
       }
       else if(s[i]>='a' && s[i]<='z' ||s[i]>='0' && s[i]<='9')
       {
            temp[j++]=s[i];
       }
   }
   temp[j]='\0';
    int i=0,k=j-1;
    while(i<k)
    {
        if(temp[i]!=temp[k])
        {
            return false;
        }
        i++;
        k--;
    }
    return true;
}