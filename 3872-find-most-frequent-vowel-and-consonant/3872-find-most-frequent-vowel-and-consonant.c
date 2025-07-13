int maxFreqSum(char* s) {
    int n=strlen(s);
    int dc[5]={0};
    int df[256]={0};
    for(int i=0;i<n;i++)
    {
        char ch=s[i];
      if(ch=='a') dc[0]++;
      else if(ch=='e') dc[1]++;
      else if(ch=='i') dc[2]++;
       else if(ch=='o') dc[3]++;
        else if(ch=='u') dc[4]++;
        else
        {
          df[(unsigned char)ch]++;
        }
    }
     int m1=dc[0];
    for(int i=0;i<5;i++)
    {
       if(m1<dc[i])
       {
       m1=dc[i];
       }
    }
    int m2=df[0];
    for(int i=0;i<256;i++)
    {
       if(m2<df[i])
       {
       m2=df[i];
       }
    }
    return m1+m2;
}