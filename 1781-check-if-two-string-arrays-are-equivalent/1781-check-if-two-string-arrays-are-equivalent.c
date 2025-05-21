bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
     int n=word1Size;
     int m=word2Size;
     int l1=0,l2=0;
     for(int i=0;i<n;i++)
     {
         l1+=strlen(word1[i]);
     }
      for(int i=0;i<m;i++)
     {
         l2+=strlen(word2[i]);
     }
     char *s1=(char*)malloc((l1+1)*sizeof(char));
     char *s2=(char*)malloc((l2+1)*sizeof(char));
     s1[0]='\0';
     s2[0]='\0';
     for(int i=0;i<n;i++)
     {
        strcat(s1,word1[i]);
     }
      for(int i=0;i<m;i++)
     {
        strcat(s2,word2[i]);
     }
     return strcmp(s1,s2)==0;
}