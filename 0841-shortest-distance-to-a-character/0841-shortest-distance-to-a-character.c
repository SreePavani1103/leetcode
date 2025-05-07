/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shortestToChar(char* s, char c, int* returnSize) {
   int n=strlen(s);
   *returnSize=n;
   int *ans=(int *)malloc(n*sizeof(int));
   for(int i=0;i<n;i++) 
   {
    int min=n;
    for(int j=0;j<n;j++)
    {
    if(s[j]==c)
    {
        int d=abs(i-j);
      if(d<min)
      min=d;
    }
    }
    ans[i]=min;
   }
   return ans;
}