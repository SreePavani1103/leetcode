int unequalTriplets(int* nums, int numsSize) {
   int n=numsSize;
   int cnt=0;
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(nums[i]!=nums[j])
        {
            for(int k=j+1;k<n;k++)
            {
                if(nums[i]!=nums[k]&& nums[j]!=nums[k] )
                {
                     cnt++;
                }
            }
        }
    }
   } 
   return cnt;
}