int smallestEqual(int* nums, int numsSize) {
    int *ans=(int*)malloc(101*sizeof(int));
    int n=numsSize;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(i%10==nums[i])
        {
          ans[j++]=i;
        }
    }
    if(j==0)
    return -1;
    int min=ans[0];
   for(int i=0;i<j;i++)
   {
     if(min>ans[i])
     {
        min=ans[i];
     }
   }
   return min;
}