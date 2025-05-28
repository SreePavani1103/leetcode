int largestAltitude(int* gain, int gainSize) {
   int n=gainSize;
   int *ans=(int *)malloc((n+1)*sizeof(int));
   ans[0]=0;
   for(int i=1;i<=n;i++)
   {
       ans[i]=ans[i-1]+gain[i-1];
   }
   int max=ans[0];
   for(int i=1;i<=n;i++)
   {
    if(max<ans[i])
    max=ans[i];
   }
   return max;
}