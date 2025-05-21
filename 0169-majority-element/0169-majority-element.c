int majorityElement(int* nums, int numsSize) {
   int candidate=nums[0];
   int c=0;
   for(int i=0;i<numsSize;i++)
   {
    if(nums[i]==candidate)
    {
        c++;
    }
    else
    {
        c--;
    }
    if(c==0)
    {
        candidate=nums[i];
        c=1;
    }
   } 
   c=0;
   for(int i=0;i<numsSize;i++)
   {
        nums[i]=candidate;
        c++;
   }
   if(c>numsSize/2)
   return candidate;
   else
   return -1;
}