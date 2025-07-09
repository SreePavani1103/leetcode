bool isAcronym(char** words, int wordsSize, char* s) {
  int n=wordsSize;
  char *s2=(char*)malloc((n+1)*sizeof(char));
  for(int i=0;i<n;i++)
  {
    s2[i]=words[i][0];
  }  
  s2[n]='\0';
  if(strcmp(s,s2)==0)
  return true;
  else
  return false;
}