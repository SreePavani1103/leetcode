char* maximumOddBinaryNumber(char* s) {
   int n=strlen(s);
   int o=0,z=0;
   for(int i=0;i<n;i++)
   {
    if(s[i]=='1')
    o++;
    else
    z++;
   }
   char *res=(char*)malloc((n+1)*sizeof(char));
   int k=0;
   for(int i=0;i<o-1;i++)
   {
    res[k]='1';
    k++;
   }
   for(int i=0;i<z;i++)
   {
    res[k]='0';
    k++;
   }
   res[k++]='1';
   res[k]='\0';
   return res;
}