int smallestIndex(int* nums, int numsSize) {
   int n=numsSize;
   for(int i=0;i<n;i++)
   {
       int sum=0;
       int k=nums[i];
       while(k>0)
       {
          int r=k%10;
          sum+=r;
          k=k/10;
       }
        if(sum==i)
     return i;
   } 
   return -1;
}