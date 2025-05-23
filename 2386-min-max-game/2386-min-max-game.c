int minMaxGame(int* nums, int numsSize) {
    int n=numsSize;
    while(n>1)
    {
        for(int i=0;i<n/2;i++)
        {
           if(i%2==0)
           {
              if(nums[2*i]<nums[2*i+1])
              nums[i]=nums[2*i];
              else
              nums[i]=nums[2*i+1];
           }
           else
          {
              if(nums[2*i]>nums[2*i+1])
              nums[i]=nums[2*i];
              else
              nums[i]=nums[2*i+1];
           }
        }
        n--;
    }
    return nums[0];
}